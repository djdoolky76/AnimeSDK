#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HFIKHAIPIAB_GHNEMKKAMON_CTOR_OFFSET UNITYSDK_OFFSET(0x15C6F540)
#define HFIKHAIPIAB_GHNEMKKAMON_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x15C6F550)

inline static constexpr unsigned int HFIKHAIPIAB_GHNEMKKAMON_TypeDefinitionIndex = 65543;

	class HFIKHAIPIAB_GHNEMKKAMON : public ::System::Object
	{
	public:
		::System::UInt32 BMGCJCBPGCH; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HFIKHAIPIAB_GHNEMKKAMON_CTOR_OFFSET))(this, a1);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFIKHAIPIAB_GHNEMKKAMON_HKKFFCBJOKM_OFFSET))(this);
		}

	};
