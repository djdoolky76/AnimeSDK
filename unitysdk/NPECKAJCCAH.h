#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DMGLFMNEJGL;
class OOBCBPNPOLG;
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NPECKAJCCAH_BEJAJNEFHIB_OFFSET UNITYSDK_OFFSET(0xBCFBFA0)
#define NPECKAJCCAH_CDJNMHPENGN_OFFSET UNITYSDK_OFFSET(0xBCFBEB0)
#define NPECKAJCCAH_CGEBKHOIAFI_OFFSET UNITYSDK_OFFSET(0xBCFBF40)
#define NPECKAJCCAH_CTOR_OFFSET UNITYSDK_OFFSET(0xBCFC240)
#define NPECKAJCCAH_DENOJDPJKJD_OFFSET UNITYSDK_OFFSET(0xBCFBBE0)
#define NPECKAJCCAH_GCFPICNDPJK_OFFSET UNITYSDK_OFFSET(0xBCFBE10)
#define NPECKAJCCAH_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0xBCFBB60)

	class NPECKAJCCAH : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::OOBCBPNPOLG*>* EBEKFJIIIFJ; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPECKAJCCAH_CTOR_OFFSET))(this);
		}

		::System::Object* GetContext(::System::Type* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NPECKAJCCAH_GETCONTEXT_OFFSET))(this, a1);
		}

		::System::Void DENOJDPJKJD(::OOBCBPNPOLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OOBCBPNPOLG*))((::PBYTE)hIl2Cpp + NPECKAJCCAH_DENOJDPJKJD_OFFSET))(this, a1);
		}

		::System::Void GCFPICNDPJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPECKAJCCAH_GCFPICNDPJK_OFFSET))(this);
		}

		::System::Boolean CDJNMHPENGN(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NPECKAJCCAH_CDJNMHPENGN_OFFSET))(this, a1);
		}

		::System::Boolean CGEBKHOIAFI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPECKAJCCAH_CGEBKHOIAFI_OFFSET))(this);
		}

		::System::Object* BEJAJNEFHIB(::System::String* a1, ::System::String* a2, ::DMGLFMNEJGL* a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::String*, ::DMGLFMNEJGL*))((::PBYTE)hIl2Cpp + NPECKAJCCAH_BEJAJNEFHIB_OFFSET))(this, a1, a2, a3);
		}

	};
