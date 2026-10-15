#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KJEOBMBMNIN;
namespace System { class Object; }

#define KJEOBMBMNIN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E83D3A0)
#define KJEOBMBMNIN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E83D3E0)
#define KJEOBMBMNIN___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E83D3F0)

inline static constexpr unsigned int KJEOBMBMNIN___c_TypeDefinitionIndex = 32963;

	class KJEOBMBMNIN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x19F90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJEOBMBMNIN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJEOBMBMNIN___C_CTOR_OFFSET))(this);
		}

		::KJEOBMBMNIN* __cctor_b__48_0()
		{
			return ((::KJEOBMBMNIN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJEOBMBMNIN___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
