#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class String; }

#define PNPFAIHJMMI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9CACD0)

inline static constexpr unsigned int PNPFAIHJMMI_TypeDefinitionIndex = 42444;

	class PNPFAIHJMMI : public ::System::Object
	{
	public:
		::System::String* CDMFNHJGGKF; // 0x10
		::System::Boolean EGKNKHEANAN; // 0x18
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 BBFOLEOPPPL; // 0x1C
		::UnityEngine::Vector3 NMELCPIOKNO; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNPFAIHJMMI_CTOR_OFFSET))(this);
		}

	};
