#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DEKIPIJNJBJ;
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ELATIONBUFFPRESENTER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCD7A560)
#define RPG_CLIENT_ELATIONBUFFPRESENTER___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCD7A5A0)
#define RPG_CLIENT_ELATIONBUFFPRESENTER___C___MERGEBUFFDATABYLIFE_B__12_0_OFFSET UNITYSDK_OFFSET(0xCD7A5B0)

namespace RPG::Client
{
	inline static constexpr unsigned int ElationBuffPresenter___c_TypeDefinitionIndex = 71192;

	class ElationBuffPresenter___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::DEKIPIJNJBJ*>** StaticGet___9__12_0()
		{
			return (::System::Comparison_1<::DEKIPIJNJBJ*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x3FE30);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x3FE38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBUFFPRESENTER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBUFFPRESENTER___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __MergeBuffDataByLife_b__12_0(::DEKIPIJNJBJ* a1, ::DEKIPIJNJBJ* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::DEKIPIJNJBJ*, ::DEKIPIJNJBJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBUFFPRESENTER___C___MERGEBUFFDATABYLIFE_B__12_0_OFFSET))(this, a1, a2);
		}

	};
}
