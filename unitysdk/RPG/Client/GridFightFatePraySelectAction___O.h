#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPENENIMEFE;
namespace RPG::Client { class GridFightPrayQuest; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFatePraySelectAction___O_TypeDefinitionIndex = 65355;

	class GridFightFatePraySelectAction___O : public ::System::Object
	{
	public:
		static ::System::Func_2<::BPENENIMEFE*, ::RPG::Client::GridFightPrayQuest*>** StaticGet__0___CreateFatePraySelection()
		{
			return (::System::Func_2<::BPENENIMEFE*, ::RPG::Client::GridFightPrayQuest*>**)UnitySDK::FromName("RPG.Client", "<>O")->GetStaticField(0x6B9C0);
		}

	};
}
