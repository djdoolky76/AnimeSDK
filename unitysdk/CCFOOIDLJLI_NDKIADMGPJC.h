#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class CCFOOIDLJLI_FLEFNDIHODE;
namespace MoleMole { class ConfigTimelineDataExtra; }

#define CCFOOIDLJLI_NDKIADMGPJC_CJKFMIINPON_OFFSET UNITYSDK_OFFSET(0x159AB4C0)
#define CCFOOIDLJLI_NDKIADMGPJC__CTOR_OFFSET UNITYSDK_OFFSET(0x159AB4B0)

inline static constexpr unsigned int CCFOOIDLJLI_NDKIADMGPJC_TypeDefinitionIndex = 67391;

class CCFOOIDLJLI_NDKIADMGPJC : public ::System::Object
{
public:
	::CCFOOIDLJLI_FLEFNDIHODE* FGBNBFHOKAA; // 0x10
	::Foundation::AssetPath OIIHCACKLHD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCFOOIDLJLI_NDKIADMGPJC__CTOR_OFFSET))(this);
	}

	::System::Void CJKFMIINPON(::MoleMole::ConfigTimelineDataExtra* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigTimelineDataExtra*))((::PBYTE)hIl2Cpp + CCFOOIDLJLI_NDKIADMGPJC_CJKFMIINPON_OFFSET))(this, DFMKILICPFB);
	}
};
