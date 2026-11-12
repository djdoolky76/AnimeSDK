#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IOMPILNAEEO;
namespace System { class Object; }

#define IOMPILNAEEO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F9E26D0)
#define IOMPILNAEEO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F9E2710)
#define IOMPILNAEEO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F9E2720)

inline static constexpr unsigned int IOMPILNAEEO___c_TypeDefinitionIndex = 26171;

	class IOMPILNAEEO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x58AB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IOMPILNAEEO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOMPILNAEEO___C_CTOR_OFFSET))(this);
		}

		::IOMPILNAEEO* __cctor_b__28_0()
		{
			return ((::IOMPILNAEEO*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOMPILNAEEO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
