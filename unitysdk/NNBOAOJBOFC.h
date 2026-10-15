#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlaneType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

	struct alignas(8) NNBOAOJBOFC
	{
		::RPG::GameCore::PlaneType HMNDHAFDNAH; // 0x10
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::String*>* PNFDBACNGAN; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Vector3>* EPOEOHBMIDG; // 0x20
		::System::Boolean HEKOJJOKIEN; // 0x28
		::System::Byte _padding1[0x3];
		::UnityEngine::Vector3 OFNOJKPOHBO; // 0x2C
		::UnityEngine::Quaternion AJJDNMJHDEP; // 0x38
		::System::String* CLGJLOGNMAM; // 0x48
		::System::String* DDPEOFALPNH; // 0x50
	};
