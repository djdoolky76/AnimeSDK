#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/Config/WwiseEvent.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define F681865EA991ACC3_A765A1D14770A303_OFFSET UNITYSDK_OFFSET(0x2262DD0)
#define F681865EA991ACC3_F98B7217155CBE4C_OFFSET UNITYSDK_OFFSET(0x2262CF0)
#define F681865EA991ACC3__CTOR_OFFSET UNITYSDK_OFFSET(0x18D5180)

inline static constexpr unsigned int F681865EA991ACC3_TypeDefinitionIndex = 9218;

class F681865EA991ACC3 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::ABC::Config::WwiseEvent>* A00615274110D918; // 0x10
	::System::Collections::Generic::List_1<::ABC::Config::WwiseEvent>* B25271FEBE0CA50B; // 0x18
	::System::Boolean B27C101464052E9D; // 0x20
	::System::Byte _padding0[0x7];
	::System::Nullable_1<::System::Object*> FE94A52EA25F37F0; // 0x28

	::System::Void _ctor(::System::Collections::Generic::List_1<::ABC::Config::WwiseEvent>* AA1B23DE73E471D5, ::System::Collections::Generic::List_1<::ABC::Config::WwiseEvent>* F713DBF79171EF8B)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::ABC::Config::WwiseEvent>*, ::System::Collections::Generic::List_1<::ABC::Config::WwiseEvent>*))((::PBYTE)hIl2Cpp + F681865EA991ACC3__CTOR_OFFSET))(this, AA1B23DE73E471D5, F713DBF79171EF8B);
	}

	::System::Void F98B7217155CBE4C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F681865EA991ACC3_F98B7217155CBE4C_OFFSET))(this);
	}

	::System::Void A765A1D14770A303()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F681865EA991ACC3_A765A1D14770A303_OFFSET))(this);
	}
};
