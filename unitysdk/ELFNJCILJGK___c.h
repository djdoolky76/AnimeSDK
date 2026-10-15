#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELFNJCILJGK;
namespace System { class Object; }

#define ELFNJCILJGK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2CEE20)
#define ELFNJCILJGK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2CEE60)
#define ELFNJCILJGK___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E2CEE70)

inline static constexpr unsigned int ELFNJCILJGK___c_TypeDefinitionIndex = 30379;

	class ELFNJCILJGK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50210);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELFNJCILJGK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELFNJCILJGK___C_CTOR_OFFSET))(this);
		}

		::ELFNJCILJGK* __cctor_b__18_0()
		{
			return ((::ELFNJCILJGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELFNJCILJGK___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
