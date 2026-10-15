#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class MNBNFBAMKKI;
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Text; }

#define PEPMBAEBOJL_CTOR_OFFSET UNITYSDK_OFFSET(0xC1F2270)
#define PEPMBAEBOJL_FBOMHBFNCGB_OFFSET UNITYSDK_OFFSET(0xC1F1B30)
#define PEPMBAEBOJL_FIMAAJNPKDA_OFFSET UNITYSDK_OFFSET(0xC1F2130)
#define PEPMBAEBOJL_GGGEICEJCBC_OFFSET UNITYSDK_OFFSET(0xC1F1B80)
#define PEPMBAEBOJL_HJHGABLJPMN_OFFSET UNITYSDK_OFFSET(0xC1F1C90)
#define PEPMBAEBOJL_LMEBAKEPDHJ_OFFSET UNITYSDK_OFFSET(0xC1F1BF0)
#define PEPMBAEBOJL_OEGEJANKEJP_OFFSET UNITYSDK_OFFSET(0xC1F1900)
#define PEPMBAEBOJL_PAGLLPFNJED_OFFSET UNITYSDK_OFFSET(0xC1F18A0)
#define PEPMBAEBOJL__ONBIND_OFFSET UNITYSDK_OFFSET(0xC1F2180)
#define PEPMBAEBOJL__ONTICK_OFFSET UNITYSDK_OFFSET(0xC1F1E00)

inline static constexpr unsigned int PEPMBAEBOJL_TypeDefinitionIndex = 71745;

	class PEPMBAEBOJL : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::UIStateCtrl* LOPDDKFEJEH; // 0x60
		::RPG::GameCore::GameEntity* IFFIKGMJFIJ; // 0x68
		::UnityEngine::Animation* KCOAILOHDND; // 0x70
		::UnityEngine::UI::Text* CNICLEDFLFF; // 0x78
		::RPG::GameCore::FixPoint MMOCIIJHFHL; // 0x80
		::System::Int32 GIDLIKPCPPB; // 0x88
		::System::Boolean AHILIHNBCPB; // 0x8C
		::System::Boolean DLGFMPNEHGO; // 0x8D
		::System::Boolean GHHFHLIBPGA; // 0x8E
		// static const ::System::String* OFJONCKDGPG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPMBAEBOJL_CTOR_OFFSET))(this);
		}

		::System::Void PAGLLPFNJED(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PEPMBAEBOJL_PAGLLPFNJED_OFFSET))(this, a1);
		}

		::System::Void OEGEJANKEJP(::MNBNFBAMKKI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNBNFBAMKKI*))((::PBYTE)hIl2Cpp + PEPMBAEBOJL_OEGEJANKEJP_OFFSET))(this, a1);
		}

		::System::Void GGGEICEJCBC(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PEPMBAEBOJL_GGGEICEJCBC_OFFSET))(this, a1);
		}

		::System::Void LMEBAKEPDHJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPMBAEBOJL_LMEBAKEPDHJ_OFFSET))(this);
		}

		::System::Void HJHGABLJPMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPMBAEBOJL_HJHGABLJPMN_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PEPMBAEBOJL__ONTICK_OFFSET))(this, a1);
		}

		::System::Void FBOMHBFNCGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPMBAEBOJL_FBOMHBFNCGB_OFFSET))(this);
		}

		::System::Void FIMAAJNPKDA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPMBAEBOJL_FIMAAJNPKDA_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPMBAEBOJL__ONBIND_OFFSET))(this);
		}

	};
