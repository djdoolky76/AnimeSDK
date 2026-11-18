#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NFEPECADMEG;
namespace MoleMole { class ClientSceneObjectStateLooperConfigBase; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GGPGPCCNGFM_BLCJNKLJPKJ_OFFSET UNITYSDK_OFFSET(0x15F1E4D0)
#define GGPGPCCNGFM_BMKJEOPICEG_OFFSET UNITYSDK_OFFSET(0x15F1E310)
#define GGPGPCCNGFM_CINBKLOBMFA_OFFSET UNITYSDK_OFFSET(0x15F1E670)
#define GGPGPCCNGFM_FGFKNMGIDKP_OFFSET UNITYSDK_OFFSET(0x15F1E580)
#define GGPGPCCNGFM_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x15F1E5C0)
#define GGPGPCCNGFM_PFKLAFJOOMA_OFFSET UNITYSDK_OFFSET(0x15F1E3D0)
#define GGPGPCCNGFM__CTOR_OFFSET UNITYSDK_OFFSET(0x15F1E300)

inline static constexpr unsigned int GGPGPCCNGFM_TypeDefinitionIndex = 48307;

class GGPGPCCNGFM : public ::System::Object
{
public:
	::NFEPECADMEG* NEJJHEJINPD; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::ClientSceneObjectStateLooperConfigBase*>* LMDHPGDGBMF; // 0x18
	::System::Action* OHHEEICPNMH; // 0x20
	::System::Action* IDJDKBFAPBJ; // 0x28
	::MoleMole::ClientSceneObjectStateLooperConfigBase* PIOJCFJABCG; // 0x30
	::System::Boolean PGPCKMJFKED; // 0x38
	::System::Byte _padding0[0x3];
	::System::Int32 HIKIOKAHKAC; // 0x3C
	::System::Int32 LGIJBGOOMIN; // 0x40
	::System::Int32 ANAOEPEECDP; // 0x44
	::System::Int32 BKNGAOOCGHB; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGPGPCCNGFM__CTOR_OFFSET))(this);
	}

	::System::Void BMKJEOPICEG(::System::Int32 ACNHJBDCAML)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GGPGPCCNGFM_BMKJEOPICEG_OFFSET))(this, ACNHJBDCAML);
	}

	::System::Void BLCJNKLJPKJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGPGPCCNGFM_BLCJNKLJPKJ_OFFSET))(this);
	}

	::System::Void FGFKNMGIDKP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGPGPCCNGFM_FGFKNMGIDKP_OFFSET))(this);
	}

	::System::Void PFKLAFJOOMA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGPGPCCNGFM_PFKLAFJOOMA_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GGPGPCCNGFM_OKJCHFGIKBH_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void CINBKLOBMFA(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GGPGPCCNGFM_CINBKLOBMFA_OFFSET))(this, ABHBKFJKINO);
	}
};
