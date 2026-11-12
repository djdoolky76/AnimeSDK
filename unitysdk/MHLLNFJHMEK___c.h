#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MHLLNFJHMEK;
namespace System { class Object; }

#define MHLLNFJHMEK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD869B0)
#define MHLLNFJHMEK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD869F0)
#define MHLLNFJHMEK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FD86A00)

inline static constexpr unsigned int MHLLNFJHMEK___c_TypeDefinitionIndex = 34035;

	class MHLLNFJHMEK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x58510);
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
