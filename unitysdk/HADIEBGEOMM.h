#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class FCLMONFLHFP;
class FiveDimRenderingItem;
namespace RPG::GameCore { class AnchorInfo; }
namespace RPG::GameCore { class LevelAnchorCoin40Parameter; }
namespace UnityEngine { class GameObject; }

#define HADIEBGEOMM_CTOR_OFFSET UNITYSDK_OFFSET(0x16AF8AD0)
#define HADIEBGEOMM_HHMFILFAMNA_OFFSET UNITYSDK_OFFSET(0x16AF8A20)

inline static constexpr unsigned int HADIEBGEOMM_TypeDefinitionIndex = 80923;

	class HADIEBGEOMM : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* JGOOCFAJAFF; // 0x10
		::RPG::GameCore::AnchorInfo* FEEBOGKKGIG; // 0x18
		::FCLMONFLHFP* LBLEOKEHLBB; // 0x20
		::RPG::GameCore::LevelAnchorCoin40Parameter* HGCAPCENLLP; // 0x28
		::FiveDimRenderingItem* FJCJGFGMCCP; // 0x30
		::System::UInt32 NOPJJBBDMGO; // 0x38
		::System::Single FMHACCBKEPP; // 0x3C
		::System::Single CECJJKAFJAI; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HADIEBGEOMM_CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 HHMFILFAMNA()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + HADIEBGEOMM_HHMFILFAMNA_OFFSET))(this);
		}

	};
