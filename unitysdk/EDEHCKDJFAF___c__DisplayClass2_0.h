#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EDEHCKDJFAF;
namespace RPG::Client { class SkillTreeGrowthGuideItem; }
namespace RPG::GameCore { class AvatarSkillTreeRow; }
namespace RPG::GameCore { class ICharacterSkillRowData; }
namespace System { class String; }

#define EDEHCKDJFAF___C__DISPLAYCLASS2_0_CTOR_OFFSET UNITYSDK_OFFSET(0x13312800)
#define EDEHCKDJFAF___C__DISPLAYCLASS2_0__CREATEITEM_B__0_OFFSET UNITYSDK_OFFSET(0x13312C00)
#define EDEHCKDJFAF___C__DISPLAYCLASS2_0__CREATEITEM_B__1_OFFSET UNITYSDK_OFFSET(0x13312D40)

inline static constexpr unsigned int EDEHCKDJFAF___c__DisplayClass2_0_TypeDefinitionIndex = 65595;

	class EDEHCKDJFAF___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::RPG::Client::SkillTreeGrowthGuideItem* item; // 0x10
		::EDEHCKDJFAF* __4__this; // 0x18
		::RPG::GameCore::AvatarSkillTreeRow* skillTreeRow; // 0x20
		::RPG::GameCore::ICharacterSkillRowData* skillData; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDEHCKDJFAF___C__DISPLAYCLASS2_0_CTOR_OFFSET))(this);
		}

		::System::String* _CreateItem_b__0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDEHCKDJFAF___C__DISPLAYCLASS2_0__CREATEITEM_B__0_OFFSET))(this);
		}

		::System::String* _CreateItem_b__1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDEHCKDJFAF___C__DISPLAYCLASS2_0__CREATEITEM_B__1_OFFSET))(this);
		}

	};
