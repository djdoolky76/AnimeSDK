#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OIIGJNOAOFO.h"
#include "unitysdk/System/Object.h"

#define GPEBMBHIPKD_GPKMPDHNCGL_OFFSET UNITYSDK_OFFSET(0x149F0CE0)
#define GPEBMBHIPKD_NLMPHNPDCNN_OFFSET UNITYSDK_OFFSET(0x149F0D50)
#define GPEBMBHIPKD_PKKDPOOIMIG_OFFSET UNITYSDK_OFFSET(0x149F0D60)
#define GPEBMBHIPKD__CTOR_OFFSET UNITYSDK_OFFSET(0x149F0D40)

inline static constexpr unsigned int GPEBMBHIPKD_TypeDefinitionIndex = 81276;

class GPEBMBHIPKD : public ::System::Object
{
public:
	::OIIGJNOAOFO _OFHLJBEADOA_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPEBMBHIPKD__CTOR_OFFSET))(this);
	}

	::System::Boolean GPKMPDHNCGL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GPEBMBHIPKD_GPKMPDHNCGL_OFFSET))(this);
	}

	::OIIGJNOAOFO NLMPHNPDCNN()
	{
		return ((::OIIGJNOAOFO(*)(::PVOID))((::PBYTE)hIl2Cpp + GPEBMBHIPKD_NLMPHNPDCNN_OFFSET))(this);
	}

	::System::Void PKKDPOOIMIG(::OIIGJNOAOFO EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::OIIGJNOAOFO))((::PBYTE)hIl2Cpp + GPEBMBHIPKD_PKKDPOOIMIG_OFFSET))(this, EGEGIMGMJHN);
	}
};
