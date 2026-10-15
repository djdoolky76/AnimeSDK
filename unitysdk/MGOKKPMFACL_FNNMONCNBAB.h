#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MGOKKPMFACL_FNNMONCNBAB_CTOR_OFFSET UNITYSDK_OFFSET(0xB925400)

inline static constexpr unsigned int MGOKKPMFACL_FNNMONCNBAB_TypeDefinitionIndex = 74116;

	class MGOKKPMFACL_FNNMONCNBAB : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 MLIJIBFKHHD; // 0x10
		::System::Boolean IKLHGDLPHEA; // 0x1C
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 POELNEBEGMA; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGOKKPMFACL_FNNMONCNBAB_CTOR_OFFSET))(this);
		}

	};
