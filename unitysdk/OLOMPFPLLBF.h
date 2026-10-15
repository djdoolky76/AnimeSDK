#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingDamageType.h"
#include "unitysdk/System/Object.h"

#define OLOMPFPLLBF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C96F910)

inline static constexpr unsigned int OLOMPFPLLBF_TypeDefinitionIndex = 43775;

	class OLOMPFPLLBF : public ::System::Object
	{
	public:
		::System::Boolean NFJCFJABEBD; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::GameCore::ChenLingDamageType HODMHEGIDOF; // 0x14
		::System::Int32 CCKOKPOPKKK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLOMPFPLLBF_CTOR_OFFSET))(this);
		}

	};
