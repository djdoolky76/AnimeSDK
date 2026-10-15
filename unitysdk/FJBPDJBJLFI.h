#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class KALGLFPKCGH;
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class MonoUIColorSwitcher; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define FJBPDJBJLFI_CTOR_OFFSET UNITYSDK_OFFSET(0x157B1250)
#define FJBPDJBJLFI_FHCGCJCHIIH_OFFSET UNITYSDK_OFFSET(0x157B0ED0)
#define FJBPDJBJLFI_GMCMIFMHCHJ_OFFSET UNITYSDK_OFFSET(0x157B10B0)
#define FJBPDJBJLFI_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x157B0E70)
#define FJBPDJBJLFI_OFPJPKJDECJ_OFFSET UNITYSDK_OFFSET(0x157B1180)
#define FJBPDJBJLFI__ONBIND_OFFSET UNITYSDK_OFFSET(0x157B0D30)

inline static constexpr unsigned int FJBPDJBJLFI_TypeDefinitionIndex = 72265;

	class FJBPDJBJLFI : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::MonoUIColorSwitcher* MIALHNKKOED; // 0x60
		::RPG::Client::GridFightRole* IAHCEGHHCKB; // 0x68
		::UnityEngine::UI::Image* HPCAJDKDMEI; // 0x70
		::UnityEngine::UI::Image* GOBAHDNAOLK; // 0x78
		::UnityEngine::Transform* PIDMCEILGKI; // 0x80
		::KALGLFPKCGH* LMOMJGDIBBE; // 0x88
		// static const ::System::String* DJCBDJMACFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJBPDJBJLFI_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJBPDJBJLFI__ONBIND_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + FJBPDJBJLFI_NKPPGDENJAE_OFFSET))(this, a1);
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

	};
