#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/OCNLBFOPMEK.h"
#include "unitysdk/System/Object.h"

class BGDCIMONJIP;
class MCGJPOGNHCB_OCFENFIPBON;
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MCGJPOGNHCB_AAHJJPOAONC_OFFSET UNITYSDK_OFFSET(0x159251A0)
#define MCGJPOGNHCB_AFBCJDKHEGC_OFFSET UNITYSDK_OFFSET(0x15925120)
#define MCGJPOGNHCB_BPCJDEOLMPH_OFFSET UNITYSDK_OFFSET(0x15925350)
#define MCGJPOGNHCB_DHDFKLOAOHH_OFFSET UNITYSDK_OFFSET(0x15925310)
#define MCGJPOGNHCB_GAHNHEPIDMH_OFFSET UNITYSDK_OFFSET(0x15924C20)
#define MCGJPOGNHCB_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x159245A0)
#define MCGJPOGNHCB_MOBNOGOJICK_OFFSET UNITYSDK_OFFSET(0x15924E00)
#define MCGJPOGNHCB_OJFLGGEMEGD_1_OFFSET UNITYSDK_OFFSET(0x15924D00)
#define MCGJPOGNHCB_OJFLGGEMEGD_OFFSET UNITYSDK_OFFSET(0x15924A30)
#define MCGJPOGNHCB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x159247A0)
#define MCGJPOGNHCB_PJKBMEMEKPK_OFFSET UNITYSDK_OFFSET(0x159246C0)
#define MCGJPOGNHCB_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x15924620)
#define MCGJPOGNHCB__CTOR_OFFSET UNITYSDK_OFFSET(0x15924410)

inline static constexpr unsigned int MCGJPOGNHCB_TypeDefinitionIndex = 46836;

class MCGJPOGNHCB : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::OCNLBFOPMEK, ::System::Collections::Generic::List_1<::BGDCIMONJIP*>*>* ELGCEDCOFEN; // 0x10
	::MCGJPOGNHCB_OCFENFIPBON* LBDDOMFAJMK; // 0x18
	::System::Collections::Generic::List_1<::BGDCIMONJIP*>* IEPHIBIJHKJ; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BGDCIMONJIP*>* EBFKLPKAJAA; // 0x28
	::MoleMole::HollowChessboard::HollowChessboardUID BONICGBNDAA; // 0x30

	::System::Void _ctor(::MoleMole::HollowChessboard::HollowChessboardUID BONICGBNDAA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + MCGJPOGNHCB__CTOR_OFFSET))(this, BONICGBNDAA);
	}

	::System::Collections::Generic::IEnumerator_1<::BGDCIMONJIP*>* GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::BGDCIMONJIP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCGJPOGNHCB_GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCGJPOGNHCB_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}

	::BGDCIMONJIP* PJKBMEMEKPK(::System::UInt32 ACHBBPJIBIE)
	{
		return ((::BGDCIMONJIP*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MCGJPOGNHCB_PJKBMEMEKPK_OFFSET))(this, ACHBBPJIBIE);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCGJPOGNHCB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void OJFLGGEMEGD(::BGDCIMONJIP* NLFGBFCCCLJ)
	{
		return ((::System::Void(*)(::PVOID, ::BGDCIMONJIP*))((::PBYTE)hIl2Cpp + MCGJPOGNHCB_OJFLGGEMEGD_OFFSET))(this, NLFGBFCCCLJ);
	}

	::BGDCIMONJIP* GAHNHEPIDMH(::System::UInt32 GDIFMHPOMFB)
	{
		return ((::BGDCIMONJIP*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MCGJPOGNHCB_GAHNHEPIDMH_OFFSET))(this, GDIFMHPOMFB);
	}

	::System::Void OJFLGGEMEGD_1(::System::UInt32 LAPNCNIBEFD)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MCGJPOGNHCB_OJFLGGEMEGD_1_OFFSET))(this, LAPNCNIBEFD);
	}

	::System::Void MOBNOGOJICK(::BGDCIMONJIP* NLFGBFCCCLJ)
	{
		return ((::System::Void(*)(::PVOID, ::BGDCIMONJIP*))((::PBYTE)hIl2Cpp + MCGJPOGNHCB_MOBNOGOJICK_OFFSET))(this, NLFGBFCCCLJ);
	}

	::System::Void AFBCJDKHEGC(::MoleMole::HollowChessboard::HollowChessboardUID BONICGBNDAA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + MCGJPOGNHCB_AFBCJDKHEGC_OFFSET))(this, BONICGBNDAA);
	}

	::System::Collections::Generic::IEnumerable_1<::BGDCIMONJIP*>* AAHJJPOAONC(::OCNLBFOPMEK DMJBFBDLKIN)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::BGDCIMONJIP*>*(*)(::PVOID, ::OCNLBFOPMEK))((::PBYTE)hIl2Cpp + MCGJPOGNHCB_AAHJJPOAONC_OFFSET))(this, DMJBFBDLKIN);
	}

	::System::Collections::Generic::List_1<::BGDCIMONJIP*>* DHDFKLOAOHH()
	{
		return ((::System::Collections::Generic::List_1<::BGDCIMONJIP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCGJPOGNHCB_DHDFKLOAOHH_OFFSET))(this);
	}

	::BGDCIMONJIP* BPCJDEOLMPH(::OCNLBFOPMEK DMJBFBDLKIN)
	{
		return ((::BGDCIMONJIP*(*)(::PVOID, ::OCNLBFOPMEK))((::PBYTE)hIl2Cpp + MCGJPOGNHCB_BPCJDEOLMPH_OFFSET))(this, DMJBFBDLKIN);
	}
};
