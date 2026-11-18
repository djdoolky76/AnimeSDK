#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KDICCLLAODB.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/PONEGOPCLPF.h"

class AIOGGGIHCAE;

#define IEEGIPNCMFL_ECLJJCFKHBK_OFFSET UNITYSDK_OFFSET(0x16F5EF50)
#define IEEGIPNCMFL_FMJBIKNLKLA_OFFSET UNITYSDK_OFFSET(0x16F5F0C0)
#define IEEGIPNCMFL_GAGFCKAJLEO_OFFSET UNITYSDK_OFFSET(0x16F5F0D0)
#define IEEGIPNCMFL_IHBFFPEHJKK_OFFSET UNITYSDK_OFFSET(0x16F5ECB0)
#define IEEGIPNCMFL_JGNLEGABBPB_OFFSET UNITYSDK_OFFSET(0x16F5EBF0)
#define IEEGIPNCMFL_JPJLHGHIOMA_OFFSET UNITYSDK_OFFSET(0x16F5EDD0)
#define IEEGIPNCMFL_JPMNBOHLDPP_OFFSET UNITYSDK_OFFSET(0x16F5F010)
#define IEEGIPNCMFL_KEBIFLIFNIC_OFFSET UNITYSDK_OFFSET(0x16F5F170)
#define IEEGIPNCMFL_KPCMPDDOFFI_OFFSET UNITYSDK_OFFSET(0x16F5EC40)
#define IEEGIPNCMFL_LDAKNJHEPBJ_OFFSET UNITYSDK_OFFSET(0x16F5EE60)
#define IEEGIPNCMFL_NILHPIAFNPL_OFFSET UNITYSDK_OFFSET(0x16F5F0E0)
#define IEEGIPNCMFL__CTOR_OFFSET UNITYSDK_OFFSET(0x16F5EF90)

inline static constexpr unsigned int IEEGIPNCMFL_TypeDefinitionIndex = 82036;

class IEEGIPNCMFL : public ::KDICCLLAODB
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEEGIPNCMFL__CTOR_OFFSET))(this);
	}

	::System::Boolean JGNLEGABBPB(::PONEGOPCLPF& JKBLDFBGBPK)
	{
		return ((::System::Boolean(*)(::PVOID, ::PONEGOPCLPF&))((::PBYTE)hIl2Cpp + IEEGIPNCMFL_JGNLEGABBPB_OFFSET))(this, JKBLDFBGBPK);
	}

	::System::Int32 KPCMPDDOFFI(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IEEGIPNCMFL_KPCMPDDOFFI_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void IHBFFPEHJKK(::AIOGGGIHCAE*& KNGNADJNFOP)
	{
		return ((::System::Void(*)(::PVOID, ::AIOGGGIHCAE*&))((::PBYTE)hIl2Cpp + IEEGIPNCMFL_IHBFFPEHJKK_OFFSET))(this, KNGNADJNFOP);
	}

	::System::Boolean JPJLHGHIOMA(::MoleMole::ESystemSettingType JELHEKJMJNI, ::System::Boolean& IGAAKDOIPNN)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::ESystemSettingType, ::System::Boolean&))((::PBYTE)hIl2Cpp + IEEGIPNCMFL_JPJLHGHIOMA_OFFSET))(this, JELHEKJMJNI, IGAAKDOIPNN);
	}

	::System::Boolean ECLJJCFKHBK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IEEGIPNCMFL_ECLJJCFKHBK_OFFSET))(this);
	}

	::System::Boolean JPMNBOHLDPP(::MoleMole::ESystemSettingType MIALFKCCCPI, ::System::Boolean& KMGKAIDEIBA)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::ESystemSettingType, ::System::Boolean&))((::PBYTE)hIl2Cpp + IEEGIPNCMFL_JPMNBOHLDPP_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Int32 FMJBIKNLKLA(::System::Int32 MIALFKCCCPI)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IEEGIPNCMFL_FMJBIKNLKLA_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GAGFCKAJLEO(::AIOGGGIHCAE*& MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::AIOGGGIHCAE*&))((::PBYTE)hIl2Cpp + IEEGIPNCMFL_GAGFCKAJLEO_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean NILHPIAFNPL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IEEGIPNCMFL_NILHPIAFNPL_OFFSET))(this);
	}

	::System::Boolean LDAKNJHEPBJ(::MoleMole::ESystemSettingType JELHEKJMJNI)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::ESystemSettingType))((::PBYTE)hIl2Cpp + IEEGIPNCMFL_LDAKNJHEPBJ_OFFSET))(this, JELHEKJMJNI);
	}

	::System::Boolean KEBIFLIFNIC(::PONEGOPCLPF& MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::PONEGOPCLPF&))((::PBYTE)hIl2Cpp + IEEGIPNCMFL_KEBIFLIFNIC_OFFSET))(this, MIALFKCCCPI);
	}
};
