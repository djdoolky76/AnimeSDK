#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KLMCENJOGPN.h"
#include "unitysdk/PINIBJHANOF_HBPCJOIMDLG.h"

class POFOFGILKAA;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PINIBJHANOF_FNACHECOODF_OFFSET UNITYSDK_OFFSET(0x119813B0)
#define PINIBJHANOF_KNAMLBOMBMK_OFFSET UNITYSDK_OFFSET(0x11981B40)
#define PINIBJHANOF_NNJOBAIENDJ_OFFSET UNITYSDK_OFFSET(0x119816B0)
#define PINIBJHANOF__CTOR_OFFSET UNITYSDK_OFFSET(0x11981AE0)

inline static constexpr unsigned int PINIBJHANOF_TypeDefinitionIndex = 62689;

class PINIBJHANOF : public ::KLMCENJOGPN
{
public:
	::PINIBJHANOF_HBPCJOIMDLG KDLGNJGFNGA; // 0x2F8
	::System::Collections::Generic::LinkedList_1<::System::Object*>* IHHGMPMBMEH; // 0x310

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PINIBJHANOF__CTOR_OFFSET))(this);
	}

	::System::Void FNACHECOODF(::POFOFGILKAA* HEJIBNEHLIG)
	{
		return ((::System::Void(*)(::PVOID, ::POFOFGILKAA*))((::PBYTE)hIl2Cpp + PINIBJHANOF_FNACHECOODF_OFFSET))(this, HEJIBNEHLIG);
	}

	::System::Void KNAMLBOMBMK(::POFOFGILKAA* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::POFOFGILKAA*))((::PBYTE)hIl2Cpp + PINIBJHANOF_KNAMLBOMBMK_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void NNJOBAIENDJ(::System::Collections::Generic::List_1<::System::Int32>* MGNPPPJOJDK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + PINIBJHANOF_NNJOBAIENDJ_OFFSET))(this, MGNPPPJOJDK);
	}
};
