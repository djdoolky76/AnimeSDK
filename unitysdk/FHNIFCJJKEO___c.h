#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHNIFCJJKEO;
namespace System { class Object; }

#define FHNIFCJJKEO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E392450)
#define FHNIFCJJKEO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E392490)
#define FHNIFCJJKEO___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E3924A0)

inline static constexpr unsigned int FHNIFCJJKEO___c_TypeDefinitionIndex = 33703;

	class FHNIFCJJKEO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5FC30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHNIFCJJKEO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNIFCJJKEO___C_CTOR_OFFSET))(this);
		}

		::FHNIFCJJKEO* __cctor_b__38_0()
		{
			return ((::FHNIFCJJKEO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNIFCJJKEO___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
