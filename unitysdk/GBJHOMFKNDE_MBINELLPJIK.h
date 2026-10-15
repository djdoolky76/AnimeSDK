#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

#define GBJHOMFKNDE_MBINELLPJIK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5FF580)

inline static constexpr unsigned int GBJHOMFKNDE_MBINELLPJIK_TypeDefinitionIndex = 36846;

	class GBJHOMFKNDE_MBINELLPJIK : public ::System::Object
	{
	public:
		::RPG::MVector3 BBFOLEOPPPL; // 0x10
		::RPG::MVector3 NMELCPIOKNO; // 0x1C
		::RPG::MVector3 NEMDKBKDFDN; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBJHOMFKNDE_MBINELLPJIK_CTOR_OFFSET))(this);
		}

	};
