#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class NBHIKILOKMK_JNPAFLHJKOM;
namespace MoleMole::Config { class ConfigRealtimeQTE; }

#define NBHIKILOKMK_JNPAFLHJKOM_JOEEDIHABMP_BHEKKKNPHAM_OFFSET UNITYSDK_OFFSET(0x120F19B0)
#define NBHIKILOKMK_JNPAFLHJKOM_JOEEDIHABMP__CTOR_OFFSET UNITYSDK_OFFSET(0x120F19A0)

inline static constexpr unsigned int NBHIKILOKMK_JNPAFLHJKOM_JOEEDIHABMP_TypeDefinitionIndex = 80330;

class NBHIKILOKMK_JNPAFLHJKOM_JOEEDIHABMP : public ::System::Object
{
public:
	::NBHIKILOKMK_JNPAFLHJKOM* KLHPEBKNIFB; // 0x10
	::Foundation::AssetPath CJBJONJDOLI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBHIKILOKMK_JNPAFLHJKOM_JOEEDIHABMP__CTOR_OFFSET))(this);
	}

	::System::Void BHEKKKNPHAM(::MoleMole::Config::ConfigRealtimeQTE* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigRealtimeQTE*))((::PBYTE)hIl2Cpp + NBHIKILOKMK_JNPAFLHJKOM_JOEEDIHABMP_BHEKKKNPHAM_OFFSET))(this, DFMKILICPFB);
	}
};
