#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define EDMFJBLKKIF_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CA33520)
#define EDMFJBLKKIF_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA33580)

	class EDMFJBLKKIF : public ::System::Object
	{
	public:
		::System::Single IEHPFADHJFD; // 0x10
		::System::Single GAFENHHEBPG; // 0x14
		::UnityEngine::Vector3 FPNNKEJPHNN; // 0x18
		::System::Boolean IJLFPJEKGCJ; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDMFJBLKKIF_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDMFJBLKKIF_CLEAR_OFFSET))(this);
		}

	};
