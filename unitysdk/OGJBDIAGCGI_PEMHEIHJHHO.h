#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define OGJBDIAGCGI_PEMHEIHJHHO_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x1B788620)
#define OGJBDIAGCGI_PEMHEIHJHHO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B788610)

inline static constexpr unsigned int OGJBDIAGCGI_PEMHEIHJHHO_TypeDefinitionIndex = 65657;

class OGJBDIAGCGI_PEMHEIHJHHO : public ::System::Object
{
public:
	::System::String* GDGGMIJHAJJ; // 0x10
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x18
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGJBDIAGCGI_PEMHEIHJHHO__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGJBDIAGCGI_PEMHEIHJHHO_PNGOHNLELDJ_OFFSET))(this);
	}
};
