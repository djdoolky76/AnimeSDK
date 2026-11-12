#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPELDFBCCEK;
namespace System { class Object; }

#define EPELDFBCCEK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F5EED10)
#define EPELDFBCCEK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F5EED50)
#define EPELDFBCCEK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F5EED60)

inline static constexpr unsigned int EPELDFBCCEK___c_TypeDefinitionIndex = 30412;

	class EPELDFBCCEK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x53160);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPELDFBCCEK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPELDFBCCEK___C_CTOR_OFFSET))(this);
		}

		::EPELDFBCCEK* __cctor_b__28_0()
		{
			return ((::EPELDFBCCEK*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPELDFBCCEK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
