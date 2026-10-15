#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKJEMHKOMJC;
namespace System { class Object; }

#define GKJEMHKOMJC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E48A510)
#define GKJEMHKOMJC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E48A550)
#define GKJEMHKOMJC___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E48A560)

inline static constexpr unsigned int GKJEMHKOMJC___c_TypeDefinitionIndex = 28266;

	class GKJEMHKOMJC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1BED0);
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
