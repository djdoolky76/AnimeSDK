#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LDABILELOFN;
namespace System { class Object; }

#define LDABILELOFN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F90D510)
#define LDABILELOFN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F90D540)
#define LDABILELOFN___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F90D550)

inline static constexpr unsigned int LDABILELOFN___c_TypeDefinitionIndex = 28448;

	class LDABILELOFN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2B950);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDABILELOFN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDABILELOFN___C_CTOR_OFFSET))(this);
		}

		::LDABILELOFN* __cctor_b__33_0()
		{
			return ((::LDABILELOFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDABILELOFN___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
