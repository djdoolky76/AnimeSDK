#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JJIJAMHKNGO;
namespace System { class Object; }

#define JJIJAMHKNGO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E730AE0)
#define JJIJAMHKNGO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E730B10)
#define JJIJAMHKNGO___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E730B20)

inline static constexpr unsigned int JJIJAMHKNGO___c_TypeDefinitionIndex = 31287;

	class JJIJAMHKNGO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x629D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJIJAMHKNGO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJIJAMHKNGO___C_CTOR_OFFSET))(this);
		}

		::JJIJAMHKNGO* __cctor_b__33_0()
		{
			return ((::JJIJAMHKNGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJIJAMHKNGO___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
