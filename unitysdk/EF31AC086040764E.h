#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AC5F5FB0FFBDC346.h"

namespace System { class InvalidOperationException; }

#define EF31AC086040764E_A359C8EEA7682D4F_OFFSET UNITYSDK_OFFSET(0x3D0E910)
#define EF31AC086040764E_E3162E8B8D8BE740_OFFSET UNITYSDK_OFFSET(0x3D0E830)
#define EF31AC086040764E_EF77939FED24D077_OFFSET UNITYSDK_OFFSET(0x3D0E970)
#define EF31AC086040764E__CCTOR_OFFSET UNITYSDK_OFFSET(0x3D0EA20)

inline static constexpr unsigned int EF31AC086040764E_TypeDefinitionIndex = 10813;

class EF31AC086040764E : public ::AC5F5FB0FFBDC346
{
public:
	static ::System::UIntPtr* StaticGet_A4F8A79517DE3061()
	{
		return (::System::UIntPtr*)Il2CppClass::FromTypeDefinitionIndex(EF31AC086040764E_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::UIntPtr BED941B058005E0B; // 0x20

	::System::Void E3162E8B8D8BE740(::PVOID& A1A721A6CAD1353B)
	{
		return ((::System::Void(*)(::PVOID, ::PVOID&))((::PBYTE)hIl2Cpp + EF31AC086040764E_E3162E8B8D8BE740_OFFSET))(this, A1A721A6CAD1353B);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EF31AC086040764E__CCTOR_OFFSET))();
	}

	static ::System::InvalidOperationException* A359C8EEA7682D4F()
	{
		return ((::System::InvalidOperationException*(*)())((::PBYTE)hIl2Cpp + EF31AC086040764E_A359C8EEA7682D4F_OFFSET))();
	}

	::System::Void EF77939FED24D077()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EF31AC086040764E_EF77939FED24D077_OFFSET))(this);
	}
};
