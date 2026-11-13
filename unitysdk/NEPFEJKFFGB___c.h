#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NEPFEJKFFGB;
namespace System { class Object; }

#define NEPFEJKFFGB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE9A1F0)
#define NEPFEJKFFGB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE9A220)
#define NEPFEJKFFGB___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1FE9A230)

inline static constexpr unsigned int NEPFEJKFFGB___c_TypeDefinitionIndex = 35112;

	class NEPFEJKFFGB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5FB30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEPFEJKFFGB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEPFEJKFFGB___C_CTOR_OFFSET))(this);
		}

		::NEPFEJKFFGB* __cctor_b__18_0()
		{
			return ((::NEPFEJKFFGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEPFEJKFFGB___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
