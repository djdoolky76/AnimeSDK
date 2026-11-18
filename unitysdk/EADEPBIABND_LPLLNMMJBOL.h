#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BGBGIPPOJMD;
class EADEPBIABND;
namespace System { class Action; }

#define EADEPBIABND_LPLLNMMJBOL_HIGBJKPFPCN_OFFSET UNITYSDK_OFFSET(0x16BCD980)
#define EADEPBIABND_LPLLNMMJBOL_JPGNAAGBDGK_OFFSET UNITYSDK_OFFSET(0x16BCD710)
#define EADEPBIABND_LPLLNMMJBOL__CTOR_OFFSET UNITYSDK_OFFSET(0x16BCCA80)

inline static constexpr unsigned int EADEPBIABND_LPLLNMMJBOL_TypeDefinitionIndex = 89544;

class EADEPBIABND_LPLLNMMJBOL : public ::System::Object
{
public:
	::System::Action* DLMJCFBENGB; // 0x10
	::EADEPBIABND* KLHPEBKNIFB; // 0x18
	::BGBGIPPOJMD* BMBBLCBKBIO; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EADEPBIABND_LPLLNMMJBOL__CTOR_OFFSET))(this);
	}

	::System::Void JPGNAAGBDGK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EADEPBIABND_LPLLNMMJBOL_JPGNAAGBDGK_OFFSET))(this);
	}

	::System::Void HIGBJKPFPCN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EADEPBIABND_LPLLNMMJBOL_HIGBJKPFPCN_OFFSET))(this);
	}
};
