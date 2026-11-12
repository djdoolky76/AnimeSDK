#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ElectricChainV2/Line.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_ELECTRICCHAINV2_STRAIGHTLINE_CTOR_OFFSET UNITYSDK_OFFSET(0xD747E50)
#define RPG_CLIENT_ELECTRICCHAINV2_STRAIGHTLINE_LOICGIBKHMM_OFFSET UNITYSDK_OFFSET(0xD74B7F0)
#define RPG_CLIENT_ELECTRICCHAINV2_STRAIGHTLINE_PMPNGLKHFMJ_OFFSET UNITYSDK_OFFSET(0xD74BA00)

namespace RPG::Client::ElectricChainV2
{
	inline static constexpr unsigned int StraightLine_TypeDefinitionIndex = 75724;

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
