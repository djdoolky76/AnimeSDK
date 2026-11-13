#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HBKDINBIIGK;
namespace System { class Object; }

#define HBKDINBIIGK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x200AE790)
#define HBKDINBIIGK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x200AE7D0)
#define HBKDINBIIGK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x200AE7E0)

inline static constexpr unsigned int HBKDINBIIGK___c_TypeDefinitionIndex = 30314;

	class HBKDINBIIGK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x20F40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBKDINBIIGK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBKDINBIIGK___C_CTOR_OFFSET))(this);
		}

		::HBKDINBIIGK* __cctor_b__28_0()
		{
			return ((::HBKDINBIIGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBKDINBIIGK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
