#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GALJDMKFJBM.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::ChessStateMachine { class ParamsClass; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LJLBLOOMDOK_BAFIFGDIMGB_OFFSET UNITYSDK_OFFSET(0x1256FE00)
#define LJLBLOOMDOK_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0x1256FCF0)
#define LJLBLOOMDOK_KCKGBLAAMAD_OFFSET UNITYSDK_OFFSET(0x1256FF00)
#define LJLBLOOMDOK_MBHJJNFNGPE_1_OFFSET UNITYSDK_OFFSET(0x12570360)
#define LJLBLOOMDOK_MBHJJNFNGPE_2_OFFSET UNITYSDK_OFFSET(0x12570560)
#define LJLBLOOMDOK_MBHJJNFNGPE_OFFSET UNITYSDK_OFFSET(0x12570150)
#define LJLBLOOMDOK_NGFKBKCFPLK_OFFSET UNITYSDK_OFFSET(0x12570340)
#define LJLBLOOMDOK_PKDEMLMDPFN_OFFSET UNITYSDK_OFFSET(0x12570090)
#define LJLBLOOMDOK__CTOR_OFFSET UNITYSDK_OFFSET(0x1256F7C0)

inline static constexpr unsigned int LJLBLOOMDOK_TypeDefinitionIndex = 76540;

class LJLBLOOMDOK : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::GALJDMKFJBM>* DHCAJCIFIMB; // 0x10

	::System::Void _ctor(::System::Collections::Generic::List_1<::MoleMole::ChessStateMachine::ParamsClass*>* OGGFMCOGACI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::ChessStateMachine::ParamsClass*>*))((::PBYTE)hIl2Cpp + LJLBLOOMDOK__CTOR_OFFSET))(this, OGGFMCOGACI);
	}

	::System::Boolean FFCPIEDHBDP(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LJLBLOOMDOK_FFCPIEDHBDP_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void BAFIFGDIMGB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJLBLOOMDOK_BAFIFGDIMGB_OFFSET))(this);
	}

	::GALJDMKFJBM KCKGBLAAMAD(::System::Int32 HHEMCBCOOJK)
	{
		return ((::GALJDMKFJBM(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LJLBLOOMDOK_KCKGBLAAMAD_OFFSET))(this, HHEMCBCOOJK);
	}

	::System::Void PKDEMLMDPFN(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LJLBLOOMDOK_PKDEMLMDPFN_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void MBHJJNFNGPE(::System::Boolean EGEGIMGMJHN, ::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + LJLBLOOMDOK_MBHJJNFNGPE_OFFSET))(this, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 NGFKBKCFPLK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJLBLOOMDOK_NGFKBKCFPLK_OFFSET))(this);
	}

	::System::Void MBHJJNFNGPE_1(::System::Single EGEGIMGMJHN, ::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + LJLBLOOMDOK_MBHJJNFNGPE_1_OFFSET))(this, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Void MBHJJNFNGPE_2(::System::Int32 EGEGIMGMJHN, ::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LJLBLOOMDOK_MBHJJNFNGPE_2_OFFSET))(this, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
