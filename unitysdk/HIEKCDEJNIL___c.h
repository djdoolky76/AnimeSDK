#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIEKCDEJNIL;
namespace System { class Object; }

#define HIEKCDEJNIL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2051CB70)
#define HIEKCDEJNIL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2051CBA0)
#define HIEKCDEJNIL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x2051CBB0)

inline static constexpr unsigned int HIEKCDEJNIL___c_TypeDefinitionIndex = 32209;

	class HIEKCDEJNIL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2F4A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIEKCDEJNIL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEKCDEJNIL___C_CTOR_OFFSET))(this);
		}

		::HIEKCDEJNIL* __cctor_b__28_0()
		{
			return ((::HIEKCDEJNIL*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEKCDEJNIL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
