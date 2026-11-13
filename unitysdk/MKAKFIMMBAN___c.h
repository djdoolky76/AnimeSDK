#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MKAKFIMMBAN;
namespace System { class Object; }

#define MKAKFIMMBAN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x205C8520)
#define MKAKFIMMBAN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x205C8560)
#define MKAKFIMMBAN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x205C8570)

inline static constexpr unsigned int MKAKFIMMBAN___c_TypeDefinitionIndex = 32340;

	class MKAKFIMMBAN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4E140);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKAKFIMMBAN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKAKFIMMBAN___C_CTOR_OFFSET))(this);
		}

		::MKAKFIMMBAN* __cctor_b__23_0()
		{
			return ((::MKAKFIMMBAN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKAKFIMMBAN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
