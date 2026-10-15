#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define EFEPGAKGNBM_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA33A40)

inline static constexpr unsigned int EFEPGAKGNBM_TypeDefinitionIndex = 43770;

	class EFEPGAKGNBM : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 ELHCMMCHDOB; // 0x10
		::System::Boolean IJCDEINGADN; // 0x1C
		::System::Byte _padding0[0x3];
		::UnityEngine::Quaternion NMELCPIOKNO; // 0x20
		::UnityEngine::Vector3 BBFOLEOPPPL; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFEPGAKGNBM_CTOR_OFFSET))(this);
		}

	};
