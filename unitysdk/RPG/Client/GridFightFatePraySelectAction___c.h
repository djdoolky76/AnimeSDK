#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightPrayQuest; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTFATEPRAYSELECTACTION___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD12D910)
#define RPG_CLIENT_GRIDFIGHTFATEPRAYSELECTACTION___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD12D950)
#define RPG_CLIENT_GRIDFIGHTFATEPRAYSELECTACTION___C__GETBLACKCOUNT_B__10_0_OFFSET UNITYSDK_OFFSET(0xD12D9D0)
#define RPG_CLIENT_GRIDFIGHTFATEPRAYSELECTACTION___C__GET_HASBLACKQUEST_B__9_0_OFFSET UNITYSDK_OFFSET(0xD12D960)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFatePraySelectAction___c_TypeDefinitionIndex = 65356;

	class GridFightFatePraySelectAction___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightPrayQuest*, ::System::Boolean>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightPrayQuest*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6B9D0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6B9D8);
		}

		static ::System::Func_2<::RPG::Client::GridFightPrayQuest*, ::System::Boolean>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightPrayQuest*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6B9E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFATEPRAYSELECTACTION___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFATEPRAYSELECTACTION___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _get_HasBlackQuest_b__9_0(::RPG::Client::GridFightPrayQuest* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightPrayQuest*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFATEPRAYSELECTACTION___C__GET_HASBLACKQUEST_B__9_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetBlackCount_b__10_0(::RPG::Client::GridFightPrayQuest* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightPrayQuest*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFATEPRAYSELECTACTION___C__GETBLACKCOUNT_B__10_0_OFFSET))(this, a1);
		}

	};
}
