#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JOCBDCIBNMG;
namespace System { class Object; }

#define JOCBDCIBNMG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20003620)
#define JOCBDCIBNMG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20003660)
#define JOCBDCIBNMG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x20003670)

inline static constexpr unsigned int JOCBDCIBNMG___c_TypeDefinitionIndex = 33692;

	class JOCBDCIBNMG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x67670);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOCBDCIBNMG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOCBDCIBNMG___C_CTOR_OFFSET))(this);
		}

		::JOCBDCIBNMG* __cctor_b__28_0()
		{
			return ((::JOCBDCIBNMG*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOCBDCIBNMG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
