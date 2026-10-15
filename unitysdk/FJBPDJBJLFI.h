#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class KALGLFPKCGH;
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class MonoUIColorSwitcher; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define FJBPDJBJLFI_CTOR_OFFSET UNITYSDK_OFFSET(0x157BCE50)
#define FJBPDJBJLFI_FHCGCJCHIIH_OFFSET UNITYSDK_OFFSET(0x157BCAC0)
#define FJBPDJBJLFI_GMCMIFMHCHJ_OFFSET UNITYSDK_OFFSET(0x157BCCB0)
#define FJBPDJBJLFI_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x157BCA60)
#define FJBPDJBJLFI_OFPJPKJDECJ_OFFSET UNITYSDK_OFFSET(0x157BCD80)
#define FJBPDJBJLFI__ONBIND_OFFSET UNITYSDK_OFFSET(0x157BC920)

inline static constexpr unsigned int FJBPDJBJLFI_TypeDefinitionIndex = 72266;

	class FJBPDJBJLFI : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::GridFightRole* IAHCEGHHCKB; // 0x60
		::RPG::Client::MonoUIColorSwitcher* MIALHNKKOED; // 0x68
		::UnityEngine::UI::Image* GOBAHDNAOLK; // 0x70
		::UnityEngine::Transform* PIDMCEILGKI; // 0x78
		::UnityEngine::UI::Image* HPCAJDKDMEI; // 0x80
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
