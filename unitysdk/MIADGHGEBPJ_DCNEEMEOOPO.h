#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MIADGHGEBPJ_DCNEEMEOOPO_CLEAR_OFFSET UNITYSDK_OFFSET(0xB94B8E0)
#define MIADGHGEBPJ_DCNEEMEOOPO_CTOR_OFFSET UNITYSDK_OFFSET(0xB94B930)

	class MIADGHGEBPJ_DCNEEMEOOPO : public ::System::Object
	{
	public:
		::UnityEngine::Quaternion NMELCPIOKNO; // 0x10
		::System::Single MMNELBFMJOF; // 0x20
		::System::Single NONAGBGPMKF; // 0x24
		::UnityEngine::Vector3 BBFOLEOPPPL; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIADGHGEBPJ_DCNEEMEOOPO_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIADGHGEBPJ_DCNEEMEOOPO_CLEAR_OFFSET))(this);
		}

	};
