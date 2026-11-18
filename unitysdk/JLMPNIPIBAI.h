#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/System/Object.h"

class AKOMAPFGFLO;
class BGDCIMONJIP;
class DJDJBGMOCFA;
class LIIKMAHEEEJ;
class MCGJPOGNHCB;
class MPMCFMCCMAA;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define JLMPNIPIBAI_AFBCJDKHEGC_OFFSET UNITYSDK_OFFSET(0x13099D20)
#define JLMPNIPIBAI_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1309A050)
#define JLMPNIPIBAI_FJENMOOLGKG_OFFSET UNITYSDK_OFFSET(0x1309A2E0)
#define JLMPNIPIBAI_MOBNOGOJICK_OFFSET UNITYSDK_OFFSET(0x1309A340)
#define JLMPNIPIBAI_OJFLGGEMEGD_1_OFFSET UNITYSDK_OFFSET(0x13099E30)
#define JLMPNIPIBAI_OJFLGGEMEGD_OFFSET UNITYSDK_OFFSET(0x13099DD0)
#define JLMPNIPIBAI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x13099E90)
#define JLMPNIPIBAI__CTOR_OFFSET UNITYSDK_OFFSET(0x13099AE0)

inline static constexpr unsigned int JLMPNIPIBAI_TypeDefinitionIndex = 91286;

class JLMPNIPIBAI : public ::System::Object
{
public:
	::DJDJBGMOCFA* DLPNODMFPEH; // 0x10
	::MPMCFMCCMAA* CLNBAGEMDIE; // 0x18
	::MCGJPOGNHCB* IPELHBONEAM; // 0x20
	::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>* GMCHEANKHGH; // 0x28
	::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>* AINLJDLPMEB; // 0x30
	::LIIKMAHEEEJ* LHAGNOBCNIB; // 0x38
	::AKOMAPFGFLO* AKMOINLLKOG; // 0x40
	::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>* FBILDPOGENK; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* LOHBPIOFCMI; // 0x50
	::System::Boolean OAGJOHGGLNH; // 0x58
	::System::Byte _padding0[0x3];
	::MoleMole::HollowChessboard::HollowChessboardUID BONICGBNDAA; // 0x5C

	::System::Void _ctor(::MoleMole::HollowChessboard::HollowChessboardUID BONICGBNDAA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + JLMPNIPIBAI__CTOR_OFFSET))(this, BONICGBNDAA);
	}

	::System::Void AFBCJDKHEGC(::MoleMole::HollowChessboard::HollowChessboardUID BONICGBNDAA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + JLMPNIPIBAI_AFBCJDKHEGC_OFFSET))(this, BONICGBNDAA);
	}

	::System::Void OJFLGGEMEGD(::BGDCIMONJIP* NLFGBFCCCLJ)
	{
		return ((::System::Void(*)(::PVOID, ::BGDCIMONJIP*))((::PBYTE)hIl2Cpp + JLMPNIPIBAI_OJFLGGEMEGD_OFFSET))(this, NLFGBFCCCLJ);
	}

	::System::Void OJFLGGEMEGD_1(::System::UInt32 LAPNCNIBEFD)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JLMPNIPIBAI_OJFLGGEMEGD_1_OFFSET))(this, LAPNCNIBEFD);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLMPNIPIBAI_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLMPNIPIBAI_BBOMJDBNHIC_OFFSET))(this);
	}

	::BGDCIMONJIP* FJENMOOLGKG(::System::UInt32 LAPNCNIBEFD)
	{
		return ((::BGDCIMONJIP*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JLMPNIPIBAI_FJENMOOLGKG_OFFSET))(this, LAPNCNIBEFD);
	}

	::System::Void MOBNOGOJICK(::BGDCIMONJIP* NLFGBFCCCLJ)
	{
		return ((::System::Void(*)(::PVOID, ::BGDCIMONJIP*))((::PBYTE)hIl2Cpp + JLMPNIPIBAI_MOBNOGOJICK_OFFSET))(this, NLFGBFCCCLJ);
	}
};
