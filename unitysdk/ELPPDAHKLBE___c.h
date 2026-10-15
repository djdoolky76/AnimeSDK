#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELPPDAHKLBE;
namespace System { class Object; }

#define ELPPDAHKLBE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2AEC90)
#define ELPPDAHKLBE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2AECD0)
#define ELPPDAHKLBE___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E2AECE0)

inline static constexpr unsigned int ELPPDAHKLBE___c_TypeDefinitionIndex = 29275;

	class ELPPDAHKLBE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52920);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELPPDAHKLBE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELPPDAHKLBE___C_CTOR_OFFSET))(this);
		}

		::ELPPDAHKLBE* __cctor_b__18_0()
		{
			return ((::ELPPDAHKLBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELPPDAHKLBE___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
