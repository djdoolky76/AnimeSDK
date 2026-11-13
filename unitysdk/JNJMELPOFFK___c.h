#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JNJMELPOFFK;
namespace System { class Object; }

#define JNJMELPOFFK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20000420)
#define JNJMELPOFFK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20000450)
#define JNJMELPOFFK___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x20000460)

inline static constexpr unsigned int JNJMELPOFFK___c_TypeDefinitionIndex = 35152;

	class JNJMELPOFFK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x671D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JNJMELPOFFK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNJMELPOFFK___C_CTOR_OFFSET))(this);
		}

		::JNJMELPOFFK* __cctor_b__18_0()
		{
			return ((::JNJMELPOFFK*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNJMELPOFFK___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
