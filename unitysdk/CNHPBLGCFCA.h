#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class String; }

#define CNHPBLGCFCA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB17030)

inline static constexpr unsigned int CNHPBLGCFCA_TypeDefinitionIndex = 43157;

	class CNHPBLGCFCA : public ::System::Object
	{
	public:
		::System::String* CDMFNHJGGKF; // 0x10
		::System::String* DFDEKAEELHL; // 0x18
		::UnityEngine::Vector3 BBFOLEOPPPL; // 0x20
		::System::Boolean DMHJINGNBIH; // 0x2C
		::System::Boolean EGKNKHEANAN; // 0x2D
		::System::Boolean NGJNKHGKLNL; // 0x2E
		::System::Byte _padding0[0x1];
		::UnityEngine::Vector3 NEMDKBKDFDN; // 0x30
		::UnityEngine::Vector3 NMELCPIOKNO; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNHPBLGCFCA_CTOR_OFFSET))(this);
		}

	};
