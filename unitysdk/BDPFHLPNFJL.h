#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MHDGKLOHHFJ;
namespace RPG::GameCore { class FiveDimOneSidePassConfig; }

#define BDPFHLPNFJL_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C8B8450)
#define BDPFHLPNFJL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8B84B0)

inline static constexpr unsigned int BDPFHLPNFJL_TypeDefinitionIndex = 43456;

	class BDPFHLPNFJL : public ::System::Object
	{
	public:
		::MHDGKLOHHFJ* BPAPBAFOMCH; // 0x10
		::RPG::GameCore::FiveDimOneSidePassConfig* EABKOHGCHFP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPFHLPNFJL_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPFHLPNFJL_CLEAR_OFFSET))(this);
		}

	};
