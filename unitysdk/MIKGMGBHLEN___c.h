#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MIKGMGBHLEN;
namespace System { class Object; }

#define MIKGMGBHLEN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA67040)
#define MIKGMGBHLEN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA67080)
#define MIKGMGBHLEN___C___CCTOR_B__32_0_OFFSET UNITYSDK_OFFSET(0x1FA67090)

inline static constexpr unsigned int MIKGMGBHLEN___c_TypeDefinitionIndex = 26395;

	class MIKGMGBHLEN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4A950);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIKGMGBHLEN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIKGMGBHLEN___C_CTOR_OFFSET))(this);
		}

		::MIKGMGBHLEN* __cctor_b__32_0()
		{
			return ((::MIKGMGBHLEN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIKGMGBHLEN___C___CCTOR_B__32_0_OFFSET))(this);
		}

	};
