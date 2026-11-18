#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OLEOMDELENE;

#define OLEOMDELENE_HPPKJNBAOLG_DKGPAODNGLA_OFFSET UNITYSDK_OFFSET(0x14F8AE50)
#define OLEOMDELENE_HPPKJNBAOLG_LPHELLAEFLP_OFFSET UNITYSDK_OFFSET(0x14F8AE10)
#define OLEOMDELENE_HPPKJNBAOLG__CTOR_OFFSET UNITYSDK_OFFSET(0x14F8AE00)

inline static constexpr unsigned int OLEOMDELENE_HPPKJNBAOLG_TypeDefinitionIndex = 61056;

class OLEOMDELENE_HPPKJNBAOLG : public ::System::Object
{
public:
	::OLEOMDELENE* KLHPEBKNIFB; // 0x10
	::System::Int32 LGBHOFGBGHC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLEOMDELENE_HPPKJNBAOLG__CTOR_OFFSET))(this);
	}

	::System::Void LPHELLAEFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLEOMDELENE_HPPKJNBAOLG_LPHELLAEFLP_OFFSET))(this);
	}

	::System::Void DKGPAODNGLA(::System::Int32 JHFKDGBCOBA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OLEOMDELENE_HPPKJNBAOLG_DKGPAODNGLA_OFFSET))(this, JHFKDGBCOBA);
	}
};
