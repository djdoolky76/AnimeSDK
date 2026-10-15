#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OBJMMFFDGGC;
namespace System { class Object; }

#define OBJMMFFDGGC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB84E70)
#define OBJMMFFDGGC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB84EB0)
#define OBJMMFFDGGC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EB84EC0)

inline static constexpr unsigned int OBJMMFFDGGC___c_TypeDefinitionIndex = 26347;

	class OBJMMFFDGGC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10510);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OBJMMFFDGGC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJMMFFDGGC___C_CTOR_OFFSET))(this);
		}

		::OBJMMFFDGGC* __cctor_b__28_0()
		{
			return ((::OBJMMFFDGGC*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJMMFFDGGC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
