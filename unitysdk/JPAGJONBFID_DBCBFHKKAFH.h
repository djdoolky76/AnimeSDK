#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/ComponentMask.h"
#include "unitysdk/System/ValueType.h"

class LHLDPHDJLNL;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace Nap::NapECS { class EcsComponent; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JPAGJONBFID_DBCBFHKKAFH_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x1296D0D0)
#define JPAGJONBFID_DBCBFHKKAFH_PKOGNPKCHHE_OFFSET UNITYSDK_OFFSET(0x6EB9F0)
#define JPAGJONBFID_DBCBFHKKAFH__CTOR_OFFSET UNITYSDK_OFFSET(0x6EB9E0)

inline static constexpr unsigned int JPAGJONBFID_DBCBFHKKAFH_TypeDefinitionIndex = 69780;

struct alignas(8) JPAGJONBFID_DBCBFHKKAFH
{
	::LHLDPHDJLNL* HMPEEAAAGHE; // 0x10
	::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* HNGKPMFBGCI; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* EJBIKBALPMP; // 0x20
	::Nap::NapECS::ComponentMask KDOKMHKLHJG; // 0x28
	::System::Boolean FHLEGNBBFHF; // 0x68

	::System::Void _ctor(::LHLDPHDJLNL* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::LHLDPHDJLNL*))((::PBYTE)hIl2Cpp + JPAGJONBFID_DBCBFHKKAFH__CTOR_OFFSET))(this, GEEHGDABNJF);
	}

	/*
	static ::JPAGJONBFID_DBCBFHKKAFH COKNIICCODC(::LHLDPHDJLNL* GEEHGDABNJF)
	{
		return ((::JPAGJONBFID_DBCBFHKKAFH(*)(::LHLDPHDJLNL*))((::PBYTE)hIl2Cpp + JPAGJONBFID_DBCBFHKKAFH_COKNIICCODC_OFFSET))(GEEHGDABNJF);
	}
	*/

	::MoleMole::HollowChessboard::HollowEntity* PKOGNPKCHHE()
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPAGJONBFID_DBCBFHKKAFH_PKOGNPKCHHE_OFFSET))(this);
	}
};
