#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::LimaoNews { class LimaoNewsEmployeeCheckData; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSEMPLOYEECHECKENTRANCEVIEWMODEL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD3A5E60)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSEMPLOYEECHECKENTRANCEVIEWMODEL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD3A5EA0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSEMPLOYEECHECKENTRANCEVIEWMODEL___C__BUILDSORTEDEMPLOYEEDATAS_B__2_0_OFFSET UNITYSDK_OFFSET(0xD3A5EB0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsEmployeeCheckEntranceViewModel___c_TypeDefinitionIndex = 80424;

	class LimaoNewsEmployeeCheckEntranceViewModel___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData*>** StaticGet___9__2_0()
		{
			return (::System::Comparison_1<::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData*>**)UnitySDK::FromName("RPG.Client.LimaoNews", "<>c")->GetStaticField(0x1EE30);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.LimaoNews", "<>c")->GetStaticField(0x1EE38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSEMPLOYEECHECKENTRANCEVIEWMODEL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSEMPLOYEECHECKENTRANCEVIEWMODEL___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _BuildSortedEmployeeDatas_b__2_0(::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData* a1, ::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData*, ::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSEMPLOYEECHECKENTRANCEVIEWMODEL___C__BUILDSORTEDEMPLOYEEDATAS_B__2_0_OFFSET))(this, a1, a2);
		}

	};
}
