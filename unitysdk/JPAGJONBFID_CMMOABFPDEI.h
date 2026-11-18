#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/ComponentMask.h"
#include "unitysdk/System/ValueType.h"

class LHLDPHDJLNL;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace Nap::NapECS { class EcsComponent; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JPAGJONBFID_CMMOABFPDEI_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x14FC7FF0)
#define JPAGJONBFID_CMMOABFPDEI_JLIMOLHLFAK_OFFSET UNITYSDK_OFFSET(0x74D980)
#define JPAGJONBFID_CMMOABFPDEI_MBNKFJKIJFE_OFFSET UNITYSDK_OFFSET(0x74D970)
#define JPAGJONBFID_CMMOABFPDEI__CTOR_OFFSET UNITYSDK_OFFSET(0x74D7F0)

inline static constexpr unsigned int JPAGJONBFID_CMMOABFPDEI_TypeDefinitionIndex = 69777;

struct alignas(8) JPAGJONBFID_CMMOABFPDEI
{
	::LHLDPHDJLNL* HMPEEAAAGHE; // 0x10
	::MoleMole::HollowChessboard::HollowEntity* HPDIJCKCDLM; // 0x18
	::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* HNGKPMFBGCI; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* EJBIKBALPMP; // 0x28
	::Nap::NapECS::ComponentMask NGMGLGNCGIF; // 0x30
	::Nap::NapECS::ComponentMask JLODIEFKBAB; // 0x70
	::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* CJPHPNDFEIB; // 0xB0
	::System::Boolean FHLEGNBBFHF; // 0xB8

	::System::Void _ctor(::LHLDPHDJLNL* GEEHGDABNJF, ::MoleMole::HollowChessboard::HollowEntity* NCKMIGOHAGG)
	{
		return ((::System::Void(*)(::PVOID, ::LHLDPHDJLNL*, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + JPAGJONBFID_CMMOABFPDEI__CTOR_OFFSET))(this, GEEHGDABNJF, NCKMIGOHAGG);
	}

	::System::Void MBNKFJKIJFE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPAGJONBFID_CMMOABFPDEI_MBNKFJKIJFE_OFFSET))(this);
	}

	/*
	static ::JPAGJONBFID_CMMOABFPDEI COKNIICCODC(::LHLDPHDJLNL* GEEHGDABNJF, ::MoleMole::HollowChessboard::HollowEntity* NCKMIGOHAGG)
	{
		return ((::JPAGJONBFID_CMMOABFPDEI(*)(::LHLDPHDJLNL*, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + JPAGJONBFID_CMMOABFPDEI_COKNIICCODC_OFFSET))(GEEHGDABNJF, NCKMIGOHAGG);
	}
	*/

	::MoleMole::HollowChessboard::HollowEntity* JLIMOLHLFAK()
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPAGJONBFID_CMMOABFPDEI_JLIMOLHLFAK_OFFSET))(this);
	}
};
