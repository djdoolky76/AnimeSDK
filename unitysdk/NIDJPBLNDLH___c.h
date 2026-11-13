#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NIDJPBLNDLH;
namespace System { class Object; }

#define NIDJPBLNDLH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20417570)
#define NIDJPBLNDLH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x204175B0)
#define NIDJPBLNDLH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x204175C0)

inline static constexpr unsigned int NIDJPBLNDLH___c_TypeDefinitionIndex = 30294;

	class NIDJPBLNDLH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x615F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NIDJPBLNDLH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIDJPBLNDLH___C_CTOR_OFFSET))(this);
		}

		::NIDJPBLNDLH* __cctor_b__23_0()
		{
			return ((::NIDJPBLNDLH*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIDJPBLNDLH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
