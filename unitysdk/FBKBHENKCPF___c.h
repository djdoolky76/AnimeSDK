#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FBKBHENKCPF;
namespace System { class Object; }

#define FBKBHENKCPF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F61D060)
#define FBKBHENKCPF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F61D090)
#define FBKBHENKCPF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F61D0A0)

inline static constexpr unsigned int FBKBHENKCPF___c_TypeDefinitionIndex = 29072;

	class FBKBHENKCPF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57180);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBKBHENKCPF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBKBHENKCPF___C_CTOR_OFFSET))(this);
		}

		::FBKBHENKCPF* __cctor_b__28_0()
		{
			return ((::FBKBHENKCPF*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBKBHENKCPF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
