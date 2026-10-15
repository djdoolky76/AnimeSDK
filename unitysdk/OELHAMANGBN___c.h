#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OELHAMANGBN;
namespace System { class Object; }

#define OELHAMANGBN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE00980)
#define OELHAMANGBN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE009C0)
#define OELHAMANGBN___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1DE009D0)

inline static constexpr unsigned int OELHAMANGBN___c_TypeDefinitionIndex = 25125;

	class OELHAMANGBN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x14450);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OELHAMANGBN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OELHAMANGBN___C_CTOR_OFFSET))(this);
		}

		::OELHAMANGBN* __cctor_b__38_0()
		{
			return ((::OELHAMANGBN*(*)(::PVOID))((::PBYTE)hIl2Cpp + OELHAMANGBN___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
