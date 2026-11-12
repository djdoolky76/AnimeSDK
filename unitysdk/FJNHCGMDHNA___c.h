#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FJNHCGMDHNA;
namespace System { class Object; }

#define FJNHCGMDHNA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6ADB70)
#define FJNHCGMDHNA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6ADBA0)
#define FJNHCGMDHNA___C___CCTOR_B__63_0_OFFSET UNITYSDK_OFFSET(0x1F6ADBB0)

inline static constexpr unsigned int FJNHCGMDHNA___c_TypeDefinitionIndex = 33000;

	class FJNHCGMDHNA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47490);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FJNHCGMDHNA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNHCGMDHNA___C_CTOR_OFFSET))(this);
		}

		::FJNHCGMDHNA* __cctor_b__63_0()
		{
			return ((::FJNHCGMDHNA*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNHCGMDHNA___C___CCTOR_B__63_0_OFFSET))(this);
		}

	};
