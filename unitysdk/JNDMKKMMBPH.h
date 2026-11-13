#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SealState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define JNDMKKMMBPH_CTOR_OFFSET UNITYSDK_OFFSET(0x1A0C2E20)

inline static constexpr unsigned int JNDMKKMMBPH_TypeDefinitionIndex = 61716;

	class JNDMKKMMBPH : public ::System::Object
	{
	public:
		::UnityEngine::Vector2 KLPCBAHLDBA; // 0x10
		::RPG::Client::SealState MEPFOEEGBEA; // 0x18
		::UnityEngine::Vector2 HHGPIAFJNDL; // 0x1C
		::UnityEngine::Vector2 BBFOLEOPPPL; // 0x24
		::System::Single EJEHJHNJJBK; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNDMKKMMBPH_CTOR_OFFSET))(this);
		}

	};
