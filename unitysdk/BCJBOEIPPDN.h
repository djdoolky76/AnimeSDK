#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HLNOEGNOJHH_PlaceInteractState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define BCJBOEIPPDN_CTOR_OFFSET UNITYSDK_OFFSET(0x15E9DCB0)

inline static constexpr unsigned int BCJBOEIPPDN_TypeDefinitionIndex = 81275;

	class BCJBOEIPPDN : public ::System::Object
	{
	public:
		::System::UInt32 CMNOEFFFNPE; // 0x10
		::HLNOEGNOJHH_PlaceInteractState JMBCJNLCLAC; // 0x14
		::UnityEngine::Vector3 DBEFHAPFJKF; // 0x18
		::System::Int32 ODMPMJCAHPN; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCJBOEIPPDN_CTOR_OFFSET))(this);
		}

	};
