#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightPrayQuest; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTFATEPRAYTRAITEFFECT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD12E710)
#define RPG_CLIENT_GRIDFIGHTFATEPRAYTRAITEFFECT___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD12E750)
#define RPG_CLIENT_GRIDFIGHTFATEPRAYTRAITEFFECT___C__GET_COMPLETEDQUESTCOUNT_B__18_0_OFFSET UNITYSDK_OFFSET(0xD12E780)
#define RPG_CLIENT_GRIDFIGHTFATEPRAYTRAITEFFECT___C__ONUPDATE_B__1_0_OFFSET UNITYSDK_OFFSET(0xD12E760)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFatePrayTraitEffect___c_TypeDefinitionIndex = 65388;

	class GridFightFatePrayTraitEffect___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6BA30);
		}

		static ::System::Func_2<::RPG::Client::GridFightPrayQuest*, ::System::Boolean>** StaticGet___9__18_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightPrayQuest*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6BA38);
		}

		static ::System::Func_2<::RPG::Client::GridFightPrayQuest*, ::System::Boolean>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightPrayQuest*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6BA40);
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
