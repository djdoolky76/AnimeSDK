#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IADDHANFKPG;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define PJEJIAEDLFG_MPHEHIBEKLH_DPIADDMLOFC_OFFSET UNITYSDK_OFFSET(0x1A7F4BD0)
#define PJEJIAEDLFG_MPHEHIBEKLH__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7F4BC0)

inline static constexpr unsigned int PJEJIAEDLFG_MPHEHIBEKLH_TypeDefinitionIndex = 45425;

class PJEJIAEDLFG_MPHEHIBEKLH : public ::System::Object
{
public:
	::System::Action_1<::IADDHANFKPG*>* NDFFLNEIDFG; // 0x10
	::System::Action_2<::System::Boolean, ::IADDHANFKPG*>* FFMGICPLKFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJEJIAEDLFG_MPHEHIBEKLH__CTOR_OFFSET))(this);
	}

	::System::Void DPIADDMLOFC(::System::Boolean EJCBEJMGFAJ, ::IADDHANFKPG* EBFCACIEKBC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::IADDHANFKPG*))((::PBYTE)hIl2Cpp + PJEJIAEDLFG_MPHEHIBEKLH_DPIADDMLOFC_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
