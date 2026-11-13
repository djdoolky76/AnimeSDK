#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPHFHKDJKMD;
namespace System { class Object; }

#define EPHFHKDJKMD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD93460)
#define EPHFHKDJKMD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F731E80)
#define EPHFHKDJKMD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F731E90)

inline static constexpr unsigned int EPHFHKDJKMD___c_TypeDefinitionIndex = 27865;

	class EPHFHKDJKMD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x51AE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPHFHKDJKMD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPHFHKDJKMD___C_CTOR_OFFSET))(this);
		}

		::EPHFHKDJKMD* __cctor_b__28_0()
		{
			return ((::EPHFHKDJKMD*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPHFHKDJKMD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
