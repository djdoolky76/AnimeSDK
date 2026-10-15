#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHMFKPIAHCO;
namespace System { class Object; }

#define AHMFKPIAHCO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E276130)
#define AHMFKPIAHCO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E276170)
#define AHMFKPIAHCO___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E276180)

inline static constexpr unsigned int AHMFKPIAHCO___c_TypeDefinitionIndex = 31109;

	class AHMFKPIAHCO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32690);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHMFKPIAHCO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHMFKPIAHCO___C_CTOR_OFFSET))(this);
		}

		::AHMFKPIAHCO* __cctor_b__38_0()
		{
			return ((::AHMFKPIAHCO*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHMFKPIAHCO___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
