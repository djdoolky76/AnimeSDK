#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EKGAHGCJOAN;
class MCAFAFHBIHL;
namespace System { class Action; }

#define EKGAHGCJOAN_EOLOBJLAOFH_DBDPAJADEGG_OFFSET UNITYSDK_OFFSET(0x158B9590)
#define EKGAHGCJOAN_EOLOBJLAOFH_NEAJJEGOOIP_OFFSET UNITYSDK_OFFSET(0x158B9560)
#define EKGAHGCJOAN_EOLOBJLAOFH__CTOR_OFFSET UNITYSDK_OFFSET(0x158B9550)

inline static constexpr unsigned int EKGAHGCJOAN_EOLOBJLAOFH_TypeDefinitionIndex = 51236;

class EKGAHGCJOAN_EOLOBJLAOFH : public ::System::Object
{
public:
	::EKGAHGCJOAN* KLHPEBKNIFB; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_EOLOBJLAOFH__CTOR_OFFSET))(this);
	}

	::System::Void NEAJJEGOOIP(::MCAFAFHBIHL* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::MCAFAFHBIHL*))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_EOLOBJLAOFH_NEAJJEGOOIP_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void DBDPAJADEGG(::MCAFAFHBIHL* BLLNHDIDKPA)
	{
		return ((::System::Void(*)(::PVOID, ::MCAFAFHBIHL*))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_EOLOBJLAOFH_DBDPAJADEGG_OFFSET))(this, BLLNHDIDKPA);
	}
};
