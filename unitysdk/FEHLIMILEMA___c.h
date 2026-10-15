#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class MapPropConditionConfigRow; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define FEHLIMILEMA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x156F1FB0)
#define FEHLIMILEMA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x156F1FE0)
#define FEHLIMILEMA___C__GETSORTEDMAPPROPCONDITION_B__43_0_OFFSET UNITYSDK_OFFSET(0x156F1FF0)

inline static constexpr unsigned int FEHLIMILEMA___c_TypeDefinitionIndex = 62096;

	class FEHLIMILEMA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x61010);
		}

		static ::System::Comparison_1<::RPG::GameCore::MapPropConditionConfigRow*>** StaticGet___9__43_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::MapPropConditionConfigRow*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x61018);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FEHLIMILEMA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEHLIMILEMA___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetSortedMapPropCondition_b__43_0(::RPG::GameCore::MapPropConditionConfigRow* a1, ::RPG::GameCore::MapPropConditionConfigRow* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::MapPropConditionConfigRow*, ::RPG::GameCore::MapPropConditionConfigRow*))((::PBYTE)hIl2Cpp + FEHLIMILEMA___C__GETSORTEDMAPPROPCONDITION_B__43_0_OFFSET))(this, a1, a2);
		}

	};
