#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define FCF0D1E65E0610A4_ED7D005E259B1A7F_B98EE65B09A36420_OFFSET UNITYSDK_OFFSET(0x38BF140)
#define FCF0D1E65E0610A4_ED7D005E259B1A7F__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FCF0D1E65E0610A4_ED7D005E259B1A7F_TypeDefinitionIndex = 20321;

class FCF0D1E65E0610A4_ED7D005E259B1A7F : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::IntPtr>* E8270C5FD3578E79; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCF0D1E65E0610A4_ED7D005E259B1A7F__CTOR_OFFSET))(this);
	}

	::System::Void B98EE65B09A36420()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCF0D1E65E0610A4_ED7D005E259B1A7F_B98EE65B09A36420_OFFSET))(this);
	}
};
