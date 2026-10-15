#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HFKKEDPMKKF;
namespace System { class Object; }

#define HFKKEDPMKKF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E540D40)
#define HFKKEDPMKKF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E540D80)
#define HFKKEDPMKKF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E540D90)

inline static constexpr unsigned int HFKKEDPMKKF___c_TypeDefinitionIndex = 34371;

	class HFKKEDPMKKF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2FB80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFKKEDPMKKF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFKKEDPMKKF___C_CTOR_OFFSET))(this);
		}

		::HFKKEDPMKKF* __cctor_b__28_0()
		{
			return ((::HFKKEDPMKKF*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFKKEDPMKKF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
