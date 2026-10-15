#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ElectricChainV2/Line.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_ELECTRICCHAINV2_STRAIGHTLINE_CTOR_OFFSET UNITYSDK_OFFSET(0xCD78080)
#define RPG_CLIENT_ELECTRICCHAINV2_STRAIGHTLINE_LOICGIBKHMM_OFFSET UNITYSDK_OFFSET(0xCD7BA20)
#define RPG_CLIENT_ELECTRICCHAINV2_STRAIGHTLINE_PMPNGLKHFMJ_OFFSET UNITYSDK_OFFSET(0xCD7BC30)

namespace RPG::Client::ElectricChainV2
{
	inline static constexpr unsigned int StraightLine_TypeDefinitionIndex = 73600;

	class StraightLine : public ::RPG::Client::ElectricChainV2::Line
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_STRAIGHTLINE_CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 LOICGIBKHMM(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_STRAIGHTLINE_LOICGIBKHMM_OFFSET))(this, a1);
		}

		::System::Single PMPNGLKHFMJ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_STRAIGHTLINE_PMPNGLKHFMJ_OFFSET))(this);
		}

	};
}
