#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JKGILKGILAI;
namespace System { class Object; }

#define JKGILKGILAI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA96C20)
#define JKGILKGILAI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA96C60)
#define JKGILKGILAI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FA96C70)

inline static constexpr unsigned int JKGILKGILAI___c_TypeDefinitionIndex = 30547;

	class JKGILKGILAI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50610);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKGILKGILAI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKGILKGILAI___C_CTOR_OFFSET))(this);
		}

		::JKGILKGILAI* __cctor_b__28_0()
		{
			return ((::JKGILKGILAI*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKGILKGILAI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
