#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BICHAEHGDAL;
class CIDFEDBDKFP;
namespace System { class Action; }

#define BICHAEHGDAL_NDELDKNJDJE_GHNJLAFEHJC_OFFSET UNITYSDK_OFFSET(0x1867C500)
#define BICHAEHGDAL_NDELDKNJDJE_MMDBHIPBAGJ_OFFSET UNITYSDK_OFFSET(0x1867C520)
#define BICHAEHGDAL_NDELDKNJDJE__CTOR_OFFSET UNITYSDK_OFFSET(0x1867C4F0)

inline static constexpr unsigned int BICHAEHGDAL_NDELDKNJDJE_TypeDefinitionIndex = 92985;

class BICHAEHGDAL_NDELDKNJDJE : public ::System::Object
{
public:
	::BICHAEHGDAL* KLHPEBKNIFB; // 0x10
	::CIDFEDBDKFP* BIJNDBBOLIJ; // 0x18
	::System::Action* DLMJCFBENGB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BICHAEHGDAL_NDELDKNJDJE__CTOR_OFFSET))(this);
	}

	::System::Void GHNJLAFEHJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BICHAEHGDAL_NDELDKNJDJE_GHNJLAFEHJC_OFFSET))(this);
	}

	::System::Void MMDBHIPBAGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BICHAEHGDAL_NDELDKNJDJE_MMDBHIPBAGJ_OFFSET))(this);
	}
};
