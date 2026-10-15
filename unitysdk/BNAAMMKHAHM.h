#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FiveDimInteractEmitterConfig; }

#define BNAAMMKHAHM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8BD680)

inline static constexpr unsigned int BNAAMMKHAHM_TypeDefinitionIndex = 43479;

	class BNAAMMKHAHM : public ::System::Object
	{
	public:
		::RPG::GameCore::FiveDimInteractEmitterConfig* EABKOHGCHFP; // 0x10
		::System::Int32 MNMHMECGDAK; // 0x18
		::System::Boolean EDCNKGHPHFC; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNAAMMKHAHM_CTOR_OFFSET))(this);
		}

	};
