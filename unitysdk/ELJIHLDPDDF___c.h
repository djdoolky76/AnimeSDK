#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELJIHLDPDDF;
namespace System { class Object; }

#define ELJIHLDPDDF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x206CB650)
#define ELJIHLDPDDF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x206CB690)
#define ELJIHLDPDDF___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x206CB6A0)

inline static constexpr unsigned int ELJIHLDPDDF___c_TypeDefinitionIndex = 34710;

	class ELJIHLDPDDF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x46E10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELJIHLDPDDF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJIHLDPDDF___C_CTOR_OFFSET))(this);
		}

		::ELJIHLDPDDF* __cctor_b__18_0()
		{
			return ((::ELJIHLDPDDF*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJIHLDPDDF___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
