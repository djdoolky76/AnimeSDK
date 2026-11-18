#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DMHOLJNNCJA;
namespace System { class Action; }

#define DMHOLJNNCJA_EOOAMOKLEIN_HDBHFAEKCJF_OFFSET UNITYSDK_OFFSET(0xFDC6930)
#define DMHOLJNNCJA_EOOAMOKLEIN_PFIEJBAJFFA_OFFSET UNITYSDK_OFFSET(0xFDC69A0)
#define DMHOLJNNCJA_EOOAMOKLEIN__CTOR_OFFSET UNITYSDK_OFFSET(0xFDC6920)

inline static constexpr unsigned int DMHOLJNNCJA_EOOAMOKLEIN_TypeDefinitionIndex = 46955;

class DMHOLJNNCJA_EOOAMOKLEIN : public ::System::Object
{
public:
	::DMHOLJNNCJA* KLHPEBKNIFB; // 0x10
	::System::Action* EDNJGMKPFHG; // 0x18
	::System::Action* IFKOKLCPMNF; // 0x20
	::Il2CppArray<::System::Int32>* CKDDIOKBHOI; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHOLJNNCJA_EOOAMOKLEIN__CTOR_OFFSET))(this);
	}

	::System::Void HDBHFAEKCJF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHOLJNNCJA_EOOAMOKLEIN_HDBHFAEKCJF_OFFSET))(this);
	}

	::System::Void PFIEJBAJFFA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHOLJNNCJA_EOOAMOKLEIN_PFIEJBAJFFA_OFFSET))(this);
	}
};
