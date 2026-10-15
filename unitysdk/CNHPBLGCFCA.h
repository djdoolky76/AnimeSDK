#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class String; }

#define CNHPBLGCFCA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9E4DD0)

inline static constexpr unsigned int CNHPBLGCFCA_TypeDefinitionIndex = 42182;

	class CNHPBLGCFCA : public ::System::Object
	{
	public:
		::System::String* DFDEKAEELHL; // 0x10
		::System::String* CDMFNHJGGKF; // 0x18
		::System::Boolean DMHJINGNBIH; // 0x20
		::System::Boolean NGJNKHGKLNL; // 0x21
		::System::Boolean EGKNKHEANAN; // 0x22
		::System::Byte _padding0[0x1];
		::UnityEngine::Vector3 NMELCPIOKNO; // 0x24
		::UnityEngine::Vector3 BBFOLEOPPPL; // 0x30
		::UnityEngine::Vector3 NEMDKBKDFDN; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNHPBLGCFCA_CTOR_OFFSET))(this);
		}

	};
