#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PBMIHCGEPEL;
namespace MoleMole { class IVideoPlayer; }
namespace System { class Action; }

#define PBMIHCGEPEL_HEAFLBAPPIF_KJIDJMEOAMD_OFFSET UNITYSDK_OFFSET(0x1845F360)
#define PBMIHCGEPEL_HEAFLBAPPIF__CTOR_OFFSET UNITYSDK_OFFSET(0x1845F350)

inline static constexpr unsigned int PBMIHCGEPEL_HEAFLBAPPIF_TypeDefinitionIndex = 70457;

class PBMIHCGEPEL_HEAFLBAPPIF : public ::System::Object
{
public:
	::PBMIHCGEPEL* KLHPEBKNIFB; // 0x10
	::System::Action* FKHOJLMBILE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBMIHCGEPEL_HEAFLBAPPIF__CTOR_OFFSET))(this);
	}

	::System::Void KJIDJMEOAMD(::MoleMole::IVideoPlayer* KBBPCCGMMFG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + PBMIHCGEPEL_HEAFLBAPPIF_KJIDJMEOAMD_OFFSET))(this, KBBPCCGMMFG);
	}
};
