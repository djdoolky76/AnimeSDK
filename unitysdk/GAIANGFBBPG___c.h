#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GAIANGFBBPG;
namespace System { class Object; }

#define GAIANGFBBPG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3EFB50)
#define GAIANGFBBPG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3EFB90)
#define GAIANGFBBPG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E3EFBA0)

inline static constexpr unsigned int GAIANGFBBPG___c_TypeDefinitionIndex = 29995;

	class GAIANGFBBPG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3100);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GAIANGFBBPG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAIANGFBBPG___C_CTOR_OFFSET))(this);
		}

		::GAIANGFBBPG* __cctor_b__28_0()
		{
			return ((::GAIANGFBBPG*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAIANGFBBPG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
