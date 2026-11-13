#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MFFFEOKDOAE;
namespace System { class Object; }

#define MFFFEOKDOAE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB162E0)
#define MFFFEOKDOAE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB16320)
#define MFFFEOKDOAE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FB16330)

inline static constexpr unsigned int MFFFEOKDOAE___c_TypeDefinitionIndex = 28050;

	class MFFFEOKDOAE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4FC40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFFFEOKDOAE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFFFEOKDOAE___C_CTOR_OFFSET))(this);
		}

		::MFFFEOKDOAE* __cctor_b__28_0()
		{
			return ((::MFFFEOKDOAE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFFFEOKDOAE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
