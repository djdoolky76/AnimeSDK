#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFNCAIHIHCM;
namespace System { class Object; }

#define KFNCAIHIHCM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F53E8C0)
#define KFNCAIHIHCM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F53E900)
#define KFNCAIHIHCM___C___CCTOR_B__300_0_OFFSET UNITYSDK_OFFSET(0x1F53E910)

inline static constexpr unsigned int KFNCAIHIHCM___c_TypeDefinitionIndex = 30108;

	class KFNCAIHIHCM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xEC80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KFNCAIHIHCM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFNCAIHIHCM___C_CTOR_OFFSET))(this);
		}

		::KFNCAIHIHCM* __cctor_b__300_0()
		{
			return ((::KFNCAIHIHCM*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFNCAIHIHCM___C___CCTOR_B__300_0_OFFSET))(this);
		}

	};
