#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AKDCJGCEHKB;
namespace System { class Object; }

#define AKDCJGCEHKB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20638420)
#define AKDCJGCEHKB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20638460)
#define AKDCJGCEHKB___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x20638470)

inline static constexpr unsigned int AKDCJGCEHKB___c_TypeDefinitionIndex = 35410;

	class AKDCJGCEHKB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32810);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKDCJGCEHKB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDCJGCEHKB___C_CTOR_OFFSET))(this);
		}

		::AKDCJGCEHKB* __cctor_b__18_0()
		{
			return ((::AKDCJGCEHKB*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDCJGCEHKB___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
