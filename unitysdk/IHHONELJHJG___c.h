#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IHHONELJHJG;
namespace System { class Object; }

#define IHHONELJHJG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F7F5710)
#define IHHONELJHJG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F7F5750)
#define IHHONELJHJG___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F7F5760)

inline static constexpr unsigned int IHHONELJHJG___c_TypeDefinitionIndex = 32708;

	class IHHONELJHJG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x466A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IHHONELJHJG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHHONELJHJG___C_CTOR_OFFSET))(this);
		}

		::IHHONELJHJG* __cctor_b__33_0()
		{
			return ((::IHHONELJHJG*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHHONELJHJG___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
