#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GDMLMJECLCD;
namespace System { class Object; }

#define GDMLMJECLCD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F73D550)
#define GDMLMJECLCD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F73D590)
#define GDMLMJECLCD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F73D5A0)

inline static constexpr unsigned int GDMLMJECLCD___c_TypeDefinitionIndex = 28742;

	class GDMLMJECLCD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57940);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDMLMJECLCD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMLMJECLCD___C_CTOR_OFFSET))(this);
		}

		::GDMLMJECLCD* __cctor_b__28_0()
		{
			return ((::GDMLMJECLCD*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMLMJECLCD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
