#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Exception; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_GROWTHTARGETRELICRECOMMENDER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD2DB280)
#define RPG_CLIENT_GROWTHTARGETRELICRECOMMENDER___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD2DB2C0)
#define RPG_CLIENT_GROWTHTARGETRELICRECOMMENDER___C__PREPAREDATA_B__7_0_OFFSET UNITYSDK_OFFSET(0xD2DB2D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GrowthTargetRelicRecommender___c_TypeDefinitionIndex = 65609;

	class GrowthTargetRelicRecommender___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Exception*>** StaticGet___9__7_0()
		{
			return (::System::Action_1<::System::Exception*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xFFD0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xFFD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETRELICRECOMMENDER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETRELICRECOMMENDER___C_CTOR_OFFSET))(this);
		}

		::System::Void _PrepareData_b__7_0(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETRELICRECOMMENDER___C__PREPAREDATA_B__7_0_OFFSET))(this, a1);
		}

	};
}
