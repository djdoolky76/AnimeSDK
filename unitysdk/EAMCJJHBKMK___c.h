#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EAMCJJHBKMK;
namespace System { class Object; }

#define EAMCJJHBKMK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x203EFC90)
#define EAMCJJHBKMK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x203EFCD0)
#define EAMCJJHBKMK___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x203EFCE0)

inline static constexpr unsigned int EAMCJJHBKMK___c_TypeDefinitionIndex = 26990;

	class EAMCJJHBKMK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3F4E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EAMCJJHBKMK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAMCJJHBKMK___C_CTOR_OFFSET))(this);
		}

		::EAMCJJHBKMK* __cctor_b__43_0()
		{
			return ((::EAMCJJHBKMK*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAMCJJHBKMK___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
