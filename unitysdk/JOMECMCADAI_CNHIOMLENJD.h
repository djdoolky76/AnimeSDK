#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JOMECMCADAI;
namespace System { class Action; }

#define JOMECMCADAI_CNHIOMLENJD_EHGPJMFHABF_OFFSET UNITYSDK_OFFSET(0x13AE3B70)
#define JOMECMCADAI_CNHIOMLENJD__CTOR_OFFSET UNITYSDK_OFFSET(0x13AE3B60)

inline static constexpr unsigned int JOMECMCADAI_CNHIOMLENJD_TypeDefinitionIndex = 92949;

class JOMECMCADAI_CNHIOMLENJD : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::JOMECMCADAI* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMECMCADAI_CNHIOMLENJD__CTOR_OFFSET))(this);
	}

	::System::Void EHGPJMFHABF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMECMCADAI_CNHIOMLENJD_EHGPJMFHABF_OFFSET))(this);
	}
};
