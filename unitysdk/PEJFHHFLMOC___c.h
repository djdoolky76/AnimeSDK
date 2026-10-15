#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PEJFHHFLMOC;
namespace System { class Object; }

#define PEJFHHFLMOC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEEDA30)
#define PEJFHHFLMOC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEEDA60)
#define PEJFHHFLMOC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DEEDA70)

inline static constexpr unsigned int PEJFHHFLMOC___c_TypeDefinitionIndex = 31405;

	class PEJFHHFLMOC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30E70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEJFHHFLMOC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJFHHFLMOC___C_CTOR_OFFSET))(this);
		}

		::PEJFHHFLMOC* __cctor_b__33_0()
		{
			return ((::PEJFHHFLMOC*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJFHHFLMOC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
