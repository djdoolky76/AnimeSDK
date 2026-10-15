#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FiveDimAnimatorStateListenerConfig; }

#define DJHDPGGMGMF_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C9FC430)
#define DJHDPGGMGMF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9FC480)

inline static constexpr unsigned int DJHDPGGMGMF_TypeDefinitionIndex = 43291;

	class DJHDPGGMGMF : public ::System::Object
	{
	public:
		::RPG::GameCore::FiveDimAnimatorStateListenerConfig* EABKOHGCHFP; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJHDPGGMGMF_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJHDPGGMGMF_CLEAR_OFFSET))(this);
		}

	};
