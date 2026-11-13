#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FNDNOHGCGIE;
namespace System { class Object; }

#define FNDNOHGCGIE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x202D6780)
#define FNDNOHGCGIE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x202D67B0)
#define FNDNOHGCGIE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x202D67C0)

inline static constexpr unsigned int FNDNOHGCGIE___c_TypeDefinitionIndex = 31269;

	class FNDNOHGCGIE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4F580);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNDNOHGCGIE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNDNOHGCGIE___C_CTOR_OFFSET))(this);
		}

		::FNDNOHGCGIE* __cctor_b__28_0()
		{
			return ((::FNDNOHGCGIE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNDNOHGCGIE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
