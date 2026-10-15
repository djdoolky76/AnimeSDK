#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GANFMBPEJPF;
namespace System { class Object; }

#define GANFMBPEJPF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3F65F0)
#define GANFMBPEJPF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3F6620)
#define GANFMBPEJPF___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E3F6630)

inline static constexpr unsigned int GANFMBPEJPF___c_TypeDefinitionIndex = 33245;

	class GANFMBPEJPF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xB4B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GANFMBPEJPF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GANFMBPEJPF___C_CTOR_OFFSET))(this);
		}

		::GANFMBPEJPF* __cctor_b__38_0()
		{
			return ((::GANFMBPEJPF*(*)(::PVOID))((::PBYTE)hIl2Cpp + GANFMBPEJPF___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
