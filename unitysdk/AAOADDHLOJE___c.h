#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AAOADDHLOJE;
namespace System { class Object; }

#define AAOADDHLOJE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20313CE0)
#define AAOADDHLOJE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20313D20)
#define AAOADDHLOJE___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x20313D30)

inline static constexpr unsigned int AAOADDHLOJE___c_TypeDefinitionIndex = 28822;

	class AAOADDHLOJE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32B00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAOADDHLOJE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAOADDHLOJE___C_CTOR_OFFSET))(this);
		}

		::AAOADDHLOJE* __cctor_b__38_0()
		{
			return ((::AAOADDHLOJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAOADDHLOJE___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
