#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class FMEOCDNGGMN;
namespace MoleMole { class ConfigTimelineDataExtra; }

#define FMEOCDNGGMN_ECCLOFCOLEF_BHEKKKNPHAM_OFFSET UNITYSDK_OFFSET(0x116BCF30)
#define FMEOCDNGGMN_ECCLOFCOLEF__CTOR_OFFSET UNITYSDK_OFFSET(0x116BCF20)

inline static constexpr unsigned int FMEOCDNGGMN_ECCLOFCOLEF_TypeDefinitionIndex = 84866;

class FMEOCDNGGMN_ECCLOFCOLEF : public ::System::Object
{
public:
	::FMEOCDNGGMN* KLHPEBKNIFB; // 0x10
	::Foundation::AssetPath CJBJONJDOLI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMEOCDNGGMN_ECCLOFCOLEF__CTOR_OFFSET))(this);
	}

	::System::Void BHEKKKNPHAM(::MoleMole::ConfigTimelineDataExtra* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigTimelineDataExtra*))((::PBYTE)hIl2Cpp + FMEOCDNGGMN_ECCLOFCOLEF_BHEKKKNPHAM_OFFSET))(this, DFMKILICPFB);
	}
};
