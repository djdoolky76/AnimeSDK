#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHIFCNDKFLH;
namespace RPG::GameCore { class FiveDimPortalConfig; }

#define DAIPIAECOBO_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DB17C30)
#define DAIPIAECOBO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB17CA0)

inline static constexpr unsigned int DAIPIAECOBO_TypeDefinitionIndex = 44460;

	class DAIPIAECOBO : public ::System::Object
	{
	public:
		::AHIFCNDKFLH* BPAPBAFOMCH; // 0x10
		::RPG::GameCore::FiveDimPortalConfig* EABKOHGCHFP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAIPIAECOBO_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAIPIAECOBO_CLEAR_OFFSET))(this);
		}

	};
