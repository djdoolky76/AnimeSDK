#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ADKJKMKBFDC;
namespace System { class Object; }

#define ADKJKMKBFDC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EFE7950)
#define ADKJKMKBFDC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFE7990)
#define ADKJKMKBFDC___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1EFE79A0)

inline static constexpr unsigned int ADKJKMKBFDC___c_TypeDefinitionIndex = 27371;

	class ADKJKMKBFDC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x37C00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ADKJKMKBFDC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADKJKMKBFDC___C_CTOR_OFFSET))(this);
		}

		::ADKJKMKBFDC* __cctor_b__38_0()
		{
			return ((::ADKJKMKBFDC*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADKJKMKBFDC___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
