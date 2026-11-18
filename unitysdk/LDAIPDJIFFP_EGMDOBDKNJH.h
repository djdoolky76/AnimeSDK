#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define LDAIPDJIFFP_EGMDOBDKNJH_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x17683AF0)
#define LDAIPDJIFFP_EGMDOBDKNJH__CTOR_OFFSET UNITYSDK_OFFSET(0x17683AE0)

inline static constexpr unsigned int LDAIPDJIFFP_EGMDOBDKNJH_TypeDefinitionIndex = 90833;

class LDAIPDJIFFP_EGMDOBDKNJH : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x10
	::System::String* GDGGMIJHAJJ; // 0x18
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDAIPDJIFFP_EGMDOBDKNJH__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDAIPDJIFFP_EGMDOBDKNJH_PNGOHNLELDJ_OFFSET))(this);
	}
};
