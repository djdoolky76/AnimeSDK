#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JFKAOMCJIKK;
namespace System { class Object; }

#define JFKAOMCJIKK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E72E260)
#define JFKAOMCJIKK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E72E2A0)
#define JFKAOMCJIKK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E72E2B0)

inline static constexpr unsigned int JFKAOMCJIKK___c_TypeDefinitionIndex = 28298;

	class JFKAOMCJIKK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5FE20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFKAOMCJIKK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFKAOMCJIKK___C_CTOR_OFFSET))(this);
		}

		::JFKAOMCJIKK* __cctor_b__28_0()
		{
			return ((::JFKAOMCJIKK*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFKAOMCJIKK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
