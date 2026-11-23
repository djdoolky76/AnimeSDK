#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class E124276C1B8B554E;
class EA1C3C9B85AD9F51;
class F6EE237032F34DED;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define B5F627575BF6492C_A227CC6F553401D9_OFFSET UNITYSDK_OFFSET(0x3806790)
#define B5F627575BF6492C_F703A3185EFBD44E_OFFSET UNITYSDK_OFFSET(0x3806750)
#define B5F627575BF6492C_F77E37144233374A_OFFSET UNITYSDK_OFFSET(0x38067D0)
#define B5F627575BF6492C__CTOR_OFFSET UNITYSDK_OFFSET(0x3806640)

inline static constexpr unsigned int B5F627575BF6492C_TypeDefinitionIndex = 17831;

class B5F627575BF6492C : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::E124276C1B8B554E*>* B8B0EF9ED37BA7F0; // 0x10
	::System::Collections::Generic::List_1<::EA1C3C9B85AD9F51*>* A27DC0C3E59C7461; // 0x18
	::System::Collections::Generic::List_1<::F6EE237032F34DED*>* BB582B2ABC8BE03C; // 0x20

	::System::Int32 F703A3185EFBD44E()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + B5F627575BF6492C_F703A3185EFBD44E_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B5F627575BF6492C__CTOR_OFFSET))(this);
	}

	::System::Int32 F77E37144233374A()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + B5F627575BF6492C_F77E37144233374A_OFFSET))(this);
	}

	::System::Int32 A227CC6F553401D9()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + B5F627575BF6492C_A227CC6F553401D9_OFFSET))(this);
	}
};
