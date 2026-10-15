#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMode.h"
#include "unitysdk/RPG/GameCore/StageType.h"
#include "unitysdk/System/Object.h"
class HCIOAKJMLDA;
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define INHFINPHDJE_CCTOR_OFFSET UNITYSDK_OFFSET(0x164EF0D0)
#define INHFINPHDJE_MLLBLLHGFCA_OFFSET UNITYSDK_OFFSET(0x164EF3C0)

inline static constexpr unsigned int INHFINPHDJE_TypeDefinitionIndex = 56022;

	class INHFINPHDJE : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RogueMode, ::System::Type*>** StaticGet_PMNIFHJNFHP()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RogueMode, ::System::Type*>**)UnitySDK::FromName("", "INHFINPHDJE")->GetStaticField(0x6C760);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StageType, ::System::Type*>** StaticGet_AJCICNJHJCP()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StageType, ::System::Type*>**)UnitySDK::FromName("", "INHFINPHDJE")->GetStaticField(0x6C768);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INHFINPHDJE_CCTOR_OFFSET))();
		}

		static ::HCIOAKJMLDA* MLLBLLHGFCA(::RPG::GameCore::StageType a1, ::RPG::GameCore::RogueMode a2)
		{
			return ((::HCIOAKJMLDA*(*)(::RPG::GameCore::StageType, ::RPG::GameCore::RogueMode))((::PBYTE)hIl2Cpp + INHFINPHDJE_MLLBLLHGFCA_OFFSET))(a1, a2);
		}

	};
