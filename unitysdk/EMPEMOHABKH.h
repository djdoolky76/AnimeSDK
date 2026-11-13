#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class KLJLODIBPDF;
namespace RPG::Client { class AnimatorButton; }
namespace System { class Object; }

#define EMPEMOHABKH_CTOR_OFFSET UNITYSDK_OFFSET(0x188019E0)
#define EMPEMOHABKH_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x18801730)
#define EMPEMOHABKH_LCFNCHEHDNC_OFFSET UNITYSDK_OFFSET(0x188018E0)
#define EMPEMOHABKH_LLJCFGLFGDP_OFFSET UNITYSDK_OFFSET(0x18801890)
#define EMPEMOHABKH_NEOFNEBLKKL_OFFSET UNITYSDK_OFFSET(0x18801980)
#define EMPEMOHABKH__ONBIND_OFFSET UNITYSDK_OFFSET(0x18801680)
#define EMPEMOHABKH__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x18801840)

inline static constexpr unsigned int EMPEMOHABKH_TypeDefinitionIndex = 73745;

	class EMPEMOHABKH : public ::FMPCODLIOLG
	{
	public:
		::KLJLODIBPDF* EAGJDPFNCPF; // 0x60
		::RPG::Client::AnimatorButton* PFBLCICMBBK; // 0x68
		::System::Boolean EINNACFPAEN; // 0x70
		// static const ::System::String* DJCBDJMACFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPEMOHABKH_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPEMOHABKH__ONBIND_OFFSET))(this);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPEMOHABKH_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPEMOHABKH__SETUPVIEW_OFFSET))(this);
		}

		::System::Void LLJCFGLFGDP(::KLJLODIBPDF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLJLODIBPDF*))((::PBYTE)hIl2Cpp + EMPEMOHABKH_LLJCFGLFGDP_OFFSET))(this, a1);
		}

		::System::Void LCFNCHEHDNC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EMPEMOHABKH_LCFNCHEHDNC_OFFSET))(this, a1);
		}

		::System::Void NEOFNEBLKKL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMPEMOHABKH_NEOFNEBLKKL_OFFSET))(this, a1);
		}

	};
