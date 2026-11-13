#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MEKDHGNOEIJ;
namespace System { class Object; }

#define MEKDHGNOEIJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB0AED0)
#define MEKDHGNOEIJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB0AF00)
#define MEKDHGNOEIJ___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1FB0AF10)

inline static constexpr unsigned int MEKDHGNOEIJ___c_TypeDefinitionIndex = 34980;

	class MEKDHGNOEIJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4D740);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MEKDHGNOEIJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEKDHGNOEIJ___C_CTOR_OFFSET))(this);
		}

		::MEKDHGNOEIJ* __cctor_b__53_0()
		{
			return ((::MEKDHGNOEIJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEKDHGNOEIJ___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
