#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ADEFGFOLCNC;
class EKHEOJOFLLA;
namespace System { template <typename T> class Action_1; }

#define ADEFGFOLCNC_BDJJIOAHMJC_ILBINAHJBBD_OFFSET UNITYSDK_OFFSET(0x135D69E0)
#define ADEFGFOLCNC_BDJJIOAHMJC__CTOR_OFFSET UNITYSDK_OFFSET(0x135D69D0)

inline static constexpr unsigned int ADEFGFOLCNC_BDJJIOAHMJC_TypeDefinitionIndex = 68925;

class ADEFGFOLCNC_BDJJIOAHMJC : public ::System::Object
{
public:
	::ADEFGFOLCNC* KLHPEBKNIFB; // 0x10
	::System::Action_1<::EKHEOJOFLLA*>* IKLJINPLNJA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADEFGFOLCNC_BDJJIOAHMJC__CTOR_OFFSET))(this);
	}

	::System::Void ILBINAHJBBD(::EKHEOJOFLLA* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + ADEFGFOLCNC_BDJJIOAHMJC_ILBINAHJBBD_OFFSET))(this, AAOCANGHBDG);
	}
};
