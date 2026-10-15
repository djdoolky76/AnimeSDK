#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCCONKJHDJL;
namespace RPG::Client { class GridFightBonusDropData; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPrayQuest___O_TypeDefinitionIndex = 65088;

	class GridFightPrayQuest___O : public ::System::Object
	{
	public:
		static ::System::Func_2<::BCCONKJHDJL*, ::RPG::Client::GridFightBonusDropData*>** StaticGet__0___Create()
		{
			return (::System::Func_2<::BCCONKJHDJL*, ::RPG::Client::GridFightBonusDropData*>**)UnitySDK::FromName("RPG.Client", "<>O")->GetStaticField(0x6E0C0);
		}

	};
}
