#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MHLLNFJHMEK;
namespace System { class Object; }

#define MHLLNFJHMEK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA34EB0)
#define MHLLNFJHMEK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA34EF0)
#define MHLLNFJHMEK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EA34F00)

inline static constexpr unsigned int MHLLNFJHMEK___c_TypeDefinitionIndex = 33120;

	class MHLLNFJHMEK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x520A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MHLLNFJHMEK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHLLNFJHMEK___C_CTOR_OFFSET))(this);
		}

		::MHLLNFJHMEK* __cctor_b__23_0()
		{
			return ((::MHLLNFJHMEK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHLLNFJHMEK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
