#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IAEAIIIKDFC.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class NotificationBadgeEx; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define PMDFKGPOKCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C695240)

inline static constexpr unsigned int PMDFKGPOKCE_TypeDefinitionIndex = 55711;

class PMDFKGPOKCE : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::NotificationBadgeEx*>* KPODKFMBJML; // 0x10
	::System::String* JNAJDCADOOA; // 0x18
	::IAEAIIIKDFC NOOLOILNGPL; // 0x20

	::System::Void _ctor(::IAEAIIIKDFC OBNIAHNMHPF, ::System::String* FNJPKKAHJAJ)
	{
		return ((::System::Void(*)(::PVOID, ::IAEAIIIKDFC, ::System::String*))((::PBYTE)hIl2Cpp + PMDFKGPOKCE__CTOR_OFFSET))(this, OBNIAHNMHPF, FNJPKKAHJAJ);
	}
};
