#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KCEFGNINEBG;
namespace System { class Object; }

#define KCEFGNINEBG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB09DA0)
#define KCEFGNINEBG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB09DD0)
#define KCEFGNINEBG___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1FB09DE0)

inline static constexpr unsigned int KCEFGNINEBG___c_TypeDefinitionIndex = 34370;

	class KCEFGNINEBG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4F270);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCEFGNINEBG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEFGNINEBG___C_CTOR_OFFSET))(this);
		}

		::KCEFGNINEBG* __cctor_b__18_0()
		{
			return ((::KCEFGNINEBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEFGNINEBG___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
