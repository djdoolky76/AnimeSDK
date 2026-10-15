#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class FateGameMasterTalkInfoItem; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_FATEGAMEMASTERTALKINFOEXT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCE97900)
#define RPG_CLIENT_FATEGAMEMASTERTALKINFOEXT___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCE97940)
#define RPG_CLIENT_FATEGAMEMASTERTALKINFOEXT___C__GETRANDOMITEMSONOVERVIEWPAGE_B__1_0_OFFSET UNITYSDK_OFFSET(0xCE97950)

namespace RPG::Client
{
	inline static constexpr unsigned int FateGameMasterTalkInfoExt___c_TypeDefinitionIndex = 64106;

	class FateGameMasterTalkInfoExt___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::FateGameMasterTalkInfoItem*, ::System::Boolean>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::RPG::Client::FateGameMasterTalkInfoItem*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x59A00);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x59A08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERTALKINFOEXT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERTALKINFOEXT___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetRandomItemsOnOverviewPage_b__1_0(::RPG::Client::FateGameMasterTalkInfoItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateGameMasterTalkInfoItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERTALKINFOEXT___C__GETRANDOMITEMSONOVERVIEWPAGE_B__1_0_OFFSET))(this, a1);
		}

	};
}
