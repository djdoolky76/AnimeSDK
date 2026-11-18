#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CILLBNCAJLG.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FNGCKAIPJAM_JAPFFPNAJHB_OFFSET UNITYSDK_OFFSET(0x1E71F0E0)
#define FNGCKAIPJAM_KMGFINCKGOK_OFFSET UNITYSDK_OFFSET(0x1E71F320)
#define FNGCKAIPJAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1E71F310)

inline static constexpr unsigned int FNGCKAIPJAM_TypeDefinitionIndex = 94089;

class FNGCKAIPJAM : public ::CILLBNCAJLG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNGCKAIPJAM__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Type*>* JAPFFPNAJHB()
	{
		return ((::System::Collections::Generic::List_1<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNGCKAIPJAM_JAPFFPNAJHB_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Type*>* KMGFINCKGOK()
	{
		return ((::System::Collections::Generic::List_1<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNGCKAIPJAM_KMGFINCKGOK_OFFSET))(this);
	}
};
