#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MEHLONLGMGK;
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define MAFGFDMEHOG_AEILGHMIFPD_NKPKLMCAGNE_OFFSET UNITYSDK_OFFSET(0xD441EF0)
#define MAFGFDMEHOG_AEILGHMIFPD__CTOR_OFFSET UNITYSDK_OFFSET(0xD441EE0)

inline static constexpr unsigned int MAFGFDMEHOG_AEILGHMIFPD_TypeDefinitionIndex = 46022;

class MAFGFDMEHOG_AEILGHMIFPD : public ::System::Object
{
public:
	::System::Collections::Generic::IList_1<::System::Int32>* FBAHEKPBKOM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAFGFDMEHOG_AEILGHMIFPD__CTOR_OFFSET))(this);
	}

	::System::Boolean NKPKLMCAGNE(::MEHLONLGMGK* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::MEHLONLGMGK*))((::PBYTE)hIl2Cpp + MAFGFDMEHOG_AEILGHMIFPD_NKPKLMCAGNE_OFFSET))(this, HAAEBCOBKFF);
	}
};
