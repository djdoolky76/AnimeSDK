#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJDFGMMMCMI.h"
#include "unitysdk/RPG/Client/GridFightUpdateSummarizer.h"
class AOFOEOIJEHF;

#define DHCIJAGKOOB_CTOR_OFFSET UNITYSDK_OFFSET(0x1ADDF9C0)
#define DHCIJAGKOOB_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x1ADDF7B0)
#define DHCIJAGKOOB_UPDATEADDITEM_OFFSET UNITYSDK_OFFSET(0x1ADDF800)

inline static constexpr unsigned int DHCIJAGKOOB_TypeDefinitionIndex = 66519;

	class DHCIJAGKOOB : public ::RPG::Client::GridFightUpdateSummarizer
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
