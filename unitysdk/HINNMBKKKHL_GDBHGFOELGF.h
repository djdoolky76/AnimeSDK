#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class LHLDPHDJLNL;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace Nap::NapECS { class EcsComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HINNMBKKKHL_GDBHGFOELGF_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x17A4F230)
#define HINNMBKKKHL_GDBHGFOELGF_PKOGNPKCHHE_OFFSET UNITYSDK_OFFSET(0x7B0F80)

inline static constexpr unsigned int HINNMBKKKHL_GDBHGFOELGF_TypeDefinitionIndex = 50090;

struct alignas(8) HINNMBKKKHL_GDBHGFOELGF
{
	::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* IIAAMALOPFN; // 0x10
	::LHLDPHDJLNL* HMPEEAAAGHE; // 0x18

	/*
	static ::HINNMBKKKHL_GDBHGFOELGF COKNIICCODC(::LHLDPHDJLNL* GEEHGDABNJF)
	{
		return ((::HINNMBKKKHL_GDBHGFOELGF(*)(::LHLDPHDJLNL*))((::PBYTE)hIl2Cpp + HINNMBKKKHL_GDBHGFOELGF_COKNIICCODC_OFFSET))(GEEHGDABNJF);
	}
	*/

	::MoleMole::HollowChessboard::HollowEntity* PKOGNPKCHHE()
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + HINNMBKKKHL_GDBHGFOELGF_PKOGNPKCHHE_OFFSET))(this);
	}
};
