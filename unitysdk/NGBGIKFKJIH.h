#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJPBCNIIEOB.h"
#include "unitysdk/IGKFNIEJGLM.h"
class FIFPADNLPLB;
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define NGBGIKFKJIH_AHMANEHOKMO_OFFSET UNITYSDK_OFFSET(0xBBA1A20)
#define NGBGIKFKJIH_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xBBA1B10)
#define NGBGIKFKJIH_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xBBA1C00)
#define NGBGIKFKJIH_CMNCIKIHACB_OFFSET UNITYSDK_OFFSET(0xBBA13C0)
#define NGBGIKFKJIH_CONJFLCNMHG_OFFSET UNITYSDK_OFFSET(0xBBA1580)
#define NGBGIKFKJIH_CTOR_OFFSET UNITYSDK_OFFSET(0xBBA1CD0)
#define NGBGIKFKJIH_GMFCFCGIOEB_OFFSET UNITYSDK_OFFSET(0xBBA17F0)
#define NGBGIKFKJIH_JPPFCPGPOFG_OFFSET UNITYSDK_OFFSET(0xBBA1490)
#define NGBGIKFKJIH_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xBBA1360)
#define NGBGIKFKJIH__ONBIND_OFFSET UNITYSDK_OFFSET(0xBBA12F0)

	class NGBGIKFKJIH : public ::GJPBCNIIEOB
	{
	public:
		::UnityEngine::Animator* CFNGLMDMENE; // 0x168
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::Object KIMNFENLOGP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGBGIKFKJIH_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGBGIKFKJIH__ONBIND_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + NGBGIKFKJIH_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void JPPFCPGPOFG(::FIFPADNLPLB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FIFPADNLPLB*))((::PBYTE)hIl2Cpp + NGBGIKFKJIH_JPPFCPGPOFG_OFFSET))(this, a1);
		}

		::System::Void CMNCIKIHACB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGBGIKFKJIH_CMNCIKIHACB_OFFSET))(this);
		}

		::System::Void CONJFLCNMHG(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NGBGIKFKJIH_CONJFLCNMHG_OFFSET))(this, a1);
		}

		::System::Void GMFCFCGIOEB(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NGBGIKFKJIH_GMFCFCGIOEB_OFFSET))(this, a1);
		}

		::System::Void AHMANEHOKMO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NGBGIKFKJIH_AHMANEHOKMO_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGBGIKFKJIH_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGBGIKFKJIH_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
