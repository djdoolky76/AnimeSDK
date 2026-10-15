#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class EvolveBuildStage; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_EVOLVEBUILDSEASONDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCE30AB0)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCE30AE0)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA___C__INITSTAGES_B__9_0_OFFSET UNITYSDK_OFFSET(0xCE30AF0)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildSeasonData___c_TypeDefinitionIndex = 63804;

	class EvolveBuildSeasonData___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x44B40);
		}

		static ::System::Comparison_1<::RPG::Client::EvolveBuildStage*>** StaticGet___9__9_0()
		{
			return (::System::Comparison_1<::RPG::Client::EvolveBuildStage*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x44B48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSEASONDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSEASONDATA___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _InitStages_b__9_0(::RPG::Client::EvolveBuildStage* a1, ::RPG::Client::EvolveBuildStage* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::EvolveBuildStage*, ::RPG::Client::EvolveBuildStage*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSEASONDATA___C__INITSTAGES_B__9_0_OFFSET))(this, a1, a2);
		}

	};
}
