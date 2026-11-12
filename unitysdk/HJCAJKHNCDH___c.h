#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HJCAJKHNCDH;
namespace System { class Object; }

#define HJCAJKHNCDH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F89F120)
#define HJCAJKHNCDH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F89F160)
#define HJCAJKHNCDH___C___CCTOR_B__32_0_OFFSET UNITYSDK_OFFSET(0x1F89F170)

inline static constexpr unsigned int HJCAJKHNCDH___c_TypeDefinitionIndex = 30101;

	class HJCAJKHNCDH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x343F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJCAJKHNCDH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCAJKHNCDH___C_CTOR_OFFSET))(this);
		}

		::HJCAJKHNCDH* __cctor_b__32_0()
		{
			return ((::HJCAJKHNCDH*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCAJKHNCDH___C___CCTOR_B__32_0_OFFSET))(this);
		}

	};
