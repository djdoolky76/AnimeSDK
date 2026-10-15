#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IECNEMPGKJL.h"
namespace RPG::GameCore { class CharacterInputData; }

#define GNGDJGPKOFO_BHBBBKCILLA_OFFSET UNITYSDK_OFFSET(0x15B07FB0)
#define GNGDJGPKOFO_CNAPOOPIAAI_OFFSET UNITYSDK_OFFSET(0x15B07960)
#define GNGDJGPKOFO_CTOR_OFFSET UNITYSDK_OFFSET(0x15B08080)
#define GNGDJGPKOFO_DNNFJCBMFHP_OFFSET UNITYSDK_OFFSET(0x15B07890)
#define GNGDJGPKOFO_FGFFJBEKHBO_OFFSET UNITYSDK_OFFSET(0x15B078D0)
#define GNGDJGPKOFO_LHJBPEBMKDN_OFFSET UNITYSDK_OFFSET(0x15B07910)
#define GNGDJGPKOFO_LMNDPBPJPNC_OFFSET UNITYSDK_OFFSET(0x15B07850)
#define GNGDJGPKOFO_MNKAPPBEJOK_OFFSET UNITYSDK_OFFSET(0x15B07DC0)
#define GNGDJGPKOFO_PMMJGEDIIJD_OFFSET UNITYSDK_OFFSET(0x15B07D60)

	class GNGDJGPKOFO : public ::IECNEMPGKJL
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNGDJGPKOFO_CTOR_OFFSET))(this);
		}

		::System::Single LMNDPBPJPNC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GNGDJGPKOFO_LMNDPBPJPNC_OFFSET))(this);
		}

		::System::Single DNNFJCBMFHP()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GNGDJGPKOFO_DNNFJCBMFHP_OFFSET))(this);
		}

		::System::Void FGFFJBEKHBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNGDJGPKOFO_FGFFJBEKHBO_OFFSET))(this);
		}

		::System::Void LHJBPEBMKDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNGDJGPKOFO_LHJBPEBMKDN_OFFSET))(this);
		}

		::System::Void CNAPOOPIAAI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNGDJGPKOFO_CNAPOOPIAAI_OFFSET))(this);
		}

		::System::Void PMMJGEDIIJD(::RPG::GameCore::CharacterInputData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*))((::PBYTE)hIl2Cpp + GNGDJGPKOFO_PMMJGEDIIJD_OFFSET))(this, a1);
		}

		::System::Boolean MNKAPPBEJOK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GNGDJGPKOFO_MNKAPPBEJOK_OFFSET))(this);
		}

		::System::Boolean BHBBBKCILLA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GNGDJGPKOFO_BHBBBKCILLA_OFFSET))(this);
		}

	};
