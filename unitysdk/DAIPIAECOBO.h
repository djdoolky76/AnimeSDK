#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHIFCNDKFLH;
namespace RPG::GameCore { class FiveDimPortalConfig; }

#define DAIPIAECOBO_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C9E59C0)
#define DAIPIAECOBO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9E5A30)

inline static constexpr unsigned int DAIPIAECOBO_TypeDefinitionIndex = 43478;

	class DAIPIAECOBO : public ::System::Object
	{
	public:
		::RPG::GameCore::FiveDimPortalConfig* EABKOHGCHFP; // 0x10
		::AHIFCNDKFLH* BPAPBAFOMCH; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAIPIAECOBO_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAIPIAECOBO_CLEAR_OFFSET))(this);
		}

	};
