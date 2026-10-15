#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MHDGKLOHHFJ;
namespace RPG::GameCore { class FiveDimOneSidePassConfig; }

#define BDPFHLPNFJL_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C88A2E0)
#define BDPFHLPNFJL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C88A340)

inline static constexpr unsigned int BDPFHLPNFJL_TypeDefinitionIndex = 43456;

	class BDPFHLPNFJL : public ::System::Object
	{
	public:
		::RPG::GameCore::FiveDimOneSidePassConfig* EABKOHGCHFP; // 0x10
		::MHDGKLOHHFJ* BPAPBAFOMCH; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPFHLPNFJL_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPFHLPNFJL_CLEAR_OFFSET))(this);
		}

	};
