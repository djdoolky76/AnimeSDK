#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define DHCNPPICIAO_AKKKLMIIFII_CTOR_OFFSET UNITYSDK_OFFSET(0xEBC9CF0)

	class DHCNPPICIAO_AKKKLMIIFII : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* DECBKALIAHF; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* ADMMMOHFJGH; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHCNPPICIAO_AKKKLMIIFII_CTOR_OFFSET))(this);
		}

	};
