#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EA656D896F44069D;
class F3A019B3697FD5CF;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BEE2D07B44A901BD__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF5030)

inline static constexpr unsigned int BEE2D07B44A901BD_TypeDefinitionIndex = 7385;

class BEE2D07B44A901BD : public ::System::Object
{
public:
	::EA656D896F44069D* B23A5AEB952EF919; // 0x10
	::System::Collections::Generic::List_1<::System::Object*>* EA70971733289A41; // 0x18
	::System::Boolean E3D17824AB1D819C; // 0x20
	::System::Byte _padding0[0x7];
	::System::Collections::Generic::List_1<::F3A019B3697FD5CF*>* E3DF2D6FCC5492F2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEE2D07B44A901BD__CTOR_OFFSET))(this);
	}
};
