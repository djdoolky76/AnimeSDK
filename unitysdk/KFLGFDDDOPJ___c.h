#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFLGFDDDOPJ;
namespace System { class Object; }

#define KFLGFDDDOPJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E81E160)
#define KFLGFDDDOPJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E81E1A0)
#define KFLGFDDDOPJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E81E1B0)

inline static constexpr unsigned int KFLGFDDDOPJ___c_TypeDefinitionIndex = 28950;

	class KFLGFDDDOPJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x14060);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KFLGFDDDOPJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLGFDDDOPJ___C_CTOR_OFFSET))(this);
		}

		::KFLGFDDDOPJ* __cctor_b__28_0()
		{
			return ((::KFLGFDDDOPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLGFDDDOPJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
