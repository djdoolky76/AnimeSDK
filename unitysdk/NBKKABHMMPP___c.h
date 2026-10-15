#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NBKKABHMMPP;
namespace System { class Object; }

#define NBKKABHMMPP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAA6FC0)
#define NBKKABHMMPP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAA7000)
#define NBKKABHMMPP___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1EAA7010)

inline static constexpr unsigned int NBKKABHMMPP___c_TypeDefinitionIndex = 31643;

	class NBKKABHMMPP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E330);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBKKABHMMPP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBKKABHMMPP___C_CTOR_OFFSET))(this);
		}

		::NBKKABHMMPP* __cctor_b__58_0()
		{
			return ((::NBKKABHMMPP*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBKKABHMMPP___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};
