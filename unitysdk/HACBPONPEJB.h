#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::ActivityAlley { class AlleyPackGoodData; }

#define HACBPONPEJB_CTOR_OFFSET UNITYSDK_OFFSET(0x15B71FF0)

	class HACBPONPEJB : public ::System::Object
	{
	public:
		::RPG::Client::ActivityAlley::AlleyPackGoodData* CBLJEGOCBPG; // 0x10
		::UnityEngine::Vector3 LEJIAOECCDA; // 0x18
		::UnityEngine::Vector3 OJKLFLEHLKO; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HACBPONPEJB_CTOR_OFFSET))(this);
		}

	};
