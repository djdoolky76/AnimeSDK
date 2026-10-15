#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NJJNLJAPMMK;
namespace System { class Object; }

#define NJJNLJAPMMK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB13190)
#define NJJNLJAPMMK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB131D0)
#define NJJNLJAPMMK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EB131E0)

inline static constexpr unsigned int NJJNLJAPMMK___c_TypeDefinitionIndex = 27143;

	class NJJNLJAPMMK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x68A70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJJNLJAPMMK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJJNLJAPMMK___C_CTOR_OFFSET))(this);
		}

		::NJJNLJAPMMK* __cctor_b__23_0()
		{
			return ((::NJJNLJAPMMK*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJJNLJAPMMK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
