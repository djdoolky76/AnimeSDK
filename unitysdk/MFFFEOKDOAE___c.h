#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MFFFEOKDOAE;
namespace System { class Object; }

#define MFFFEOKDOAE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9EC460)
#define MFFFEOKDOAE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9EC4A0)
#define MFFFEOKDOAE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E9EC4B0)

inline static constexpr unsigned int MFFFEOKDOAE___c_TypeDefinitionIndex = 27519;

	class MFFFEOKDOAE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4ED60);
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
