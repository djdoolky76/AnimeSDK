#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B07850EA97DBB75A.h"
#include "unitysdk/System/Object.h"

class E8415284EA848E3C;
namespace System { template <typename T> class E891BA3236FD13E7; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BBE31BC58EEFB23D_EE176175BCC44E97_BC1D0DCFC802FE44_OFFSET UNITYSDK_OFFSET(0x1E210C0)
#define BBE31BC58EEFB23D_EE176175BCC44E97__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BBE31BC58EEFB23D_EE176175BCC44E97_TypeDefinitionIndex = 9428;

class BBE31BC58EEFB23D_EE176175BCC44E97 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::B07850EA97DBB75A<::System::UInt32, ::System::UInt32>>* B8A7CBDA3883C77D; // 0x10
	::System::Int32 FC300ADBDFF24726; // 0x18
	::System::Byte _padding0[0x4];
	::System::E891BA3236FD13E7<::E8415284EA848E3C*>* F422651CC4956382; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBE31BC58EEFB23D_EE176175BCC44E97__CTOR_OFFSET))(this);
	}

	::System::Boolean BC1D0DCFC802FE44(::E8415284EA848E3C* BB8C609F76620E45)
	{
		return ((::System::Boolean(*)(::PVOID, ::E8415284EA848E3C*))((::PBYTE)hIl2Cpp + BBE31BC58EEFB23D_EE176175BCC44E97_BC1D0DCFC802FE44_OFFSET))(this, BB8C609F76620E45);
	}
};
