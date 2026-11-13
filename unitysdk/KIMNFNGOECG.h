#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FiveDimScrollViewConfig; }

#define KIMNFNGOECG_CTOR_OFFSET UNITYSDK_OFFSET(0x1A30C2F0)

inline static constexpr unsigned int KIMNFNGOECG_TypeDefinitionIndex = 44345;

	class KIMNFNGOECG : public ::System::Object
	{
	public:
		::RPG::GameCore::FiveDimScrollViewConfig* EABKOHGCHFP; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIMNFNGOECG_CTOR_OFFSET))(this);
		}

	};
