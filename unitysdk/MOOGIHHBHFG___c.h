#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MOOGIHHBHFG;
namespace System { class Object; }

#define MOOGIHHBHFG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA846B0)
#define MOOGIHHBHFG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA846F0)
#define MOOGIHHBHFG___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1EA84700)

inline static constexpr unsigned int MOOGIHHBHFG___c_TypeDefinitionIndex = 28012;

	class MOOGIHHBHFG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5B1F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOOGIHHBHFG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOGIHHBHFG___C_CTOR_OFFSET))(this);
		}

		::MOOGIHHBHFG* __cctor_b__33_0()
		{
			return ((::MOOGIHHBHFG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOGIHHBHFG___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
