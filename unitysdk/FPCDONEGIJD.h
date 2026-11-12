#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class RebuildPipeConfig; }

#define FPCDONEGIJD_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC35D10)

inline static constexpr unsigned int FPCDONEGIJD_TypeDefinitionIndex = 44488;

	class FPCDONEGIJD : public ::System::Object
	{
	public:
		::RPG::GameCore::RebuildPipeConfig* EABKOHGCHFP; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPCDONEGIJD_CTOR_OFFSET))(this);
		}

	};
