#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

class AGHDHOIPHFI;
class FOLOGHLENFB;
namespace Share { class CRandom; }
namespace Share { template <typename T> class CWeightList_1; }

#define KGNGEFKDDOJ_BECOBPABOPI_OFFSET UNITYSDK_OFFSET(0x18BDB1F0)
#define KGNGEFKDDOJ_EBCPDBPFFLC_OFFSET UNITYSDK_OFFSET(0x18BDB200)
#define KGNGEFKDDOJ_HAEOLNDCDIF_OFFSET UNITYSDK_OFFSET(0x18BDB1E0)
#define KGNGEFKDDOJ_MPNBFJLHEIH_1_OFFSET UNITYSDK_OFFSET(0x18BDB060)
#define KGNGEFKDDOJ_MPNBFJLHEIH_OFFSET UNITYSDK_OFFSET(0x18BDB000)
#define KGNGEFKDDOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x18BB8AA0)

inline static constexpr unsigned int KGNGEFKDDOJ_TypeDefinitionIndex = 14953;

class KGNGEFKDDOJ : public ::System::Object
{
public:
	::Share::CWeightList_1<::AGHDHOIPHFI*>* _FPNNBFOGPOM_k__BackingField; // 0x10
	::System::Int32 _HHNNKGPFJNO_k__BackingField; // 0x18
	::System::Int32 _MBBGDIGENCK_k__BackingField; // 0x1C

	::System::Void _ctor(::System::Int32 NDFDFHOJHJN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KGNGEFKDDOJ__CTOR_OFFSET))(this, NDFDFHOJHJN);
	}

	::System::Boolean MPNBFJLHEIH(::System::Collections::Generic::KeyValuePair_2<::FOLOGHLENFB*, ::System::Int32>& PCMPJFCCNAG, ::Share::CRandom* LCEJHCFADCH)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::FOLOGHLENFB*, ::System::Int32>&, ::Share::CRandom*))((::PBYTE)hIl2Cpp + KGNGEFKDDOJ_MPNBFJLHEIH_OFFSET))(this, PCMPJFCCNAG, LCEJHCFADCH);
	}

	::System::Void HAEOLNDCDIF(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KGNGEFKDDOJ_HAEOLNDCDIF_OFFSET))(this, EGEGIMGMJHN);
	}

	::Share::CWeightList_1<::AGHDHOIPHFI*>* BECOBPABOPI()
	{
		return ((::Share::CWeightList_1<::AGHDHOIPHFI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGNGEFKDDOJ_BECOBPABOPI_OFFSET))(this);
	}

	::System::Boolean MPNBFJLHEIH_1(::FOLOGHLENFB*& PGAIMHBCPDF, ::System::Int32& MNIAIGNGJOJ, ::Share::CRandom* LCEJHCFADCH)
	{
		return ((::System::Boolean(*)(::PVOID, ::FOLOGHLENFB*&, ::System::Int32&, ::Share::CRandom*))((::PBYTE)hIl2Cpp + KGNGEFKDDOJ_MPNBFJLHEIH_1_OFFSET))(this, PGAIMHBCPDF, MNIAIGNGJOJ, LCEJHCFADCH);
	}

	::System::Int32 EBCPDBPFFLC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGNGEFKDDOJ_EBCPDBPFFLC_OFFSET))(this);
	}
};
