#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::ElectricChainV2 { class Shape; }

#define RPG_CLIENT_ELECTRICCHAINV2_LINE_BMOMBCHEEEI_OFFSET UNITYSDK_OFFSET(0xCD79010)
#define RPG_CLIENT_ELECTRICCHAINV2_LINE_CTOR_OFFSET UNITYSDK_OFFSET(0xCD738F0)
#define RPG_CLIENT_ELECTRICCHAINV2_LINE_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0xCD78780)
#define RPG_CLIENT_ELECTRICCHAINV2_LINE_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0xCD79E30)

namespace RPG::Client::ElectricChainV2
{
	inline static constexpr unsigned int Line_TypeDefinitionIndex = 73599;

	class Line : public ::System::Object
	{
	public:
		::RPG::Client::ElectricChainV2::Shape* emitter; // 0x10
		::RPG::Client::ElectricChainV2::Shape* receiver; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_LINE_CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 BMOMBCHEEEI(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_LINE_BMOMBCHEEEI_OFFSET))(this, a1);
		}

		::System::Single get_Length()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_LINE_GET_LENGTH_OFFSET))(this);
		}

		::System::Void OINBDMGFFJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_LINE_OINBDMGFFJL_OFFSET))(this);
		}

	};
}
