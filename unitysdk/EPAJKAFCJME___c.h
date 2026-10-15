#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPAJKAFCJME;
namespace System { class Object; }

#define EPAJKAFCJME___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E302870)
#define EPAJKAFCJME___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3028A0)
#define EPAJKAFCJME___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E3028B0)

inline static constexpr unsigned int EPAJKAFCJME___c_TypeDefinitionIndex = 33896;

	class EPAJKAFCJME___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55520);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPAJKAFCJME___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPAJKAFCJME___C_CTOR_OFFSET))(this);
		}

		::EPAJKAFCJME* __cctor_b__28_0()
		{
			return ((::EPAJKAFCJME*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPAJKAFCJME___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
