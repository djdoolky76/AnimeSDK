#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define BECJPAKGDMA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1A9319D0)
#define BECJPAKGDMA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1A931A10)
#define BECJPAKGDMA___C__ONTASKBEGIN_B__6_0_OFFSET UNITYSDK_OFFSET(0x1A931A20)

inline static constexpr unsigned int BECJPAKGDMA___c_TypeDefinitionIndex = 59413;

	class BECJPAKGDMA___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__6_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x58B90);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x58B98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BECJPAKGDMA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BECJPAKGDMA___C_CTOR_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__6_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BECJPAKGDMA___C__ONTASKBEGIN_B__6_0_OFFSET))(this);
		}

	};
