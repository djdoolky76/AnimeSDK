#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Pet/PetSummonStateType.h"
#include "unitysdk/System/Object.h"

#define PJJKDGFODDL_OCHAIPCAONE_CTOR_OFFSET UNITYSDK_OFFSET(0xCBBBEE0)

inline static constexpr unsigned int PJJKDGFODDL_OCHAIPCAONE_TypeDefinitionIndex = 77963;

	class PJJKDGFODDL_OCHAIPCAONE : public ::System::Object
	{
	public:
		::System::UInt32 OHDHOAIIIAH; // 0x10
		::System::UInt32 JOFILPECKGK; // 0x14
		::System::Boolean COODLMKOHEP; // 0x18
		::System::Byte _padding0[0x3];
		::RPG::Client::Pet::PetSummonStateType FCGFFAJIBKA; // 0x1C
		::System::UInt32 MIPCILCJBMP; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJKDGFODDL_OCHAIPCAONE_CTOR_OFFSET))(this);
		}

	};
