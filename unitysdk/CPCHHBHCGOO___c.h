#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CPCHHBHCGOO;
namespace System { class Object; }

#define CPCHHBHCGOO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x204E40E0)
#define CPCHHBHCGOO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x204E4110)
#define CPCHHBHCGOO___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x204E4120)

inline static constexpr unsigned int CPCHHBHCGOO___c_TypeDefinitionIndex = 27185;

	class CPCHHBHCGOO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x187B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPCHHBHCGOO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCHHBHCGOO___C_CTOR_OFFSET))(this);
		}

		::CPCHHBHCGOO* __cctor_b__18_0()
		{
			return ((::CPCHHBHCGOO*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCHHBHCGOO___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
