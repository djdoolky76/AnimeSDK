#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFCKCGAINAM;
namespace System { class Object; }

#define AFCKCGAINAM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F5E7930)
#define AFCKCGAINAM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F5E7970)
#define AFCKCGAINAM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F5E7980)

inline static constexpr unsigned int AFCKCGAINAM___c_TypeDefinitionIndex = 35043;

	class AFCKCGAINAM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3DF10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFCKCGAINAM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFCKCGAINAM___C_CTOR_OFFSET))(this);
		}

		::AFCKCGAINAM* __cctor_b__23_0()
		{
			return ((::AFCKCGAINAM*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFCKCGAINAM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
