#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DNAELLALHIM.h"
#include "unitysdk/FEBFPNHGPPC.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"

class CCMHKDLMAAN;
class HFOPDHLEBHJ;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MJNPIALKGOP_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x131935F0)
#define MJNPIALKGOP_HOOILDPHOEJ_OFFSET UNITYSDK_OFFSET(0x131931D0)
#define MJNPIALKGOP_LJDHHNOIFKE_OFFSET UNITYSDK_OFFSET(0x13193740)
#define MJNPIALKGOP__CTOR_OFFSET UNITYSDK_OFFSET(0x13193560)

inline static constexpr unsigned int MJNPIALKGOP_TypeDefinitionIndex = 61954;

class MJNPIALKGOP : public ::DNAELLALHIM
{
public:
	::FEBFPNHGPPC GJOCGANNFDP; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJNPIALKGOP__CTOR_OFFSET))(this);
	}

	::System::Single HOOILDPHOEJ(::HFOPDHLEBHJ* DEKJDEPKKLH, ::MoleMole::Config::BaseProperty OFKIIOMFAHO)
	{
		return ((::System::Single(*)(::PVOID, ::HFOPDHLEBHJ*, ::MoleMole::Config::BaseProperty))((::PBYTE)hIl2Cpp + MJNPIALKGOP_HOOILDPHOEJ_OFFSET))(this, DEKJDEPKKLH, OFKIIOMFAHO);
	}

	::System::Void EDEFLFIKNFK(::System::UInt32 PKMFBJMJCOO, ::System::UInt32 IMGBAKKLEMJ, ::System::Int32 MOBNMDEDJIP, ::System::Int32 MPKKKJFNLIJ, ::HFOPDHLEBHJ* KDLJNJHOOOA, ::CCMHKDLMAAN* IDJOMIMIOGM, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* OJBJBOJKFJO)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Int32, ::System::Int32, ::HFOPDHLEBHJ*, ::CCMHKDLMAAN*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*))((::PBYTE)hIl2Cpp + MJNPIALKGOP_EDEFLFIKNFK_OFFSET))(this, PKMFBJMJCOO, IMGBAKKLEMJ, MOBNMDEDJIP, MPKKKJFNLIJ, KDLJNJHOOOA, IDJOMIMIOGM, OJBJBOJKFJO);
	}

	::System::Single LJDHHNOIFKE(::HFOPDHLEBHJ* MIALFKCCCPI, ::MoleMole::Config::BaseProperty KMGKAIDEIBA)
	{
		return ((::System::Single(*)(::PVOID, ::HFOPDHLEBHJ*, ::MoleMole::Config::BaseProperty))((::PBYTE)hIl2Cpp + MJNPIALKGOP_LJDHHNOIFKE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
