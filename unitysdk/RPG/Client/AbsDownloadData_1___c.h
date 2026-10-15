#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::Client
{
	inline static constexpr unsigned int AbsDownloadData_1___c_TypeDefinitionIndex = 59447;

	template <typename T>
	class AbsDownloadData_1___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x0);
		}

		static ::System::Func_2<::System::String*, ::RPG::Client::ByteHash16>** StaticGet___9__51_0()
		{
			return (::System::Func_2<::System::String*, ::RPG::Client::ByteHash16>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x0);
		}

	};
}
