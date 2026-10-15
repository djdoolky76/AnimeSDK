#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PIKKAEBHIKF;
namespace System { class Object; }

#define PIKKAEBHIKF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF3EB60)
#define PIKKAEBHIKF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF3EBA0)
#define PIKKAEBHIKF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DF3EBB0)

inline static constexpr unsigned int PIKKAEBHIKF___c_TypeDefinitionIndex = 29289;

	class PIKKAEBHIKF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x35580);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIKKAEBHIKF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIKKAEBHIKF___C_CTOR_OFFSET))(this);
		}

		::PIKKAEBHIKF* __cctor_b__23_0()
		{
			return ((::PIKKAEBHIKF*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIKKAEBHIKF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
