#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AAFBNNALHDK;
namespace System { class Object; }

#define AAFBNNALHDK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDB9970)
#define AAFBNNALHDK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDB99B0)
#define AAFBNNALHDK___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1DDB99C0)

inline static constexpr unsigned int AAFBNNALHDK___c_TypeDefinitionIndex = 33751;

	class AAFBNNALHDK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x36BE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAFBNNALHDK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAFBNNALHDK___C_CTOR_OFFSET))(this);
		}

		::AAFBNNALHDK* __cctor_b__43_0()
		{
			return ((::AAFBNNALHDK*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAFBNNALHDK___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
