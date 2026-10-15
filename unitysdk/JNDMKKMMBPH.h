#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SealState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define JNDMKKMMBPH_CTOR_OFFSET UNITYSDK_OFFSET(0xB27B7A0)

	class JNDMKKMMBPH : public ::System::Object
	{
	public:
		::UnityEngine::Vector2 HHGPIAFJNDL; // 0x10
		::UnityEngine::Vector2 KLPCBAHLDBA; // 0x18
		::RPG::Client::SealState MEPFOEEGBEA; // 0x20
		::System::Single EJEHJHNJJBK; // 0x24
		::UnityEngine::Vector2 BBFOLEOPPPL; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNDMKKMMBPH_CTOR_OFFSET))(this);
		}

	};
