#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define IKCABGHHMOB_CTOR_OFFSET UNITYSDK_OFFSET(0x16482A60)

	class IKCABGHHMOB : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 BBFOLEOPPPL; // 0x10
		::System::Byte _padding0[0x4];
		::System::UInt64 MBCACNKDMFG; // 0x20
		::System::Void _ctor(::System::UInt64 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IKCABGHHMOB_CTOR_OFFSET))(this, a1, a2);
		}

	};
