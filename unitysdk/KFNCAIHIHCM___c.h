#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFNCAIHIHCM;
namespace System { class Object; }

#define KFNCAIHIHCM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E801890)
#define KFNCAIHIHCM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8018D0)
#define KFNCAIHIHCM___C___CCTOR_B__248_0_OFFSET UNITYSDK_OFFSET(0x1E8018E0)

inline static constexpr unsigned int KFNCAIHIHCM___c_TypeDefinitionIndex = 29392;

	class KFNCAIHIHCM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x14030);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KFNCAIHIHCM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFNCAIHIHCM___C_CTOR_OFFSET))(this);
		}

		::KFNCAIHIHCM* __cctor_b__248_0()
		{
			return ((::KFNCAIHIHCM*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFNCAIHIHCM___C___CCTOR_B__248_0_OFFSET))(this);
		}

	};
