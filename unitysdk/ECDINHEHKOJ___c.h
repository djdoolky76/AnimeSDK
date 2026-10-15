#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECDINHEHKOJ;
namespace System { class Object; }

#define ECDINHEHKOJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2205F0)
#define ECDINHEHKOJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E220630)
#define ECDINHEHKOJ___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E220640)

inline static constexpr unsigned int ECDINHEHKOJ___c_TypeDefinitionIndex = 34711;

	class ECDINHEHKOJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x42160);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECDINHEHKOJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECDINHEHKOJ___C_CTOR_OFFSET))(this);
		}

		::ECDINHEHKOJ* __cctor_b__48_0()
		{
			return ((::ECDINHEHKOJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECDINHEHKOJ___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
