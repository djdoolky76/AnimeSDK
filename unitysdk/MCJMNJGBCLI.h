#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AlleyPackAnchorType.h"
#include "unitysdk/System/Object.h"
class IBNAFGFFJLJ;
class MCJMNJGBCLI;

#define MCJMNJGBCLI_AALCFBOGFKP_OFFSET UNITYSDK_OFFSET(0xC0E9680)
#define MCJMNJGBCLI_CTOR_OFFSET UNITYSDK_OFFSET(0xC0E9670)
#define MCJMNJGBCLI_EPNECCEKJDH_OFFSET UNITYSDK_OFFSET(0xC0E9550)
#define MCJMNJGBCLI_FGLGLHDAEDE_OFFSET UNITYSDK_OFFSET(0xC0E95C0)

inline static constexpr unsigned int MCJMNJGBCLI_TypeDefinitionIndex = 76260;

	class MCJMNJGBCLI : public ::System::Object
	{
	public:
		::MCJMNJGBCLI* AFFFCJCNOBA; // 0x10
		::IBNAFGFFJLJ* AAMAFLLJIOG; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCJMNJGBCLI_CTOR_OFFSET))(this);
		}

		::System::Boolean EPNECCEKJDH(::RPG::GameCore::AlleyPackAnchorType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AlleyPackAnchorType))((::PBYTE)hIl2Cpp + MCJMNJGBCLI_EPNECCEKJDH_OFFSET))(this, a1);
		}

		::System::Boolean FGLGLHDAEDE(::IBNAFGFFJLJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IBNAFGFFJLJ*))((::PBYTE)hIl2Cpp + MCJMNJGBCLI_FGLGLHDAEDE_OFFSET))(this, a1);
		}

		::System::Boolean AALCFBOGFKP(::IBNAFGFFJLJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IBNAFGFFJLJ*))((::PBYTE)hIl2Cpp + MCJMNJGBCLI_AALCFBOGFKP_OFFSET))(this, a1);
		}

	};
