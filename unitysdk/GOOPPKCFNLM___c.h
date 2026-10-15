#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceRegionTag.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define GOOPPKCFNLM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C64BB50)
#define GOOPPKCFNLM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C64BB90)
#define GOOPPKCFNLM___C__STATSECTIONSETTLE_B__16_0_OFFSET UNITYSDK_OFFSET(0x1C64BBA0)

inline static constexpr unsigned int GOOPPKCFNLM___c_TypeDefinitionIndex = 37334;

	class GOOPPKCFNLM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5CEB0);
		}

		static ::System::Func_2<::RPG::GameCore::CakeRaceRegionTag, ::System::UInt32>** StaticGet___9__16_0()
		{
			return (::System::Func_2<::RPG::GameCore::CakeRaceRegionTag, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5CEB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOPPKCFNLM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOPPKCFNLM___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _StatSectionSettle_b__16_0(::RPG::GameCore::CakeRaceRegionTag a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::CakeRaceRegionTag))((::PBYTE)hIl2Cpp + GOOPPKCFNLM___C__STATSECTIONSETTLE_B__16_0_OFFSET))(this, a1);
		}

	};
