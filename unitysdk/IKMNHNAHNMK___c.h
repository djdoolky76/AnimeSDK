#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IKMNHNAHNMK;
namespace System { class Object; }

#define IKMNHNAHNMK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E677B30)
#define IKMNHNAHNMK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E677B60)
#define IKMNHNAHNMK___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E677B70)

inline static constexpr unsigned int IKMNHNAHNMK___c_TypeDefinitionIndex = 30945;

	class IKMNHNAHNMK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50BF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IKMNHNAHNMK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKMNHNAHNMK___C_CTOR_OFFSET))(this);
		}

		::IKMNHNAHNMK* __cctor_b__33_0()
		{
			return ((::IKMNHNAHNMK*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKMNHNAHNMK___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
