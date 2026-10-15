#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class RelicRecommendProperty; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define FGOLMOBLNCN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1576E7F0)
#define FGOLMOBLNCN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1576E830)
#define FGOLMOBLNCN___C__GETRECOMMENDMAINAFFIXS_B__4_0_OFFSET UNITYSDK_OFFSET(0x1576E840)

	class FGOLMOBLNCN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69690);
		}

		static ::System::Func_2<::RPG::GameCore::RelicRecommendProperty*, ::RPG::GameCore::AvatarPropertyType>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::RPG::GameCore::RelicRecommendProperty*, ::RPG::GameCore::AvatarPropertyType>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69698);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FGOLMOBLNCN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGOLMOBLNCN___C_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AvatarPropertyType _GetRecommendMainAffixs_b__4_0(::RPG::GameCore::RelicRecommendProperty* a1)
		{
			return ((::RPG::GameCore::AvatarPropertyType(*)(::PVOID, ::RPG::GameCore::RelicRecommendProperty*))((::PBYTE)hIl2Cpp + FGOLMOBLNCN___C__GETRECOMMENDMAINAFFIXS_B__4_0_OFFSET))(this, a1);
		}

	};
