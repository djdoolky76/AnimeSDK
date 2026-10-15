#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MKDHPOGEDOP;
namespace System { class Object; }

#define MKDHPOGEDOP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA270F0)
#define MKDHPOGEDOP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA27120)
#define MKDHPOGEDOP___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1EA27130)

inline static constexpr unsigned int MKDHPOGEDOP___c_TypeDefinitionIndex = 26425;

	class MKDHPOGEDOP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54950);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKDHPOGEDOP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKDHPOGEDOP___C_CTOR_OFFSET))(this);
		}

		::MKDHPOGEDOP* __cctor_b__33_0()
		{
			return ((::MKDHPOGEDOP*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKDHPOGEDOP___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
