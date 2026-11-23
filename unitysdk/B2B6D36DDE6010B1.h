#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A1258A87D0C48F5B.h"

class BE9647B9F830A884;
class E78B436C7FACCBD8;
class F7A602BB21F8E7EF;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define B2B6D36DDE6010B1_B7148A7074EDAEF6_OFFSET UNITYSDK_OFFSET(0x1E9A9F0)
#define B2B6D36DDE6010B1__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B2B6D36DDE6010B1_TypeDefinitionIndex = 6711;

class B2B6D36DDE6010B1 : public ::A1258A87D0C48F5B
{
public:
	::E78B436C7FACCBD8* B7148A7074EDAEF6(::F7A602BB21F8E7EF* AC3ED6E7B8544859, ::System::Collections::Generic::List_1<::BE9647B9F830A884*>* A3F06B88B290B21F)
	{
		return ((::E78B436C7FACCBD8*(*)(::PVOID, ::F7A602BB21F8E7EF*, ::System::Collections::Generic::List_1<::BE9647B9F830A884*>*))((::PBYTE)hIl2Cpp + B2B6D36DDE6010B1_B7148A7074EDAEF6_OFFSET))(this, AC3ED6E7B8544859, A3F06B88B290B21F);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B2B6D36DDE6010B1__CTOR_OFFSET))(this);
	}
};
