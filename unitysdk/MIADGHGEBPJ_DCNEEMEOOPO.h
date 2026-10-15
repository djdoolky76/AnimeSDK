#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MIADGHGEBPJ_DCNEEMEOOPO_CLEAR_OFFSET UNITYSDK_OFFSET(0xB9458A0)
#define MIADGHGEBPJ_DCNEEMEOOPO_CTOR_OFFSET UNITYSDK_OFFSET(0xB9458F0)

inline static constexpr unsigned int MIADGHGEBPJ_DCNEEMEOOPO_TypeDefinitionIndex = 57447;

	class MIADGHGEBPJ_DCNEEMEOOPO : public ::System::Object
	{
	public:
		::System::Single MMNELBFMJOF; // 0x10
		::UnityEngine::Vector3 BBFOLEOPPPL; // 0x14
		::System::Single NONAGBGPMKF; // 0x20
		::UnityEngine::Quaternion NMELCPIOKNO; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIADGHGEBPJ_DCNEEMEOOPO_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIADGHGEBPJ_DCNEEMEOOPO_CLEAR_OFFSET))(this);
		}

	};
