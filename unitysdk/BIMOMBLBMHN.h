#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define BIMOMBLBMHN_CLEAR_OFFSET UNITYSDK_OFFSET(0x1D2B75F0)
#define BIMOMBLBMHN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2B7680)

inline static constexpr unsigned int BIMOMBLBMHN_TypeDefinitionIndex = 43949;

	class BIMOMBLBMHN : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>* BLCCOFADODM; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIMOMBLBMHN_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIMOMBLBMHN_CLEAR_OFFSET))(this);
		}

	};
