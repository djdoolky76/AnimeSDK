#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class String; }

#define PNPFAIHJMMI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9F92E0)

inline static constexpr unsigned int PNPFAIHJMMI_TypeDefinitionIndex = 42444;

	class PNPFAIHJMMI : public ::System::Object
	{
	public:
		::System::String* CDMFNHJGGKF; // 0x10
		::UnityEngine::Vector3 NMELCPIOKNO; // 0x18
		::UnityEngine::Vector3 BBFOLEOPPPL; // 0x24
		::System::Boolean EGKNKHEANAN; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNPFAIHJMMI_CTOR_OFFSET))(this);
		}

	};
