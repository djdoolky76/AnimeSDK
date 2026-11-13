#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IECNEMPGKJL.h"
namespace RPG::GameCore { class CharacterInputData; }

#define PFOHGAHGPCE_BHBBBKCILLA_OFFSET UNITYSDK_OFFSET(0x16D87030)
#define PFOHGAHGPCE_CNAPOOPIAAI_OFFSET UNITYSDK_OFFSET(0x16D869E0)
#define PFOHGAHGPCE_CTOR_OFFSET UNITYSDK_OFFSET(0x16D87100)
#define PFOHGAHGPCE_DNNFJCBMFHP_OFFSET UNITYSDK_OFFSET(0x16D86900)
#define PFOHGAHGPCE_FGFFJBEKHBO_OFFSET UNITYSDK_OFFSET(0x16D86950)
#define PFOHGAHGPCE_LHJBPEBMKDN_OFFSET UNITYSDK_OFFSET(0x16D86990)
#define PFOHGAHGPCE_LMNDPBPJPNC_OFFSET UNITYSDK_OFFSET(0x16D868B0)
#define PFOHGAHGPCE_MNKAPPBEJOK_OFFSET UNITYSDK_OFFSET(0x16D86E60)
#define PFOHGAHGPCE_PMMJGEDIIJD_OFFSET UNITYSDK_OFFSET(0x16D86E00)

inline static constexpr unsigned int PFOHGAHGPCE_TypeDefinitionIndex = 54779;

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
