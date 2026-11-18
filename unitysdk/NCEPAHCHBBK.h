#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FPHKPALFIOC.h"
#include "unitysdk/GLIEFNMFNFJ.h"
#include "unitysdk/OAIBKEECKEP.h"
#include "unitysdk/PPKMMEMFDGA.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"

namespace System { class String; }

#define NCEPAHCHBBK_CEBNMJKIPEI_OFFSET UNITYSDK_OFFSET(0x1CDE2630)
#define NCEPAHCHBBK_DPBMGKMJGJB_OFFSET UNITYSDK_OFFSET(0x1CDE2730)
#define NCEPAHCHBBK_LJGPPIGEMHD_OFFSET UNITYSDK_OFFSET(0x1CDE2530)
#define NCEPAHCHBBK__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDE1F40)

inline static constexpr unsigned int NCEPAHCHBBK_TypeDefinitionIndex = 29067;

class NCEPAHCHBBK : public ::System::Object
{
public:
	::Il2CppArray<::PPKMMEMFDGA>* FHNPGIBOBGM; // 0x10
	::Il2CppArray<::System::UInt16>* ALKCFBDDJPF; // 0x18
	::Il2CppArray<::FPHKPALFIOC>* EPLLFBOOCCP; // 0x20
	::Il2CppArray<::OAIBKEECKEP>* NGLHFCKCLAF; // 0x28
	::Il2CppArray<::OAIBKEECKEP>* ODKMHCAGCHM; // 0x30
	::Il2CppArray<::OAIBKEECKEP>* FGAKKAJAFIO; // 0x38
	::Il2CppArray<::GLIEFNMFNFJ>* LCMNCPCPCHL; // 0x40
	::System::UInt16 CPJEIAMJFJN; // 0x48
	::System::Byte HFKDDCHODDA; // 0x4A

	::System::Void _ctor(::Il2CppArray<::GLIEFNMFNFJ>* GJJPHHAECDN, ::Il2CppArray<::OAIBKEECKEP>* OCMPFMCLJEP, ::Il2CppArray<::OAIBKEECKEP>* KJPNMGMNKPO, ::Il2CppArray<::OAIBKEECKEP>* FOEEMFCMJOP, ::Il2CppArray<::FPHKPALFIOC>* DEIDMMMJAAJ, ::Il2CppArray<::PPKMMEMFDGA>* GDANPEEAIHL, ::Il2CppArray<::System::UInt16>* PJEIEEAGCJI, ::System::UInt16 IIBJDOEHMOM, ::Il2CppArray<::System::String*>* DMACPCDJMHL, ::Il2CppArray<::System::String*>* IFLMLGPLGCE, ::Il2CppArray<::System::String*>* JNBJAMMHAOL)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::GLIEFNMFNFJ>*, ::Il2CppArray<::OAIBKEECKEP>*, ::Il2CppArray<::OAIBKEECKEP>*, ::Il2CppArray<::OAIBKEECKEP>*, ::Il2CppArray<::FPHKPALFIOC>*, ::Il2CppArray<::PPKMMEMFDGA>*, ::Il2CppArray<::System::UInt16>*, ::System::UInt16, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + NCEPAHCHBBK__CTOR_OFFSET))(this, GJJPHHAECDN, OCMPFMCLJEP, KJPNMGMNKPO, FOEEMFCMJOP, DEIDMMMJAAJ, GDANPEEAIHL, PJEIEEAGCJI, IIBJDOEHMOM, DMACPCDJMHL, IFLMLGPLGCE, JNBJAMMHAOL);
	}

	::System::Int32 LJGPPIGEMHD(::System::UInt16 PKMEBCABKDA, ::System::Int32 GEPABHJBIAH)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt16, ::System::Int32))((::PBYTE)hIl2Cpp + NCEPAHCHBBK_LJGPPIGEMHD_OFFSET))(this, PKMEBCABKDA, GEPABHJBIAH);
	}

	::System::Int32 CEBNMJKIPEI(::System::UInt16 LBMOKHADPMF, ::System::Span_1_9011FAD97750D224<::System::UInt16> PMAMMGFJAJL)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt16, ::System::Span_1_9011FAD97750D224<::System::UInt16>))((::PBYTE)hIl2Cpp + NCEPAHCHBBK_CEBNMJKIPEI_OFFSET))(this, LBMOKHADPMF, PMAMMGFJAJL);
	}

	::System::Int32 DPBMGKMJGJB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCEPAHCHBBK_DPBMGKMJGJB_OFFSET))(this);
	}
};
