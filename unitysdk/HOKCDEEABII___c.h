#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HOKCDEEABII;
namespace System { class Object; }

#define HOKCDEEABII___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20040180)
#define HOKCDEEABII___C_CTOR_OFFSET UNITYSDK_OFFSET(0x200401C0)
#define HOKCDEEABII___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x200401D0)

inline static constexpr unsigned int HOKCDEEABII___c_TypeDefinitionIndex = 35641;

	class HOKCDEEABII___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3E2B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOKCDEEABII___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOKCDEEABII___C_CTOR_OFFSET))(this);
		}

		::HOKCDEEABII* __cctor_b__38_0()
		{
			return ((::HOKCDEEABII*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOKCDEEABII___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
