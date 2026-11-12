#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CMNLOKDOFEF;
namespace System { class Object; }

#define CMNLOKDOFEF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3FCF40)
#define CMNLOKDOFEF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3FCF80)
#define CMNLOKDOFEF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F3FCF90)

inline static constexpr unsigned int CMNLOKDOFEF___c_TypeDefinitionIndex = 26248;

	class CMNLOKDOFEF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x19E20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CMNLOKDOFEF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMNLOKDOFEF___C_CTOR_OFFSET))(this);
		}

		::CMNLOKDOFEF* __cctor_b__23_0()
		{
			return ((::CMNLOKDOFEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMNLOKDOFEF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
