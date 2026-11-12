#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DEKIPIJNJBJ;
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ELATIONBUFFPRESENTER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD7414B0)
#define RPG_CLIENT_ELATIONBUFFPRESENTER___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD7414F0)
#define RPG_CLIENT_ELATIONBUFFPRESENTER___C___MERGEBUFFDATABYLIFE_B__18_0_OFFSET UNITYSDK_OFFSET(0xD741500)

namespace RPG::Client
{
	inline static constexpr unsigned int ElationBuffPresenter___c_TypeDefinitionIndex = 73174;

	class ElationBuffPresenter___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::DEKIPIJNJBJ*>** StaticGet___9__18_0()
		{
			return (::System::Comparison_1<::DEKIPIJNJBJ*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x3B120);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x3B128);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBUFFPRESENTER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBUFFPRESENTER___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __MergeBuffDataByLife_b__18_0(::DEKIPIJNJBJ* a1, ::DEKIPIJNJBJ* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::DEKIPIJNJBJ*, ::DEKIPIJNJBJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBUFFPRESENTER___C___MERGEBUFFDATABYLIFE_B__18_0_OFFSET))(this, a1, a2);
		}

	};
}
