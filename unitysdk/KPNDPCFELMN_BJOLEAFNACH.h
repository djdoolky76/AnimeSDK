#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LogType.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KPNDPCFELMN_BJOLEAFNACH_CTOR_OFFSET UNITYSDK_OFFSET(0xB5C5560)

	class KPNDPCFELMN_BJOLEAFNACH : public ::System::Object
	{
	public:
		::System::String* EKIJFPIPCKF; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* PKKNHGGEPMJ; // 0x18
		::System::String* NELOPEIOFHP; // 0x20
		::System::String* DFNBPMDNOKF; // 0x28
		::UnityEngine::LogType KNEPICDALGD; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNDPCFELMN_BJOLEAFNACH_CTOR_OFFSET))(this);
		}

	};
