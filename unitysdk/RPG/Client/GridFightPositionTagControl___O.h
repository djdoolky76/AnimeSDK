#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightPreset.h"
#include "unitysdk/System/Object.h"
namespace System { class Nullable; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::Client
{
	class GridFightPositionTagControl___O : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Nullable*, ::RPG::Client::TextID>** StaticGet__0____GetTextID()
		{
			return (::System::Func_2<::System::Nullable*, ::RPG::Client::TextID>**)UnitySDK::FromName("RPG.Client", "<>O")->GetStaticField(0x6E0B0);
		}

	};
}
