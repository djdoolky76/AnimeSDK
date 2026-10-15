#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AMCOEFHHBPO.h"
#include "unitysdk/JJDFGMMMCMI.h"
class AOFOEOIJEHF;

#define DHCIJAGKOOB_CTOR_OFFSET UNITYSDK_OFFSET(0xEBC9770)
#define DHCIJAGKOOB_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0xEBC9560)
#define DHCIJAGKOOB_UPDATEADDITEM_OFFSET UNITYSDK_OFFSET(0xEBC95B0)

inline static constexpr unsigned int DHCIJAGKOOB_TypeDefinitionIndex = 64960;

	class DHCIJAGKOOB : public ::AMCOEFHHBPO
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHCIJAGKOOB_CTOR_OFFSET))(this);
		}

		::System::Boolean IsConcernedWith(::JJDFGMMMCMI a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + DHCIJAGKOOB_ISCONCERNEDWITH_OFFSET))(this, a1);
		}

		::System::Void UpdateAddItem(::AOFOEOIJEHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOFOEOIJEHF*))((::PBYTE)hIl2Cpp + DHCIJAGKOOB_UPDATEADDITEM_OFFSET))(this, a1);
		}

	};
