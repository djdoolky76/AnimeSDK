#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NEJPLEFGALN;

#define MFEAIMEDPNF_CLEAR_OFFSET UNITYSDK_OFFSET(0xB8F15F0)
#define MFEAIMEDPNF_CTOR_OFFSET UNITYSDK_OFFSET(0xB8F1650)
#define MFEAIMEDPNF_GET_TOKENQUEUE_OFFSET UNITYSDK_OFFSET(0xB8F1570)
#define MFEAIMEDPNF_JKEONEEPIHH_OFFSET UNITYSDK_OFFSET(0xB8F1590)
#define MFEAIMEDPNF_SET_TOKENQUEUE_OFFSET UNITYSDK_OFFSET(0xB8F1580)

	class MFEAIMEDPNF : public ::System::Object
	{
	public:
		::NEJPLEFGALN* _TokenQueue_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFEAIMEDPNF_CTOR_OFFSET))(this);
		}

		::NEJPLEFGALN* get_TokenQueue()
		{
			return ((::NEJPLEFGALN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFEAIMEDPNF_GET_TOKENQUEUE_OFFSET))(this);
		}

		::System::Void set_TokenQueue(::NEJPLEFGALN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NEJPLEFGALN*))((::PBYTE)hIl2Cpp + MFEAIMEDPNF_SET_TOKENQUEUE_OFFSET))(this, a1);
		}

		::System::Boolean JKEONEEPIHH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MFEAIMEDPNF_JKEONEEPIHH_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFEAIMEDPNF_CLEAR_OFFSET))(this);
		}

	};
