#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NativeVariableArray_1.h"
#include "unitysdk/PMBCHGNJMKF.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Animations/AnimationScriptPlayable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/Foundation/NativeVariable_1.h"
#include "unitysdk/PipelineCamera/Optional_1.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace Foundation { class NativeMemory; }
namespace MoleMole::Photo { class Skeleton; }
namespace UnityEngine { class Animator; }

#define NGNMNDGMCGP_BKKKLJDAOHP_OFFSET UNITYSDK_OFFSET(0x12C5F2E0)
#define NGNMNDGMCGP_CCHPKBBMOEB_OFFSET UNITYSDK_OFFSET(0x12C5EFB0)
#define NGNMNDGMCGP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12C5EC60)
#define NGNMNDGMCGP_DMKOAIOCHLO_OFFSET UNITYSDK_OFFSET(0x12C5EF60)
#define NGNMNDGMCGP_IOKHLKHAOJF_OFFSET UNITYSDK_OFFSET(0x12C5F000)
#define NGNMNDGMCGP_JGENCIAJAND_OFFSET UNITYSDK_OFFSET(0x12C5F3A0)
#define NGNMNDGMCGP_JMBCGNNCDGD_OFFSET UNITYSDK_OFFSET(0x12C5F170)
#define NGNMNDGMCGP_NIFFHNKGFGB_OFFSET UNITYSDK_OFFSET(0x12C5F7F0)
#define NGNMNDGMCGP_PGHAJOMNDDJ_1_OFFSET UNITYSDK_OFFSET(0x12C5F9C0)
#define NGNMNDGMCGP_PGHAJOMNDDJ_OFFSET UNITYSDK_OFFSET(0x12C5F740)
#define NGNMNDGMCGP_PLAANJLKADF_OFFSET UNITYSDK_OFFSET(0x12C5F960)
#define NGNMNDGMCGP__CTOR_OFFSET UNITYSDK_OFFSET(0x12C5E940)

inline static constexpr unsigned int NGNMNDGMCGP_TypeDefinitionIndex = 71770;

class NGNMNDGMCGP : public ::System::Object
{
public:
	::UnityEngine::Animator* FPGIEMNHLEF; // 0x10
	::Foundation::NativeMemory* JGNNPBEEHPP; // 0x18
	::MoleMole::Photo::Skeleton* AGNPPGPGGPP; // 0x20
	::UnityEngine::Animations::AnimationScriptPlayable LLFKOOKDOLP; // 0x28
	::Foundation::NativeVariableArray_1<::System::Single> JKAMOCKEFHJ; // 0x38
	::System::Byte _padding0[0x8];
	::PMBCHGNJMKF DAAAEJDBNFI; // 0x48
	::UnityEngine::Playables::PlayableGraph CDAANDKNPIG; // 0xD8

	::System::Void _ctor(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::UnityEngine::Animator* ICAAMDMMDDJ, ::PMBCHGNJMKF AAOCANGHBDG, ::UnityEngine::Animations::AnimationScriptPlayable IMFFCLHHPOD)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Animator*, ::PMBCHGNJMKF, ::UnityEngine::Animations::AnimationScriptPlayable))((::PBYTE)hIl2Cpp + NGNMNDGMCGP__CTOR_OFFSET))(this, MHPNGBGGMMN, ICAAMDMMDDJ, AAOCANGHBDG, IMFFCLHHPOD);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGNMNDGMCGP_DISPOSE_OFFSET))(this);
	}

	::System::Int32 DMKOAIOCHLO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGNMNDGMCGP_DMKOAIOCHLO_OFFSET))(this);
	}

	::System::Int32 CCHPKBBMOEB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGNMNDGMCGP_CCHPKBBMOEB_OFFSET))(this);
	}

	::System::ValueTuple_2<::UnityEngine::Playables::Playable, ::System::Int32> IOKHLKHAOJF(::System::Int32 ENJCPELCNKI)
	{
		return ((::System::ValueTuple_2<::UnityEngine::Playables::Playable, ::System::Int32>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NGNMNDGMCGP_IOKHLKHAOJF_OFFSET))(this, ENJCPELCNKI);
	}

	::System::ValueTuple_2<::UnityEngine::Playables::Playable, ::System::Int32> JMBCGNNCDGD(::System::Int32 LOLNDLEGMPO)
	{
		return ((::System::ValueTuple_2<::UnityEngine::Playables::Playable, ::System::Int32>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NGNMNDGMCGP_JMBCGNNCDGD_OFFSET))(this, LOLNDLEGMPO);
	}

	::System::Boolean BKKKLJDAOHP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGNMNDGMCGP_BKKKLJDAOHP_OFFSET))(this);
	}

	::System::Void JGENCIAJAND(::System::Single CCAKMNAGMGD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NGNMNDGMCGP_JGENCIAJAND_OFFSET))(this, CCAKMNAGMGD);
	}

	::System::Void PGHAJOMNDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGNMNDGMCGP_PGHAJOMNDDJ_OFFSET))(this);
	}

	::System::Void NIFFHNKGFGB(::Foundation::NativeVariable_1<::PipelineCamera::Optional_1<::System::Object*>> PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::NativeVariable_1<::PipelineCamera::Optional_1<::System::Object*>>))((::PBYTE)hIl2Cpp + NGNMNDGMCGP_NIFFHNKGFGB_OFFSET))(this, PHHDHIBOCKA);
	}

	::System::Void PLAANJLKADF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGNMNDGMCGP_PLAANJLKADF_OFFSET))(this);
	}

	::System::Void PGHAJOMNDDJ_1(::System::Single CCAKMNAGMGD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NGNMNDGMCGP_PGHAJOMNDDJ_1_OFFSET))(this, CCAKMNAGMGD);
	}
};
