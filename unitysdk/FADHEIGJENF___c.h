#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FADHEIGJENF;
namespace System { class Object; }

#define FADHEIGJENF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2F08F0)
#define FADHEIGJENF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2F0930)
#define FADHEIGJENF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E2F0940)

inline static constexpr unsigned int FADHEIGJENF___c_TypeDefinitionIndex = 29246;

	class FADHEIGJENF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4B120);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FADHEIGJENF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FADHEIGJENF___C_CTOR_OFFSET))(this);
		}

		::FADHEIGJENF* __cctor_b__23_0()
		{
			return ((::FADHEIGJENF*(*)(::PVOID))((::PBYTE)hIl2Cpp + FADHEIGJENF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
