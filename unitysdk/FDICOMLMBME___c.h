#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDICOMLMBME;
namespace System { class Object; }

#define FDICOMLMBME___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E35A820)
#define FDICOMLMBME___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E35A860)
#define FDICOMLMBME___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E35A870)

inline static constexpr unsigned int FDICOMLMBME___c_TypeDefinitionIndex = 33116;

	class FDICOMLMBME___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5BBB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDICOMLMBME___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDICOMLMBME___C_CTOR_OFFSET))(this);
		}

		::FDICOMLMBME* __cctor_b__23_0()
		{
			return ((::FDICOMLMBME*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDICOMLMBME___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
