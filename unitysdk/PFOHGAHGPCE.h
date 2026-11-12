#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IECNEMPGKJL.h"
namespace RPG::GameCore { class CharacterInputData; }

#define PFOHGAHGPCE_BHBBBKCILLA_OFFSET UNITYSDK_OFFSET(0xCAFB670)
#define PFOHGAHGPCE_CNAPOOPIAAI_OFFSET UNITYSDK_OFFSET(0xCAFB020)
#define PFOHGAHGPCE_CTOR_OFFSET UNITYSDK_OFFSET(0xCAFB750)
#define PFOHGAHGPCE_DNNFJCBMFHP_OFFSET UNITYSDK_OFFSET(0xCAFAF40)
#define PFOHGAHGPCE_FGFFJBEKHBO_OFFSET UNITYSDK_OFFSET(0xCAFAF90)
#define PFOHGAHGPCE_LHJBPEBMKDN_OFFSET UNITYSDK_OFFSET(0xCAFAFD0)
#define PFOHGAHGPCE_LMNDPBPJPNC_OFFSET UNITYSDK_OFFSET(0xCAFAEF0)
#define PFOHGAHGPCE_MNKAPPBEJOK_OFFSET UNITYSDK_OFFSET(0xCAFB4A0)
#define PFOHGAHGPCE_PMMJGEDIIJD_OFFSET UNITYSDK_OFFSET(0xCAFB440)

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
