#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KGGIFOABIDF;
namespace System { class Object; }

#define KGGIFOABIDF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E836BC0)
#define KGGIFOABIDF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E836BF0)
#define KGGIFOABIDF___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E836C00)

inline static constexpr unsigned int KGGIFOABIDF___c_TypeDefinitionIndex = 33707;

	class KGGIFOABIDF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x15D40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KGGIFOABIDF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGGIFOABIDF___C_CTOR_OFFSET))(this);
		}

		::KGGIFOABIDF* __cctor_b__18_0()
		{
			return ((::KGGIFOABIDF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGGIFOABIDF___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
