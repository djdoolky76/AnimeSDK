#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LLCABFILHMP;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MNCMPIPEJLG_PIJEIPPHDGG_NKMGDLNGIIH_DJMLKAGLFEG_OFFSET UNITYSDK_OFFSET(0x177D12F0)
#define MNCMPIPEJLG_PIJEIPPHDGG_NKMGDLNGIIH_GBLDNPOHMNL_OFFSET UNITYSDK_OFFSET(0x177D1390)
#define MNCMPIPEJLG_PIJEIPPHDGG_NKMGDLNGIIH_MJDCGFMDPBC_OFFSET UNITYSDK_OFFSET(0x177D16F0)
#define MNCMPIPEJLG_PIJEIPPHDGG_NKMGDLNGIIH_PIGONCMONKB_OFFSET UNITYSDK_OFFSET(0x177D1810)
#define MNCMPIPEJLG_PIJEIPPHDGG_NKMGDLNGIIH__CTOR_OFFSET UNITYSDK_OFFSET(0x177D03E0)

inline static constexpr unsigned int MNCMPIPEJLG_PIJEIPPHDGG_NKMGDLNGIIH_TypeDefinitionIndex = 46693;

class MNCMPIPEJLG_PIJEIPPHDGG_NKMGDLNGIIH : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::LLCABFILHMP*>*>* JAGMDMANPMK; // 0x10
	::System::Collections::Generic::List_1<::LLCABFILHMP*>* KNNEJKMGGJB; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHNMBGCMCJJ; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNCMPIPEJLG_PIJEIPPHDGG_NKMGDLNGIIH__CTOR_OFFSET))(this);
	}

	::LLCABFILHMP* GBLDNPOHMNL(::System::Int32 FPBJKINKGDG)
	{
		return ((::LLCABFILHMP*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MNCMPIPEJLG_PIJEIPPHDGG_NKMGDLNGIIH_GBLDNPOHMNL_OFFSET))(this, FPBJKINKGDG);
	}

	::LLCABFILHMP* MJDCGFMDPBC()
	{
		return ((::LLCABFILHMP*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNCMPIPEJLG_PIJEIPPHDGG_NKMGDLNGIIH_MJDCGFMDPBC_OFFSET))(this);
	}

	::System::Boolean DJMLKAGLFEG(::LLCABFILHMP* DFMKILICPFB)
	{
		return ((::System::Boolean(*)(::PVOID, ::LLCABFILHMP*))((::PBYTE)hIl2Cpp + MNCMPIPEJLG_PIJEIPPHDGG_NKMGDLNGIIH_DJMLKAGLFEG_OFFSET))(this, DFMKILICPFB);
	}

	::LLCABFILHMP* PIGONCMONKB(::System::Func_2<::LLCABFILHMP*, ::System::Boolean>* KANJODNFFOI)
	{
		return ((::LLCABFILHMP*(*)(::PVOID, ::System::Func_2<::LLCABFILHMP*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + MNCMPIPEJLG_PIJEIPPHDGG_NKMGDLNGIIH_PIGONCMONKB_OFFSET))(this, KANJODNFFOI);
	}
};
