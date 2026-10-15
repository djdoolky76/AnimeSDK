#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IHJOLBBFKID_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB76AE0)

inline static constexpr unsigned int IHJOLBBFKID_TypeDefinitionIndex = 43743;

	class IHJOLBBFKID : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* EPEJGAEMEKN; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* GBPHKOAFCNE; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHJOLBBFKID_CTOR_OFFSET))(this);
		}

	};
