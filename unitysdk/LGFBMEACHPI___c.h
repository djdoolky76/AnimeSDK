#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LGFBMEACHPI;
namespace System { class Object; }

#define LGFBMEACHPI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FABE870)
#define LGFBMEACHPI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FABE8B0)
#define LGFBMEACHPI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FABE8C0)

inline static constexpr unsigned int LGFBMEACHPI___c_TypeDefinitionIndex = 27722;

	class LGFBMEACHPI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x34910);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGFBMEACHPI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGFBMEACHPI___C_CTOR_OFFSET))(this);
		}

		::LGFBMEACHPI* __cctor_b__23_0()
		{
			return ((::LGFBMEACHPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGFBMEACHPI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
