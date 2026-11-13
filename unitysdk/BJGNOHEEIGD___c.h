#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJGNOHEEIGD;
namespace System { class Object; }

#define BJGNOHEEIGD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAD0A90)
#define BJGNOHEEIGD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FAD0AC0)
#define BJGNOHEEIGD___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FAD0AD0)

inline static constexpr unsigned int BJGNOHEEIGD___c_TypeDefinitionIndex = 31168;

	class BJGNOHEEIGD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x547B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BJGNOHEEIGD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJGNOHEEIGD___C_CTOR_OFFSET))(this);
		}

		::BJGNOHEEIGD* __cctor_b__33_0()
		{
			return ((::BJGNOHEEIGD*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJGNOHEEIGD___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
