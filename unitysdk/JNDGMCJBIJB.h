#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DGGIDHPNLJN.h"
#include "unitysdk/System/Object.h"

class HEENBFDHKGO;
namespace System { class String; }

#define JNDGMCJBIJB_AOCNJEHONMA_OFFSET UNITYSDK_OFFSET(0x1C372380)
#define JNDGMCJBIJB_CBEHGHNMCIG_OFFSET UNITYSDK_OFFSET(0x1C3725B0)
#define JNDGMCJBIJB_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x1C3722A0)
#define JNDGMCJBIJB_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x1C3723D0)
#define JNDGMCJBIJB_FBMIEJIGIED_OFFSET UNITYSDK_OFFSET(0x1C372540)
#define JNDGMCJBIJB__CTOR_OFFSET UNITYSDK_OFFSET(0x1C372170)

inline static constexpr unsigned int JNDGMCJBIJB_TypeDefinitionIndex = 92563;

class JNDGMCJBIJB : public ::System::Object
{
public:
	::DGGIDHPNLJN CIAHAAKLADN; // 0x10
	::System::Int32 KCDACBJCOFD; // 0x14
	::System::Int32 EOBNMDEOIJF; // 0x18
	::System::Int32 HBOAMACPOCJ; // 0x1C
	::System::Int32 DANPNNFFOOF; // 0x20

	::System::Void _ctor(::System::Int32 DANPNNFFOOF, ::System::Int32 KCDACBJCOFD, ::System::Int32 EOBNMDEOIJF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + JNDGMCJBIJB__CTOR_OFFSET))(this, DANPNNFFOOF, KCDACBJCOFD, EOBNMDEOIJF);
	}

	::HEENBFDHKGO* COPIDBEMEIE()
	{
		return ((::HEENBFDHKGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNDGMCJBIJB_COPIDBEMEIE_OFFSET))(this);
	}

	::System::String* AOCNJEHONMA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNDGMCJBIJB_AOCNJEHONMA_OFFSET))(this);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNDGMCJBIJB_DECMGICKDLH_OFFSET))(this);
	}

	::System::String* FBMIEJIGIED()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNDGMCJBIJB_FBMIEJIGIED_OFFSET))(this);
	}

	::System::String* CBEHGHNMCIG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNDGMCJBIJB_CBEHGHNMCIG_OFFSET))(this);
	}
};
