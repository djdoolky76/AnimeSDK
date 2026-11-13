#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class NCEPFJLPECF;
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class UIStateCtrl; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define FJBPDJBJLFI_CTOR_OFFSET UNITYSDK_OFFSET(0x1981B3D0)
#define FJBPDJBJLFI_DOBEKJPDMDC_OFFSET UNITYSDK_OFFSET(0x1981B2E0)
#define FJBPDJBJLFI_FHCGCJCHIIH_OFFSET UNITYSDK_OFFSET(0x1981AF30)
#define FJBPDJBJLFI_GMCMIFMHCHJ_OFFSET UNITYSDK_OFFSET(0x1981B120)
#define FJBPDJBJLFI_NHHEDIDPAHG_OFFSET UNITYSDK_OFFSET(0x1981B380)
#define FJBPDJBJLFI_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x1981AEB0)
#define FJBPDJBJLFI_OFPJPKJDECJ_OFFSET UNITYSDK_OFFSET(0x1981B1E0)
#define FJBPDJBJLFI__ONBIND_OFFSET UNITYSDK_OFFSET(0x1981AC00)

inline static constexpr unsigned int FJBPDJBJLFI_TypeDefinitionIndex = 74340;

	class FJBPDJBJLFI : public ::FMPCODLIOLG
	{
	public:
		::NCEPFJLPECF* LMOMJGDIBBE; // 0x60
		::UnityEngine::UI::Image* HPCAJDKDMEI; // 0x68
		::RPG::Client::GridFightRole* IAHCEGHHCKB; // 0x70
		::UnityEngine::Transform* ELMENNNFEJC; // 0x78
		::RPG::Client::UIStateCtrl* GIMAEGBDOBL; // 0x80
		::UnityEngine::UI::Image* GOBAHDNAOLK; // 0x88
		::UnityEngine::Transform* PIDMCEILGKI; // 0x90
		::System::UInt32 GJGHPFBFBII; // 0x98
		// static const ::System::String* DJCBDJMACFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJBPDJBJLFI_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJBPDJBJLFI__ONBIND_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::RPG::Client::GridFightRole* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*, ::System::UInt32))((::PBYTE)hIl2Cpp + FJBPDJBJLFI_NKPPGDENJAE_OFFSET))(this, a1, a2);
		}

		::System::Void FHCGCJCHIIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJBPDJBJLFI_FHCGCJCHIIH_OFFSET))(this);
		}

		::System::Void GMCMIFMHCHJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJBPDJBJLFI_GMCMIFMHCHJ_OFFSET))(this);
		}

		::System::Void OFPJPKJDECJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJBPDJBJLFI_OFPJPKJDECJ_OFFSET))(this);
		}

		::System::Void DOBEKJPDMDC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJBPDJBJLFI_DOBEKJPDMDC_OFFSET))(this);
		}

		::System::Boolean NHHEDIDPAHG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FJBPDJBJLFI_NHHEDIDPAHG_OFFSET))(this);
		}

	};
