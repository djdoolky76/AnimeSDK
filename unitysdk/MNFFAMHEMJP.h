#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JMLLJAOFDGD.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MNFFAMHEMJP_BIKHPDLBMFA_OFFSET UNITYSDK_OFFSET(0x14072F50)
#define MNFFAMHEMJP_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x14072A70)
#define MNFFAMHEMJP_EJHKKKPFCKE_OFFSET UNITYSDK_OFFSET(0x14072AF0)
#define MNFFAMHEMJP_KFHPPBIFOMG_OFFSET UNITYSDK_OFFSET(0x14072A80)
#define MNFFAMHEMJP_PAGPCOMNDMM_OFFSET UNITYSDK_OFFSET(0x14072F60)
#define MNFFAMHEMJP__CTOR_OFFSET UNITYSDK_OFFSET(0x14072A90)

inline static constexpr unsigned int MNFFAMHEMJP_TypeDefinitionIndex = 63996;

class MNFFAMHEMJP : public ::JMLLJAOFDGD
{
public:
	::System::String* _BLBIAMKGHJL_k__BackingField; // 0x30
	::Il2CppArray<::System::UInt64>* MGAKIPKPAGJ; // 0x38
	::System::Action_2<::System::Int32, ::System::String*>* EJGDHCIBCJH; // 0x40
	::System::String* PCIDFGGIOPL; // 0x48

	::System::Void _ctor(::System::Action_2<::System::Int32, ::System::String*>* EJGDHCIBCJH, ::System::String* PCIDFGGIOPL, ::Il2CppArray<::System::UInt64>* MGAKIPKPAGJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::System::String*>*, ::System::String*, ::Il2CppArray<::System::UInt64>*))((::PBYTE)hIl2Cpp + MNFFAMHEMJP__CTOR_OFFSET))(this, EJGDHCIBCJH, PCIDFGGIOPL, MGAKIPKPAGJ);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNFFAMHEMJP_DECMGICKDLH_OFFSET))(this);
	}

	::System::Void KFHPPBIFOMG(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MNFFAMHEMJP_KFHPPBIFOMG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EJHKKKPFCKE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNFFAMHEMJP_EJHKKKPFCKE_OFFSET))(this);
	}

	::System::Void BIKHPDLBMFA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNFFAMHEMJP_BIKHPDLBMFA_OFFSET))(this);
	}

	::System::Void PAGPCOMNDMM(::System::String* DKPGLAFDLBC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MNFFAMHEMJP_PAGPCOMNDMM_OFFSET))(this, DKPGLAFDLBC);
	}
};
