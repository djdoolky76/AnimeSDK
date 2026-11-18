#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class FBAMLABJMKF;
class HCOICJANAGG;
class LJELFDJAHOD;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NIPAOIEMLOI_BAOJMBBOANK_OFFSET UNITYSDK_OFFSET(0x16B823D0)
#define NIPAOIEMLOI_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x16B80D20)
#define NIPAOIEMLOI_DFJPMOOOLHM_OFFSET UNITYSDK_OFFSET(0x16B80D70)
#define NIPAOIEMLOI_GIJICNHPALJ_OFFSET UNITYSDK_OFFSET(0x16B80E30)
#define NIPAOIEMLOI_HJNGIHDPGEM_OFFSET UNITYSDK_OFFSET(0x16B822F0)
#define NIPAOIEMLOI_JNENFEELMBP_OFFSET UNITYSDK_OFFSET(0x16B80D10)
#define NIPAOIEMLOI_JODFHALGIDL_OFFSET UNITYSDK_OFFSET(0x16B815C0)
#define NIPAOIEMLOI_NKCDNLDIJCI_OFFSET UNITYSDK_OFFSET(0x16B81600)
#define NIPAOIEMLOI__CTOR_OFFSET UNITYSDK_OFFSET(0x16B80AD0)

inline static constexpr unsigned int NIPAOIEMLOI_TypeDefinitionIndex = 59233;

class NIPAOIEMLOI : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* OMBHHNACJHB; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* BPPPEEKEEJL; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* MCBKODFOOHC; // 0x20
	::FBAMLABJMKF* GFFCBBDKCGC; // 0x28
	::LJELFDJAHOD* NFCFCMIOOKJ; // 0x30
	::System::Single HACJFKBLODH; // 0x38
	::System::Boolean CGFLLPOCDJM; // 0x3C

	::System::Void _ctor(::FBAMLABJMKF* COBEJJHGMPO, ::LJELFDJAHOD* NFCFCMIOOKJ)
	{
		return ((::System::Void(*)(::PVOID, ::FBAMLABJMKF*, ::LJELFDJAHOD*))((::PBYTE)hIl2Cpp + NIPAOIEMLOI__CTOR_OFFSET))(this, COBEJJHGMPO, NFCFCMIOOKJ);
	}

	::System::Boolean JNENFEELMBP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NIPAOIEMLOI_JNENFEELMBP_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::HCOICJANAGG* BKMKBJJFGOD)
	{
		return ((::System::Void(*)(::PVOID, ::HCOICJANAGG*))((::PBYTE)hIl2Cpp + NIPAOIEMLOI_BBOMJDBNHIC_OFFSET))(this, BKMKBJJFGOD);
	}

	::System::Void DFJPMOOOLHM(::System::Single PMNLNNGEIFM, ::System::Single BEKLCLFIDKF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NIPAOIEMLOI_DFJPMOOOLHM_OFFSET))(this, PMNLNNGEIFM, BEKLCLFIDKF);
	}

	::System::Void JODFHALGIDL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIPAOIEMLOI_JODFHALGIDL_OFFSET))(this);
	}

	::System::Tuple_2<::System::Int32, ::System::String*>* NKCDNLDIJCI(::MoleMole::HollowChessboard::HollowCell ABHBKFJKINO)
	{
		return ((::System::Tuple_2<::System::Int32, ::System::String*>*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + NIPAOIEMLOI_NKCDNLDIJCI_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* HJNGIHDPGEM(::MoleMole::HollowChessboard::HollowCell ABHBKFJKINO)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + NIPAOIEMLOI_HJNGIHDPGEM_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Collections::Generic::List_1<::System::Int32>* BAOJMBBOANK()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIPAOIEMLOI_BAOJMBBOANK_OFFSET))(this);
	}

	::System::Void GIJICNHPALJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIPAOIEMLOI_GIJICNHPALJ_OFFSET))(this);
	}
};
