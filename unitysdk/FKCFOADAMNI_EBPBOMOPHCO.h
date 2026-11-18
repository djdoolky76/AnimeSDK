#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BHBOJCCMJBE;
class FKCFOADAMNI_CEEGMAKEHPM;
class NPKLIFIBCAM;
class PFBJOMPAJCF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FKCFOADAMNI_EBPBOMOPHCO_BICFLGHHOIB_OFFSET UNITYSDK_OFFSET(0x13225360)
#define FKCFOADAMNI_EBPBOMOPHCO_DKGOEFDIAOE_OFFSET UNITYSDK_OFFSET(0x13224880)
#define FKCFOADAMNI_EBPBOMOPHCO_LCAEAMGIEJJ_OFFSET UNITYSDK_OFFSET(0x13223DC0)
#define FKCFOADAMNI_EBPBOMOPHCO_LFDJOPAEOEL_OFFSET UNITYSDK_OFFSET(0x13225080)
#define FKCFOADAMNI_EBPBOMOPHCO_NCNMEGKGAIF_OFFSET UNITYSDK_OFFSET(0x13223D30)
#define FKCFOADAMNI_EBPBOMOPHCO__CTOR_OFFSET UNITYSDK_OFFSET(0x13223B40)

inline static constexpr unsigned int FKCFOADAMNI_EBPBOMOPHCO_TypeDefinitionIndex = 76364;

class FKCFOADAMNI_EBPBOMOPHCO : public ::System::Object
{
public:
	// static const ::System::Int32 ONOEFGHHNJE = 0x1; // 0x0
	::System::Collections::Generic::List_1<::BHBOJCCMJBE*>* DBNLNIPKPNH; // 0x10
	::PFBJOMPAJCF* GOAIMKJJAPC; // 0x18
	::FKCFOADAMNI_CEEGMAKEHPM* KKAHEGHCINM; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* INENGCGBFMF; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* LNDGKECICBD; // 0x30
	::System::UInt32 CMHDGLMOCAO; // 0x38

	::System::Void _ctor(::System::UInt32 LEHABHCOMGH)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FKCFOADAMNI_EBPBOMOPHCO__CTOR_OFFSET))(this, LEHABHCOMGH);
	}

	static ::System::Boolean NCNMEGKGAIF(::NPKLIFIBCAM* OFJHELKHOHP, ::System::Int32 DABJIHHDFNO)
	{
		return ((::System::Boolean(*)(::NPKLIFIBCAM*, ::System::Int32))((::PBYTE)hIl2Cpp + FKCFOADAMNI_EBPBOMOPHCO_NCNMEGKGAIF_OFFSET))(OFJHELKHOHP, DABJIHHDFNO);
	}

	::System::Void LCAEAMGIEJJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKCFOADAMNI_EBPBOMOPHCO_LCAEAMGIEJJ_OFFSET))(this);
	}

	::System::Boolean DKGOEFDIAOE(::System::Int32 FLJCLMOGPAF, ::System::Int32 NEIDPJCJOAL)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FKCFOADAMNI_EBPBOMOPHCO_DKGOEFDIAOE_OFFSET))(this, FLJCLMOGPAF, NEIDPJCJOAL);
	}

	::System::Int32 LFDJOPAEOEL(::BHBOJCCMJBE* EJCBEJMGFAJ, ::BHBOJCCMJBE* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::BHBOJCCMJBE*, ::BHBOJCCMJBE*))((::PBYTE)hIl2Cpp + FKCFOADAMNI_EBPBOMOPHCO_LFDJOPAEOEL_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}

	::System::Void BICFLGHHOIB(::System::Action* NGFDBMGHFCJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FKCFOADAMNI_EBPBOMOPHCO_BICFLGHHOIB_OFFSET))(this, NGFDBMGHFCJ);
	}
};
