#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KDHAIFIOKDN;
namespace System { class Object; }

#define KDHAIFIOKDN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E801160)
#define KDHAIFIOKDN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8011A0)
#define KDHAIFIOKDN___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E8011B0)

inline static constexpr unsigned int KDHAIFIOKDN___c_TypeDefinitionIndex = 33486;

	class KDHAIFIOKDN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x11080);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDHAIFIOKDN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDHAIFIOKDN___C_CTOR_OFFSET))(this);
		}

		::KDHAIFIOKDN* __cctor_b__48_0()
		{
			return ((::KDHAIFIOKDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDHAIFIOKDN___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
