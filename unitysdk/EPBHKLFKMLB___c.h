#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPBHKLFKMLB;
namespace System { class Object; }

#define EPBHKLFKMLB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2D7250)
#define EPBHKLFKMLB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2D7290)
#define EPBHKLFKMLB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E2D72A0)

inline static constexpr unsigned int EPBHKLFKMLB___c_TypeDefinitionIndex = 29884;

	class EPBHKLFKMLB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47CF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPBHKLFKMLB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPBHKLFKMLB___C_CTOR_OFFSET))(this);
		}

		::EPBHKLFKMLB* __cctor_b__23_0()
		{
			return ((::EPBHKLFKMLB*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPBHKLFKMLB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
