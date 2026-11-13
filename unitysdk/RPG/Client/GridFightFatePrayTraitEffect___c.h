#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightPrayQuest; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTFATEPRAYTRAITEFFECT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D667FF0)
#define RPG_CLIENT_GRIDFIGHTFATEPRAYTRAITEFFECT___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1D668030)
#define RPG_CLIENT_GRIDFIGHTFATEPRAYTRAITEFFECT___C__GET_COMPLETEDQUESTCOUNT_B__18_0_OFFSET UNITYSDK_OFFSET(0x1D668060)
#define RPG_CLIENT_GRIDFIGHTFATEPRAYTRAITEFFECT___C__ONUPDATE_B__1_0_OFFSET UNITYSDK_OFFSET(0x1D668040)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFatePrayTraitEffect___c_TypeDefinitionIndex = 67211;

	class GridFightFatePrayTraitEffect___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightPrayQuest*, ::System::Boolean>** StaticGet___9__18_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightPrayQuest*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x712A0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x712A8);
		}

		static ::System::Func_2<::RPG::Client::GridFightPrayQuest*, ::System::Boolean>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightPrayQuest*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x712B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFATEPRAYTRAITEFFECT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFATEPRAYTRAITEFFECT___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _OnUpdate_b__1_0(::RPG::Client::GridFightPrayQuest* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightPrayQuest*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFATEPRAYTRAITEFFECT___C__ONUPDATE_B__1_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_CompletedQuestCount_b__18_0(::RPG::Client::GridFightPrayQuest* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightPrayQuest*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFATEPRAYTRAITEFFECT___C__GET_COMPLETEDQUESTCOUNT_B__18_0_OFFSET))(this, a1);
		}

	};
}
