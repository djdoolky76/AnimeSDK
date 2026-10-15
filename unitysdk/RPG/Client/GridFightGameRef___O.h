#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KNICOFFGGOO;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRef___O_TypeDefinitionIndex = 64700;

	class GridFightGameRef___O : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::String*, ::KNICOFFGGOO*>** StaticGet__0___GetReq()
		{
			return (::System::Func_2<::System::String*, ::KNICOFFGGOO*>**)UnitySDK::FromName("RPG.Client", "<>O")->GetStaticField(0x6A100);
		}

	};
}
