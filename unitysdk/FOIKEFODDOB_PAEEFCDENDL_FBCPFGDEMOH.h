#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIScriptableAnimationV2; }

#define FOIKEFODDOB_PAEEFCDENDL_FBCPFGDEMOH_BHEKKKNPHAM_OFFSET UNITYSDK_OFFSET(0x142BD040)
#define FOIKEFODDOB_PAEEFCDENDL_FBCPFGDEMOH__CTOR_OFFSET UNITYSDK_OFFSET(0x142BD030)

inline static constexpr unsigned int FOIKEFODDOB_PAEEFCDENDL_FBCPFGDEMOH_TypeDefinitionIndex = 66540;

class FOIKEFODDOB_PAEEFCDENDL_FBCPFGDEMOH : public ::System::Object
{
public:
	::Foundation::AssetPath CJBJONJDOLI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOIKEFODDOB_PAEEFCDENDL_FBCPFGDEMOH__CTOR_OFFSET))(this);
	}

	::System::Void BHEKKKNPHAM(::MoleMole::Config::ConfigUIScriptableAnimationV2* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIScriptableAnimationV2*))((::PBYTE)hIl2Cpp + FOIKEFODDOB_PAEEFCDENDL_FBCPFGDEMOH_BHEKKKNPHAM_OFFSET))(this, DFMKILICPFB);
	}
};
