#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define BDDGKPLECMH_LHMJBLJHNPD_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x143CD4B0)
#define BDDGKPLECMH_LHMJBLJHNPD__CTOR_OFFSET UNITYSDK_OFFSET(0x143CD110)

inline static constexpr unsigned int BDDGKPLECMH_LHMJBLJHNPD_TypeDefinitionIndex = 63287;

class BDDGKPLECMH_LHMJBLJHNPD : public ::System::Object
{
public:
	::System::String* GDGGMIJHAJJ; // 0x10
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x18
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDGKPLECMH_LHMJBLJHNPD__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDGKPLECMH_LHMJBLJHNPD_PNGOHNLELDJ_OFFSET))(this);
	}
};
