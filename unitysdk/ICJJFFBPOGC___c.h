#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ICJJFFBPOGC;
namespace System { class Object; }

#define ICJJFFBPOGC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6234A0)
#define ICJJFFBPOGC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6234D0)
#define ICJJFFBPOGC___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E6234E0)

inline static constexpr unsigned int ICJJFFBPOGC___c_TypeDefinitionIndex = 32133;

	class ICJJFFBPOGC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44B40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICJJFFBPOGC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICJJFFBPOGC___C_CTOR_OFFSET))(this);
		}

		::ICJJFFBPOGC* __cctor_b__18_0()
		{
			return ((::ICJJFFBPOGC*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICJJFFBPOGC___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
