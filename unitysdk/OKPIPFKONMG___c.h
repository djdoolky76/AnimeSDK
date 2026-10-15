#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OKPIPFKONMG;
namespace System { class Object; }

#define OKPIPFKONMG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE74AB0)
#define OKPIPFKONMG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE74AE0)
#define OKPIPFKONMG___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DE74AF0)

inline static constexpr unsigned int OKPIPFKONMG___c_TypeDefinitionIndex = 33231;

	class OKPIPFKONMG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x20AD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKPIPFKONMG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPIPFKONMG___C_CTOR_OFFSET))(this);
		}

		::OKPIPFKONMG* __cctor_b__33_0()
		{
			return ((::OKPIPFKONMG*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPIPFKONMG___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
