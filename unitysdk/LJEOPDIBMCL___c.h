#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LJEOPDIBMCL;
namespace System { class Object; }

#define LJEOPDIBMCL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F97CA40)
#define LJEOPDIBMCL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F97CA80)
#define LJEOPDIBMCL___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1F97CA90)

inline static constexpr unsigned int LJEOPDIBMCL___c_TypeDefinitionIndex = 35212;

	class LJEOPDIBMCL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3C3A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJEOPDIBMCL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJEOPDIBMCL___C_CTOR_OFFSET))(this);
		}

		::LJEOPDIBMCL* __cctor_b__18_0()
		{
			return ((::LJEOPDIBMCL*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJEOPDIBMCL___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
