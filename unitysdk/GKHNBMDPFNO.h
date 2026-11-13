#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AIVariable.h"
namespace System { class Object; }

#define GKHNBMDPFNO_CTOR_OFFSET UNITYSDK_OFFSET(0x1A8D33D0)

inline static constexpr unsigned int GKHNBMDPFNO_TypeDefinitionIndex = 55498;

	class GKHNBMDPFNO : public ::RPG::GameCore::AIVariable
	{
	public:
		::System::Object* MNDFOPKBHKP; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKHNBMDPFNO_CTOR_OFFSET))(this);
		}

	};
