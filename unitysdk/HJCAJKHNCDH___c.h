#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HJCAJKHNCDH;
namespace System { class Object; }

#define HJCAJKHNCDH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E576730)
#define HJCAJKHNCDH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E576770)
#define HJCAJKHNCDH___C___CCTOR_B__36_0_OFFSET UNITYSDK_OFFSET(0x1E576780)

inline static constexpr unsigned int HJCAJKHNCDH___c_TypeDefinitionIndex = 29389;

	class HJCAJKHNCDH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x35360);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJCAJKHNCDH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCAJKHNCDH___C_CTOR_OFFSET))(this);
		}

		::HJCAJKHNCDH* __cctor_b__36_0()
		{
			return ((::HJCAJKHNCDH*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCAJKHNCDH___C___CCTOR_B__36_0_OFFSET))(this);
		}

	};
