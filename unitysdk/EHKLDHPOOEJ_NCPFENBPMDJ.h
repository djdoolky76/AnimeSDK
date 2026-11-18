#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OGGDNMKMCCL;
namespace System::Text { class StringBuilder; }

#define EHKLDHPOOEJ_NCPFENBPMDJ_FMONAIHFCFP_OFFSET UNITYSDK_OFFSET(0x11A742B0)
#define EHKLDHPOOEJ_NCPFENBPMDJ__CTOR_OFFSET UNITYSDK_OFFSET(0x11A742A0)

inline static constexpr unsigned int EHKLDHPOOEJ_NCPFENBPMDJ_TypeDefinitionIndex = 62615;

class EHKLDHPOOEJ_NCPFENBPMDJ : public ::System::Object
{
public:
	::System::Text::StringBuilder* CKGGMNHMKDB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHKLDHPOOEJ_NCPFENBPMDJ__CTOR_OFFSET))(this);
	}

	::System::Void FMONAIHFCFP(::OGGDNMKMCCL* MDLNMDJMMJP)
	{
		return ((::System::Void(*)(::PVOID, ::OGGDNMKMCCL*))((::PBYTE)hIl2Cpp + EHKLDHPOOEJ_NCPFENBPMDJ_FMONAIHFCFP_OFFSET))(this, MDLNMDJMMJP);
	}
};
