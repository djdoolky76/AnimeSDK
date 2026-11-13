#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FJGKJHBJCCG;
namespace System { class Object; }

#define FJGKJHBJCCG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x206A8360)
#define FJGKJHBJCCG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x206A83A0)
#define FJGKJHBJCCG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x206A83B0)

inline static constexpr unsigned int FJGKJHBJCCG___c_TypeDefinitionIndex = 28748;

	class FJGKJHBJCCG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44920);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FJGKJHBJCCG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJGKJHBJCCG___C_CTOR_OFFSET))(this);
		}

		::FJGKJHBJCCG* __cctor_b__23_0()
		{
			return ((::FJGKJHBJCCG*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJGKJHBJCCG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
