#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KHMLKLEAJLG_HOKGEICCIHM;

#define KHMLKLEAJLG_FLFANFJELDM_LIKFBBFHGDE_OFFSET UNITYSDK_OFFSET(0x157EDFF0)
#define KHMLKLEAJLG_FLFANFJELDM__CTOR_OFFSET UNITYSDK_OFFSET(0x157EDFE0)

inline static constexpr unsigned int KHMLKLEAJLG_FLFANFJELDM_TypeDefinitionIndex = 66305;

class KHMLKLEAJLG_FLFANFJELDM : public ::System::Object
{
public:
	::KHMLKLEAJLG_HOKGEICCIHM* DGOMMGANKBO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHMLKLEAJLG_FLFANFJELDM__CTOR_OFFSET))(this);
	}

	::System::Void LIKFBBFHGDE(::System::Int32 PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KHMLKLEAJLG_FLFANFJELDM_LIKFBBFHGDE_OFFSET))(this, PIIPCLCCOIG);
	}
};
