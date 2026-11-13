#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EDDIFENDEFG;
namespace System { class Object; }

#define EDDIFENDEFG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F382830)
#define EDDIFENDEFG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F382860)
#define EDDIFENDEFG___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1F382870)

inline static constexpr unsigned int EDDIFENDEFG___c_TypeDefinitionIndex = 35014;

	class EDDIFENDEFG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x459C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDDIFENDEFG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDDIFENDEFG___C_CTOR_OFFSET))(this);
		}

		::EDDIFENDEFG* __cctor_b__38_0()
		{
			return ((::EDDIFENDEFG*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDDIFENDEFG___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
