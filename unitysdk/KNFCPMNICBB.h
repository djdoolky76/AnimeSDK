#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJBPFFLIECG.h"

namespace System { template <typename T> class Action_1; }

#define KNFCPMNICBB_ANJHJBNAMGI_OFFSET UNITYSDK_OFFSET(0x1A2D6040)
#define KNFCPMNICBB_FAAHLGJGFDL_OFFSET UNITYSDK_OFFSET(0x1A2D61D0)
#define KNFCPMNICBB_KIMJCGJHJAC_OFFSET UNITYSDK_OFFSET(0x1A2D5FF0)
#define KNFCPMNICBB_KPPLAGJMEFF_OFFSET UNITYSDK_OFFSET(0x1A2D6370)
#define KNFCPMNICBB_ONSTART_OFFSET UNITYSDK_OFFSET(0x1A2D5FB0)
#define KNFCPMNICBB__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2D6030)

inline static constexpr unsigned int KNFCPMNICBB_TypeDefinitionIndex = 39387;

class KNFCPMNICBB : public ::DJBPFFLIECG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNFCPMNICBB__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNFCPMNICBB_ONSTART_OFFSET))(this);
	}

	::System::Void KIMJCGJHJAC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNFCPMNICBB_KIMJCGJHJAC_OFFSET))(this);
	}

	::System::Void ANJHJBNAMGI(::System::Int32 MGMDLMBEDJF, ::System::Int32 OBNIAHNMHPF, ::System::Int64 ACHBBPJIBIE, ::System::Int32 OKNCDBHBPPN, ::System::Int32 HGNIEOFKCAJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int64, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KNFCPMNICBB_ANJHJBNAMGI_OFFSET))(this, MGMDLMBEDJF, OBNIAHNMHPF, ACHBBPJIBIE, OKNCDBHBPPN, HGNIEOFKCAJ);
	}

	::System::Void FAAHLGJGFDL(::System::Int32 MGMDLMBEDJF, ::System::Int32 OBNIAHNMHPF, ::System::Action_1<::System::Int64>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Action_1<::System::Int64>*))((::PBYTE)hIl2Cpp + KNFCPMNICBB_FAAHLGJGFDL_OFFSET))(this, MGMDLMBEDJF, OBNIAHNMHPF, EJGDHCIBCJH);
	}

	::System::Void KPPLAGJMEFF(::System::Int32 MGMDLMBEDJF, ::System::Int32 OBNIAHNMHPF, ::System::Int64 ACHBBPJIBIE, ::System::Int32 JOLDABPBFDD, ::System::Int32 PDKAIGJOCKP, ::System::Int32 ENKJKNHMHLP, ::System::Int32 LPGLHGKLHGO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int64, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KNFCPMNICBB_KPPLAGJMEFF_OFFSET))(this, MGMDLMBEDJF, OBNIAHNMHPF, ACHBBPJIBIE, JOLDABPBFDD, PDKAIGJOCKP, ENKJKNHMHLP, LPGLHGKLHGO);
	}
};
