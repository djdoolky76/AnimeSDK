#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KFEJPGKMPMD;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define BPDHCEEGJHO_DCNCPIFKCJI_GGDHMKINJJH_OFFSET UNITYSDK_OFFSET(0x169345D0)
#define BPDHCEEGJHO_DCNCPIFKCJI__CTOR_OFFSET UNITYSDK_OFFSET(0x169345C0)

inline static constexpr unsigned int BPDHCEEGJHO_DCNCPIFKCJI_TypeDefinitionIndex = 73047;

class BPDHCEEGJHO_DCNCPIFKCJI : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* OAEFMNJLOIP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDHCEEGJHO_DCNCPIFKCJI__CTOR_OFFSET))(this);
	}

	::System::Boolean GGDHMKINJJH(::KFEJPGKMPMD* AMJADGKJAPK)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFEJPGKMPMD*))((::PBYTE)hIl2Cpp + BPDHCEEGJHO_DCNCPIFKCJI_GGDHMKINJJH_OFFSET))(this, AMJADGKJAPK);
	}
};
