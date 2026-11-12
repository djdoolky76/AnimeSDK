#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LHPEMLMHIHE;
namespace System { class Object; }

#define LHPEMLMHIHE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC8A290)
#define LHPEMLMHIHE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC8A2D0)
#define LHPEMLMHIHE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FC8A2E0)

inline static constexpr unsigned int LHPEMLMHIHE___c_TypeDefinitionIndex = 34610;

	class LHPEMLMHIHE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x35D20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHPEMLMHIHE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHPEMLMHIHE___C_CTOR_OFFSET))(this);
		}

		::LHPEMLMHIHE* __cctor_b__28_0()
		{
			return ((::LHPEMLMHIHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHPEMLMHIHE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
