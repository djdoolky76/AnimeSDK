#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IGNPHCCAJFA_HDCAALBJDIN_OFFSET UNITYSDK_OFFSET(0x15EBB090)
#define IGNPHCCAJFA_IPLBCIJDMPO_OFFSET UNITYSDK_OFFSET(0x15EBB0A0)
#define IGNPHCCAJFA__CTOR_OFFSET UNITYSDK_OFFSET(0x15EBB080)

inline static constexpr unsigned int IGNPHCCAJFA_TypeDefinitionIndex = 77389;

class IGNPHCCAJFA : public ::System::Object
{
public:
	::System::Int32 _EELLHHGEDPO_k__BackingField; // 0x10

	::System::Void _ctor(::System::Int32& ACHBBPJIBIE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + IGNPHCCAJFA__CTOR_OFFSET))(this, ACHBBPJIBIE);
	}

	::System::Int32 HDCAALBJDIN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGNPHCCAJFA_HDCAALBJDIN_OFFSET))(this);
	}

	::System::Void IPLBCIJDMPO(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IGNPHCCAJFA_IPLBCIJDMPO_OFFSET))(this, EGEGIMGMJHN);
	}
};
