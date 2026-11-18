#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GFKECOIAHNE_LGDAOCLONFD;
class IFOHGNLIAKH;
namespace System { template <typename T> class Action_1; }

#define GFKECOIAHNE_JEBLEKGIJJD_CNJEKKHALDF_OFFSET UNITYSDK_OFFSET(0x179E7DC0)
#define GFKECOIAHNE_JEBLEKGIJJD_DPJAEANCFJG_OFFSET UNITYSDK_OFFSET(0x179E7E50)
#define GFKECOIAHNE_JEBLEKGIJJD__CTOR_OFFSET UNITYSDK_OFFSET(0x179E7DB0)

inline static constexpr unsigned int GFKECOIAHNE_JEBLEKGIJJD_TypeDefinitionIndex = 43241;

class GFKECOIAHNE_JEBLEKGIJJD : public ::System::Object
{
public:
	::GFKECOIAHNE_LGDAOCLONFD* FGBNBFHOKAA; // 0x10
	::System::Action_1<::IFOHGNLIAKH*>* IMDHDEKCNNG; // 0x18
	::System::Int32 CKEDPOEIAMH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFKECOIAHNE_JEBLEKGIJJD__CTOR_OFFSET))(this);
	}

	::System::Void CNJEKKHALDF(::IFOHGNLIAKH* JOLDOMEIKEF)
	{
		return ((::System::Void(*)(::PVOID, ::IFOHGNLIAKH*))((::PBYTE)hIl2Cpp + GFKECOIAHNE_JEBLEKGIJJD_CNJEKKHALDF_OFFSET))(this, JOLDOMEIKEF);
	}

	::System::Void DPJAEANCFJG(::IFOHGNLIAKH* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::IFOHGNLIAKH*))((::PBYTE)hIl2Cpp + GFKECOIAHNE_JEBLEKGIJJD_DPJAEANCFJG_OFFSET))(this, PIIPCLCCOIG);
	}
};
