#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IGMBMDFFFMK.h"
#include "unitysdk/JHKOPDIHKJK.h"
#include "unitysdk/JIOOBDIABFN.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class FBAMLABJMKF;
class LJELFDJAHOD;
class MPCPHMBAIPB;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AGCOMLLFNJH_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x17CBE3F0)
#define AGCOMLLFNJH_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x17CBE790)
#define AGCOMLLFNJH_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x17CBE700)
#define AGCOMLLFNJH_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x17CBE4C0)
#define AGCOMLLFNJH__CCTOR_OFFSET UNITYSDK_OFFSET(0x17CBE440)
#define AGCOMLLFNJH__CTOR_OFFSET UNITYSDK_OFFSET(0x17CBE5B0)

inline static constexpr unsigned int AGCOMLLFNJH_TypeDefinitionIndex = 48057;

class AGCOMLLFNJH : public ::JHKOPDIHKJK
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x220; // 0x0
	::MPCPHMBAIPB* CPBIDKBOOJK; // 0x50
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* MCBKODFOOHC; // 0x58
	::System::Collections::Generic::List_1<::JIOOBDIABFN>* HENOIMEANMN; // 0x60
	::FBAMLABJMKF* COBEJJHGMPO; // 0x68
	::LJELFDJAHOD* NFCFCMIOOKJ; // 0x70
	::System::Collections::Generic::List_1<::System::Int32>* OMBHHNACJHB; // 0x78
	::IGMBMDFFFMK OPPOJJPJGPF; // 0x80
	::System::Single HACJFKBLODH; // 0x84
	::System::Boolean CGFLLPOCDJM; // 0x88

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGCOMLLFNJH__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGCOMLLFNJH__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGCOMLLFNJH_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGCOMLLFNJH_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGCOMLLFNJH_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::AGCOMLLFNJH* JFDOOELFAOA()
	{
		return ((::AGCOMLLFNJH*(*)())((::PBYTE)hIl2Cpp + AGCOMLLFNJH_JFDOOELFAOA_OFFSET))();
	}
};
