#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define FCNCBIFHDEA_HDLHJJNGPME_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x1713A740)
#define FCNCBIFHDEA_HDLHJJNGPME__CTOR_OFFSET UNITYSDK_OFFSET(0x1713A730)

inline static constexpr unsigned int FCNCBIFHDEA_HDLHJJNGPME_TypeDefinitionIndex = 90390;

class FCNCBIFHDEA_HDLHJJNGPME : public ::System::Object
{
public:
	::System::String* GDGGMIJHAJJ; // 0x10
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x18
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNCBIFHDEA_HDLHJJNGPME__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNCBIFHDEA_HDLHJJNGPME_PNGOHNLELDJ_OFFSET))(this);
	}
};
