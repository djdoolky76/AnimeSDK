#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LNDHKMMGBGC;
namespace System { class Object; }

#define LNDHKMMGBGC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x200C8230)
#define LNDHKMMGBGC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x200C8270)
#define LNDHKMMGBGC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x200C8280)

inline static constexpr unsigned int LNDHKMMGBGC___c_TypeDefinitionIndex = 29781;

	class LNDHKMMGBGC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44AB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LNDHKMMGBGC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNDHKMMGBGC___C_CTOR_OFFSET))(this);
		}

		::LNDHKMMGBGC* __cctor_b__33_0()
		{
			return ((::LNDHKMMGBGC*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNDHKMMGBGC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
