#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define OOBCBCDBGBH_CTOR_OFFSET UNITYSDK_OFFSET(0xBF62F60)
#define OOBCBCDBGBH_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xBF62F30)
#define OOBCBCDBGBH_SET_POSITION_OFFSET UNITYSDK_OFFSET(0xBF62F50)

	class OOBCBCDBGBH : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 _Position_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOBCBCDBGBH_CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + OOBCBCDBGBH_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OOBCBCDBGBH_SET_POSITION_OFFSET))(this, a1);
		}

	};
