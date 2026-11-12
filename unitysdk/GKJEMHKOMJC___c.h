#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKJEMHKOMJC;
namespace System { class Object; }

#define GKJEMHKOMJC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F7A9C40)
#define GKJEMHKOMJC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F7A9C80)
#define GKJEMHKOMJC___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1F7A9C90)

inline static constexpr unsigned int GKJEMHKOMJC___c_TypeDefinitionIndex = 28856;

	class GKJEMHKOMJC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x15580);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKJEMHKOMJC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJEMHKOMJC___C_CTOR_OFFSET))(this);
		}

		::GKJEMHKOMJC* __cctor_b__48_0()
		{
			return ((::GKJEMHKOMJC*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJEMHKOMJC___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
