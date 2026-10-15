#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FourRotateVoxelLevelEnvConfig; }

#define OMJDPLIKJEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C99DDC0)

inline static constexpr unsigned int OMJDPLIKJEM_TypeDefinitionIndex = 43209;

	class OMJDPLIKJEM : public ::System::Object
	{
	public:
		::RPG::GameCore::FourRotateVoxelLevelEnvConfig* EBEFMPHHHKK; // 0x10
		::System::Int32 OAMBKLJCHFF; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMJDPLIKJEM_CTOR_OFFSET))(this);
		}

	};
