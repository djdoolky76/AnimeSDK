#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJLNEBBMMOE;
namespace System { class Object; }

#define BJLNEBBMMOE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF48DC0)
#define BJLNEBBMMOE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF48DF0)
#define BJLNEBBMMOE___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DF48E00)

inline static constexpr unsigned int BJLNEBBMMOE___c_TypeDefinitionIndex = 33635;

	class BJLNEBBMMOE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x49CE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BJLNEBBMMOE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJLNEBBMMOE___C_CTOR_OFFSET))(this);
		}

		::BJLNEBBMMOE* __cctor_b__33_0()
		{
			return ((::BJLNEBBMMOE*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJLNEBBMMOE___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
