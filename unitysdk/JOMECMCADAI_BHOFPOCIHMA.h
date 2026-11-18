#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MonoUITableScrollV2;
namespace System { class Action; }

#define JOMECMCADAI_BHOFPOCIHMA_MLCMJAHECMJ_OFFSET UNITYSDK_OFFSET(0x13CD4040)
#define JOMECMCADAI_BHOFPOCIHMA__CTOR_OFFSET UNITYSDK_OFFSET(0x13CD4030)

inline static constexpr unsigned int JOMECMCADAI_BHOFPOCIHMA_TypeDefinitionIndex = 92946;

class JOMECMCADAI_BHOFPOCIHMA : public ::System::Object
{
public:
	::System::Action* FJDOCPKEACA; // 0x10
	::MonoUITableScrollV2* NLNBPDBCCGM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMECMCADAI_BHOFPOCIHMA__CTOR_OFFSET))(this);
	}

	::System::Void MLCMJAHECMJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMECMCADAI_BHOFPOCIHMA_MLCMJAHECMJ_OFFSET))(this);
	}
};
