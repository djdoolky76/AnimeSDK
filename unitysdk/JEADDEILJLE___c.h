#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JEADDEILJLE;
namespace System { class Object; }

#define JEADDEILJLE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6E5740)
#define JEADDEILJLE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6E5780)
#define JEADDEILJLE___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E6E5790)

inline static constexpr unsigned int JEADDEILJLE___c_TypeDefinitionIndex = 29090;

	class JEADDEILJLE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5B470);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEADDEILJLE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEADDEILJLE___C_CTOR_OFFSET))(this);
		}

		::JEADDEILJLE* __cctor_b__38_0()
		{
			return ((::JEADDEILJLE*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEADDEILJLE___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
