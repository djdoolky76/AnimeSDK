#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JOMECMCADAI;
namespace System { class Action; }

#define JOMECMCADAI_DIMHKMIFOEH_DDEMCLLHAJC_OFFSET UNITYSDK_OFFSET(0x14FC6A40)
#define JOMECMCADAI_DIMHKMIFOEH_IDKLDOGEMJM_OFFSET UNITYSDK_OFFSET(0x14FC6B90)
#define JOMECMCADAI_DIMHKMIFOEH_MNODFBNOEDD_OFFSET UNITYSDK_OFFSET(0x14FC6C30)
#define JOMECMCADAI_DIMHKMIFOEH__CTOR_OFFSET UNITYSDK_OFFSET(0x14FC6A30)

inline static constexpr unsigned int JOMECMCADAI_DIMHKMIFOEH_TypeDefinitionIndex = 92948;

class JOMECMCADAI_DIMHKMIFOEH : public ::System::Object
{
public:
	::System::Action* DLMJCFBENGB; // 0x10
	::JOMECMCADAI* KLHPEBKNIFB; // 0x18
	::System::Action* EJGDHCIBCJH; // 0x20
	::System::Action* FFMGICPLKFB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMECMCADAI_DIMHKMIFOEH__CTOR_OFFSET))(this);
	}

	::System::Void DDEMCLLHAJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMECMCADAI_DIMHKMIFOEH_DDEMCLLHAJC_OFFSET))(this);
	}

	::System::Void IDKLDOGEMJM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMECMCADAI_DIMHKMIFOEH_IDKLDOGEMJM_OFFSET))(this);
	}

	::System::Void MNODFBNOEDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMECMCADAI_DIMHKMIFOEH_MNODFBNOEDD_OFFSET))(this);
	}
};
