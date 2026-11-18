#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MCOBOLKBHHL.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/LNGMFNIGLOD.h"

class KGBFLHNJHHN;
class NECHLIPELDB;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DHGPPFDALPA_ABBDNOMOFMP_OFFSET UNITYSDK_OFFSET(0x16619400)
#define DHGPPFDALPA_AGLKOABGGDJ_OFFSET UNITYSDK_OFFSET(0x166196F0)
#define DHGPPFDALPA_DKNEFMDCANB_OFFSET UNITYSDK_OFFSET(0x166197F0)
#define DHGPPFDALPA_GMIALDHGEGN_OFFSET UNITYSDK_OFFSET(0x166196D0)
#define DHGPPFDALPA_IHOKLLDHGKB_OFFSET UNITYSDK_OFFSET(0x16619830)
#define DHGPPFDALPA_KIPLNHIOHKP_OFFSET UNITYSDK_OFFSET(0x16619810)
#define DHGPPFDALPA__CTOR_OFFSET UNITYSDK_OFFSET(0x166191D0)

inline static constexpr unsigned int DHGPPFDALPA_TypeDefinitionIndex = 14879;

class DHGPPFDALPA : public ::MCOBOLKBHHL
{
public:
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::Boolean>>* KPKCMPAIGID; // 0xE0
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::Boolean>>* BIKBMMKGIKA; // 0xE8
	::UnityEngine::Vector2 CMHCNLIIIHK; // 0xF0

	::System::Void _ctor(::LNGMFNIGLOD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LNGMFNIGLOD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DHGPPFDALPA__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* GMIALDHGEGN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGPPFDALPA_GMIALDHGEGN_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* DKNEFMDCANB()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGPPFDALPA_DKNEFMDCANB_OFFSET))(this);
	}

	::NECHLIPELDB* AGLKOABGGDJ()
	{
		return ((::NECHLIPELDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGPPFDALPA_AGLKOABGGDJ_OFFSET))(this);
	}

	::System::Int32 KIPLNHIOHKP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGPPFDALPA_KIPLNHIOHKP_OFFSET))(this);
	}

	::System::Void ABBDNOMOFMP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGPPFDALPA_ABBDNOMOFMP_OFFSET))(this);
	}

	::System::Int32 IHOKLLDHGKB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGPPFDALPA_IHOKLLDHGKB_OFFSET))(this);
	}
};
