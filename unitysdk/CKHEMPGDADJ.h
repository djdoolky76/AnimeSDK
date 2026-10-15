#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PhotoGraphAimIdentifyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CKHEMPGDADJ_CTOR_OFFSET UNITYSDK_OFFSET(0xD7553D0)

inline static constexpr unsigned int CKHEMPGDADJ_TypeDefinitionIndex = 60933;

	class CKHEMPGDADJ : public ::System::Object
	{
	public:
		::System::UInt32 DBKEGLOJIAG; // 0x10
		::UnityEngine::Vector3 KKLDLLOJEFN; // 0x14
		::RPG::GameCore::PhotoGraphAimIdentifyType BDHPOJCKPIM; // 0x20
		::System::Void _ctor(::System::UInt32 a1, ::UnityEngine::Vector3 a2, ::RPG::GameCore::PhotoGraphAimIdentifyType a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3, ::RPG::GameCore::PhotoGraphAimIdentifyType))((::PBYTE)hIl2Cpp + CKHEMPGDADJ_CTOR_OFFSET))(this, a1, a2, a3);
		}

	};
