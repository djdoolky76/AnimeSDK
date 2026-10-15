#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HENDEHGPKMF;
namespace System { class Object; }

#define HENDEHGPKMF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E55CF20)
#define HENDEHGPKMF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E55CF60)
#define HENDEHGPKMF___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E55CF70)

inline static constexpr unsigned int HENDEHGPKMF___c_TypeDefinitionIndex = 25355;

	class HENDEHGPKMF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x334B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HENDEHGPKMF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HENDEHGPKMF___C_CTOR_OFFSET))(this);
		}

		::HENDEHGPKMF* __cctor_b__43_0()
		{
			return ((::HENDEHGPKMF*(*)(::PVOID))((::PBYTE)hIl2Cpp + HENDEHGPKMF___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
