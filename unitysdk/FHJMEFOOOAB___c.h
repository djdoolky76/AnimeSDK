#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHJMEFOOOAB;
namespace System { class Object; }

#define FHJMEFOOOAB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20692D90)
#define FHJMEFOOOAB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20692DD0)
#define FHJMEFOOOAB___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x20692DE0)

inline static constexpr unsigned int FHJMEFOOOAB___c_TypeDefinitionIndex = 28344;

	class FHJMEFOOOAB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x41E90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHJMEFOOOAB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHJMEFOOOAB___C_CTOR_OFFSET))(this);
		}

		::FHJMEFOOOAB* __cctor_b__18_0()
		{
			return ((::FHJMEFOOOAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHJMEFOOOAB___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
