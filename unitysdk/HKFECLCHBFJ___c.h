#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HKFECLCHBFJ;
namespace System { class Object; }

#define HKFECLCHBFJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E583530)
#define HKFECLCHBFJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E583570)
#define HKFECLCHBFJ___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E583580)

inline static constexpr unsigned int HKFECLCHBFJ___c_TypeDefinitionIndex = 29165;

	class HKFECLCHBFJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x36BC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKFECLCHBFJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKFECLCHBFJ___C_CTOR_OFFSET))(this);
		}

		::HKFECLCHBFJ* __cctor_b__43_0()
		{
			return ((::HKFECLCHBFJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKFECLCHBFJ___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
