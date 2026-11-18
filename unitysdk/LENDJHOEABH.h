#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define LENDJHOEABH_FMBPLJHODDP_OFFSET UNITYSDK_OFFSET(0x1A605550)
#define LENDJHOEABH_ILIPBGDDKAJ_OFFSET UNITYSDK_OFFSET(0x1A605560)
#define LENDJHOEABH_JFIMNPDBNBG_OFFSET UNITYSDK_OFFSET(0x1A605540)
#define LENDJHOEABH__CTOR_OFFSET UNITYSDK_OFFSET(0x1A605530)

inline static constexpr unsigned int LENDJHOEABH_TypeDefinitionIndex = 46684;

class LENDJHOEABH : public ::System::Object
{
public:
	::System::String* _MALNAFDOPIG_k__BackingField; // 0x10
	::System::Boolean EJKCOFNGPOP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LENDJHOEABH__CTOR_OFFSET))(this);
	}

	::System::String* JFIMNPDBNBG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LENDJHOEABH_JFIMNPDBNBG_OFFSET))(this);
	}

	::System::Void FMBPLJHODDP(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LENDJHOEABH_FMBPLJHODDP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void ILIPBGDDKAJ(::System::String* MPCFCIMLKEG)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LENDJHOEABH_ILIPBGDDKAJ_OFFSET))(this, MPCFCIMLKEG);
	}
};
