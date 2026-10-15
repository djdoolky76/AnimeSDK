#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFJFHKLJKAK;
namespace System { class Object; }

#define KFJFHKLJKAK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7EE0B0)
#define KFJFHKLJKAK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7EE0F0)
#define KFJFHKLJKAK___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E7EE100)

inline static constexpr unsigned int KFJFHKLJKAK___c_TypeDefinitionIndex = 32761;

	class KFJFHKLJKAK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x12E00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KFJFHKLJKAK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFJFHKLJKAK___C_CTOR_OFFSET))(this);
		}

		::KFJFHKLJKAK* __cctor_b__38_0()
		{
			return ((::KFJFHKLJKAK*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFJFHKLJKAK___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
