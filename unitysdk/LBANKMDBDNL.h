#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class NPCDataRow; }
namespace RPG::GameCore { class PamSkinConfigRow; }
namespace RPG::GameCore { class StoryCharacterRow; }
namespace System { class String; }

#define LBANKMDBDNL_AIJLLFGIIND_1_OFFSET UNITYSDK_OFFSET(0x1B28AEC0)
#define LBANKMDBDNL_AIJLLFGIIND_2_OFFSET UNITYSDK_OFFSET(0x1B28B070)
#define LBANKMDBDNL_AIJLLFGIIND_OFFSET UNITYSDK_OFFSET(0x1B28AD10)
#define LBANKMDBDNL_FDECKNMAAMG_1_OFFSET UNITYSDK_OFFSET(0x1B28A540)
#define LBANKMDBDNL_FDECKNMAAMG_OFFSET UNITYSDK_OFFSET(0x1B289EF0)
#define LBANKMDBDNL_KDHEFGKOEGJ_1_OFFSET UNITYSDK_OFFSET(0x1B28A5D0)
#define LBANKMDBDNL_KDHEFGKOEGJ_2_OFFSET UNITYSDK_OFFSET(0x1B28A9C0)
#define LBANKMDBDNL_KDHEFGKOEGJ_OFFSET UNITYSDK_OFFSET(0x1B289F80)
#define LBANKMDBDNL_KNNCCLDKFGO_1_OFFSET UNITYSDK_OFFSET(0x1B28A930)
#define LBANKMDBDNL_KNNCCLDKFGO_OFFSET UNITYSDK_OFFSET(0x1B28A4B0)
#define LBANKMDBDNL_PEKDEJEEOLG_OFFSET UNITYSDK_OFFSET(0x1B28A2E0)

inline static constexpr unsigned int LBANKMDBDNL_TypeDefinitionIndex = 57719;

	class LBANKMDBDNL : public ::System::Object
	{
	public:
		static ::System::String* FDECKNMAAMG(::RPG::GameCore::NPCDataRow* a1)
		{
			return ((::System::String*(*)(::RPG::GameCore::NPCDataRow*))((::PBYTE)hIl2Cpp + LBANKMDBDNL_FDECKNMAAMG_OFFSET))(a1);
		}

		static ::System::String* KNNCCLDKFGO(::RPG::GameCore::NPCDataRow* a1)
		{
			return ((::System::String*(*)(::RPG::GameCore::NPCDataRow*))((::PBYTE)hIl2Cpp + LBANKMDBDNL_KNNCCLDKFGO_OFFSET))(a1);
		}

		static ::System::String* FDECKNMAAMG_1(::RPG::GameCore::StoryCharacterRow* a1)
		{
			return ((::System::String*(*)(::RPG::GameCore::StoryCharacterRow*))((::PBYTE)hIl2Cpp + LBANKMDBDNL_FDECKNMAAMG_1_OFFSET))(a1);
		}

		static ::System::String* KNNCCLDKFGO_1(::RPG::GameCore::StoryCharacterRow* a1)
		{
			return ((::System::String*(*)(::RPG::GameCore::StoryCharacterRow*))((::PBYTE)hIl2Cpp + LBANKMDBDNL_KNNCCLDKFGO_1_OFFSET))(a1);
		}

		static ::System::Boolean KDHEFGKOEGJ(::RPG::GameCore::NPCDataRow* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::NPCDataRow*))((::PBYTE)hIl2Cpp + LBANKMDBDNL_KDHEFGKOEGJ_OFFSET))(a1);
		}

		static ::System::Boolean KDHEFGKOEGJ_1(::RPG::GameCore::StoryCharacterRow* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::StoryCharacterRow*))((::PBYTE)hIl2Cpp + LBANKMDBDNL_KDHEFGKOEGJ_1_OFFSET))(a1);
		}

		static ::System::Boolean KDHEFGKOEGJ_2(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + LBANKMDBDNL_KDHEFGKOEGJ_2_OFFSET))(a1);
		}

		static ::System::Boolean AIJLLFGIIND(::RPG::GameCore::NPCDataRow* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::NPCDataRow*))((::PBYTE)hIl2Cpp + LBANKMDBDNL_AIJLLFGIIND_OFFSET))(a1);
		}

		static ::System::Boolean AIJLLFGIIND_1(::RPG::GameCore::StoryCharacterRow* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::StoryCharacterRow*))((::PBYTE)hIl2Cpp + LBANKMDBDNL_AIJLLFGIIND_1_OFFSET))(a1);
		}

		static ::System::Boolean AIJLLFGIIND_2(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + LBANKMDBDNL_AIJLLFGIIND_2_OFFSET))(a1);
		}

		static ::RPG::GameCore::PamSkinConfigRow* PEKDEJEEOLG()
		{
			return ((::RPG::GameCore::PamSkinConfigRow*(*)())((::PBYTE)hIl2Cpp + LBANKMDBDNL_PEKDEJEEOLG_OFFSET))();
		}

	};
