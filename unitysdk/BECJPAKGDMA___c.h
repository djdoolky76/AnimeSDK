#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define BECJPAKGDMA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB7C6FF0)
#define BECJPAKGDMA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB7C7030)
#define BECJPAKGDMA___C__ONTASKBEGIN_B__6_0_OFFSET UNITYSDK_OFFSET(0xB7C7040)

inline static constexpr unsigned int BECJPAKGDMA___c_TypeDefinitionIndex = 59413;

	class BECJPAKGDMA___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__6_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x692B0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x692B8);
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
