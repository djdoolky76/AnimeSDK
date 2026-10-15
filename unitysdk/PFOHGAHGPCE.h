#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IECNEMPGKJL.h"
namespace RPG::GameCore { class CharacterInputData; }

#define PFOHGAHGPCE_BHBBBKCILLA_OFFSET UNITYSDK_OFFSET(0xC218B60)
#define PFOHGAHGPCE_CNAPOOPIAAI_OFFSET UNITYSDK_OFFSET(0xC218510)
#define PFOHGAHGPCE_CTOR_OFFSET UNITYSDK_OFFSET(0xC218C30)
#define PFOHGAHGPCE_DNNFJCBMFHP_OFFSET UNITYSDK_OFFSET(0xC218430)
#define PFOHGAHGPCE_FGFFJBEKHBO_OFFSET UNITYSDK_OFFSET(0xC218480)
#define PFOHGAHGPCE_LHJBPEBMKDN_OFFSET UNITYSDK_OFFSET(0xC2184C0)
#define PFOHGAHGPCE_LMNDPBPJPNC_OFFSET UNITYSDK_OFFSET(0xC2183E0)
#define PFOHGAHGPCE_MNKAPPBEJOK_OFFSET UNITYSDK_OFFSET(0xC218990)
#define PFOHGAHGPCE_PMMJGEDIIJD_OFFSET UNITYSDK_OFFSET(0xC218930)

inline static constexpr unsigned int PFOHGAHGPCE_TypeDefinitionIndex = 53615;

	class PFOHGAHGPCE : public ::IECNEMPGKJL
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFOHGAHGPCE_CTOR_OFFSET))(this);
		}

		::System::Single LMNDPBPJPNC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PFOHGAHGPCE_LMNDPBPJPNC_OFFSET))(this);
		}

		::System::Single DNNFJCBMFHP()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PFOHGAHGPCE_DNNFJCBMFHP_OFFSET))(this);
		}

		::System::Void FGFFJBEKHBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFOHGAHGPCE_FGFFJBEKHBO_OFFSET))(this);
		}

		::System::Void LHJBPEBMKDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFOHGAHGPCE_LHJBPEBMKDN_OFFSET))(this);
		}

		::System::Void CNAPOOPIAAI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFOHGAHGPCE_CNAPOOPIAAI_OFFSET))(this);
		}

		::System::Void PMMJGEDIIJD(::RPG::GameCore::CharacterInputData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*))((::PBYTE)hIl2Cpp + PFOHGAHGPCE_PMMJGEDIIJD_OFFSET))(this, a1);
		}

		::System::Boolean MNKAPPBEJOK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PFOHGAHGPCE_MNKAPPBEJOK_OFFSET))(this);
		}

		::System::Boolean BHBBBKCILLA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PFOHGAHGPCE_BHBBBKCILLA_OFFSET))(this);
		}

	};
