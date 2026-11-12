#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HKFECLCHBFJ;
namespace System { class Object; }

#define HKFECLCHBFJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8AC180)
#define HKFECLCHBFJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8AC1C0)
#define HKFECLCHBFJ___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1F8AC1D0)

inline static constexpr unsigned int HKFECLCHBFJ___c_TypeDefinitionIndex = 29806;

	class HKFECLCHBFJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x35F70);
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
