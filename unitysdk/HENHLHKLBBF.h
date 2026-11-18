#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJBPFFLIECG.h"

class MEJNAELGNNG;

#define HENHLHKLBBF_DGHIOOLBHNN_OFFSET UNITYSDK_OFFSET(0x17AF1DF0)
#define HENHLHKLBBF_EIFMBFDINCG_OFFSET UNITYSDK_OFFSET(0x17AF1D50)
#define HENHLHKLBBF_HPCGPOJPFIB_OFFSET UNITYSDK_OFFSET(0x17AF1E30)
#define HENHLHKLBBF_KIMJCGJHJAC_OFFSET UNITYSDK_OFFSET(0x17AF1CA0)
#define HENHLHKLBBF_ONSTART_OFFSET UNITYSDK_OFFSET(0x17AF1C60)
#define HENHLHKLBBF__CTOR_OFFSET UNITYSDK_OFFSET(0x17AF1D40)

inline static constexpr unsigned int HENHLHKLBBF_TypeDefinitionIndex = 72566;

class HENHLHKLBBF : public ::DJBPFFLIECG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HENHLHKLBBF__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HENHLHKLBBF_ONSTART_OFFSET))(this);
	}

	::System::Void KIMJCGJHJAC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HENHLHKLBBF_KIMJCGJHJAC_OFFSET))(this);
	}

	static ::System::Void EIFMBFDINCG(::System::Int32 MGMDLMBEDJF)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + HENHLHKLBBF_EIFMBFDINCG_OFFSET))(MGMDLMBEDJF);
	}

	static ::System::Void DGHIOOLBHNN()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HENHLHKLBBF_DGHIOOLBHNN_OFFSET))();
	}

	::System::Void HPCGPOJPFIB(::MEJNAELGNNG* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::MEJNAELGNNG*))((::PBYTE)hIl2Cpp + HENHLHKLBBF_HPCGPOJPFIB_OFFSET))(this, LJBPECKCCEA);
	}
};
