#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define FKBAHIEGCII_JHJKNJDJKEM_GIBDJDDKCJB_OFFSET UNITYSDK_OFFSET(0x11D80100)
#define FKBAHIEGCII_JHJKNJDJKEM_LJHDGNAEDIC_OFFSET UNITYSDK_OFFSET(0x11D800F0)
#define FKBAHIEGCII_JHJKNJDJKEM__CTOR_OFFSET UNITYSDK_OFFSET(0x11D800E0)

inline static constexpr unsigned int FKBAHIEGCII_JHJKNJDJKEM_TypeDefinitionIndex = 55180;

class FKBAHIEGCII_JHJKNJDJKEM : public ::System::Object
{
public:
	::UnityEngine::Transform* HBAIENEBGMH; // 0x10
	::System::Int32 LAPCGCGEPNN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKBAHIEGCII_JHJKNJDJKEM__CTOR_OFFSET))(this);
	}

	::UnityEngine::Transform* LJHDGNAEDIC()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKBAHIEGCII_JHJKNJDJKEM_LJHDGNAEDIC_OFFSET))(this);
	}

	::System::Int32 GIBDJDDKCJB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKBAHIEGCII_JHJKNJDJKEM_GIBDJDDKCJB_OFFSET))(this);
	}
};
