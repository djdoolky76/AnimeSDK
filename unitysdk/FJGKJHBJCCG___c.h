#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FJGKJHBJCCG;
namespace System { class Object; }

#define FJGKJHBJCCG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6A8110)
#define FJGKJHBJCCG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6A8150)
#define FJGKJHBJCCG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F6A8160)

inline static constexpr unsigned int FJGKJHBJCCG___c_TypeDefinitionIndex = 28748;

	class FJGKJHBJCCG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x46C90);
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
