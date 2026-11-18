#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GOFMDECMBNG.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/JGLIFHIAIEH.h"

class OCLLKJMICKK;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OOGNMINPBOI_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x1E8C5B10)
#define OOGNMINPBOI_FANDEJILKOK_OFFSET UNITYSDK_OFFSET(0x1E8C5AA0)
#define OOGNMINPBOI_LHJOLFDBBKN_OFFSET UNITYSDK_OFFSET(0x1E8C59B0)
#define OOGNMINPBOI_MBPDCHKOLBN_OFFSET UNITYSDK_OFFSET(0x1E8C5A20)
#define OOGNMINPBOI_PHINIDKLKGJ_OFFSET UNITYSDK_OFFSET(0x1E8C56B0)
#define OOGNMINPBOI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8C5290)
#define OOGNMINPBOI__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8C55F0)

inline static constexpr unsigned int OOGNMINPBOI_TypeDefinitionIndex = 94682;

class OOGNMINPBOI : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::OCLLKJMICKK*>* MHEADJKBEMO; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* LNJIHGFPNIJ; // 0x18
	::GOFMDECMBNG FEGHNKCEAEJ; // 0x20
	::System::Int32 HIEDBIOHBDH; // 0x30
	::System::Int32 DMPIBMEECEJ; // 0x34
	::System::Int32 JMMIJDDJOMM; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOGNMINPBOI__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOGNMINPBOI_TOSTRING_OFFSET))(this);
	}

	::System::Void PHINIDKLKGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOGNMINPBOI_PHINIDKLKGJ_OFFSET))(this);
	}

	::JGLIFHIAIEH LHJOLFDBBKN()
	{
		return ((::JGLIFHIAIEH(*)(::PVOID))((::PBYTE)hIl2Cpp + OOGNMINPBOI_LHJOLFDBBKN_OFFSET))(this);
	}

	::JGLIFHIAIEH MBPDCHKOLBN()
	{
		return ((::JGLIFHIAIEH(*)(::PVOID))((::PBYTE)hIl2Cpp + OOGNMINPBOI_MBPDCHKOLBN_OFFSET))(this);
	}

	::GOFMDECMBNG FANDEJILKOK()
	{
		return ((::GOFMDECMBNG(*)(::PVOID))((::PBYTE)hIl2Cpp + OOGNMINPBOI_FANDEJILKOK_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOGNMINPBOI_DPIHOJBBGLA_OFFSET))(this);
	}
};
