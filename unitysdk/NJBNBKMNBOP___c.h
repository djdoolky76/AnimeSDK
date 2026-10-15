#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NJBNBKMNBOP;
namespace System { class Object; }

#define NJBNBKMNBOP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB3B530)
#define NJBNBKMNBOP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB3B570)
#define NJBNBKMNBOP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EB3B580)

inline static constexpr unsigned int NJBNBKMNBOP___c_TypeDefinitionIndex = 27450;

	class NJBNBKMNBOP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x64B00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJBNBKMNBOP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJBNBKMNBOP___C_CTOR_OFFSET))(this);
		}

		::NJBNBKMNBOP* __cctor_b__23_0()
		{
			return ((::NJBNBKMNBOP*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJBNBKMNBOP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
