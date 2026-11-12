#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MIADGHGEBPJ_DCNEEMEOOPO_CLEAR_OFFSET UNITYSDK_OFFSET(0xC200290)
#define MIADGHGEBPJ_DCNEEMEOOPO_CTOR_OFFSET UNITYSDK_OFFSET(0xC2002E0)

inline static constexpr unsigned int MIADGHGEBPJ_DCNEEMEOOPO_TypeDefinitionIndex = 58675;

	class MIADGHGEBPJ_DCNEEMEOOPO : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 BBFOLEOPPPL; // 0x10
		::UnityEngine::Quaternion NMELCPIOKNO; // 0x1C
		::System::Single MMNELBFMJOF; // 0x2C
		::System::Single NONAGBGPMKF; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIADGHGEBPJ_DCNEEMEOOPO_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIADGHGEBPJ_DCNEEMEOOPO_CLEAR_OFFSET))(this);
		}

	};
