#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ELFDOCCOFLJ_2.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/OLAGMJFCDLG.h"

class AGJFDPBLDDF;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ELEIPGBELLG_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x169AD220)
#define ELEIPGBELLG_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x169AD3D0)
#define ELEIPGBELLG_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x169AD450)
#define ELEIPGBELLG_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x169AD0C0)
#define ELEIPGBELLG__CCTOR_OFFSET UNITYSDK_OFFSET(0x169AD270)
#define ELEIPGBELLG__CTOR_OFFSET UNITYSDK_OFFSET(0x169AD2F0)

inline static constexpr unsigned int ELEIPGBELLG_TypeDefinitionIndex = 62449;

class ELEIPGBELLG : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0xA0; // 0x0
	::System::String* DBJEIBKLADM; // 0x48
	::AGJFDPBLDDF* COIDJNCGGLM; // 0x50
	::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* DAKNIFJOCAC; // 0x58
	::MoleMole::EntityHandle JCDLKKPAJAC; // 0x60
	::ELFDOCCOFLJ_2<::System::UInt32, ::System::String*> NOJELKMMIGC; // 0x70
	::System::Byte _padding0[0x8];
	::OLAGMJFCDLG BJCCPHCBNEA; // 0x80
	::System::Int32 HCPAKOOEOAK; // 0x84
	::System::Boolean CJPJJBBNIIP; // 0x88

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELEIPGBELLG__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELEIPGBELLG__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELEIPGBELLG_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELEIPGBELLG_GETCLASSID_OFFSET))(this);
	}

	static ::ELEIPGBELLG* JFDOOELFAOA()
	{
		return ((::ELEIPGBELLG*(*)())((::PBYTE)hIl2Cpp + ELEIPGBELLG_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELEIPGBELLG_MEFBHFEOKGH_OFFSET))(this);
	}
};
