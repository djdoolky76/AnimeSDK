#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HOKKGKCCHHL;
namespace System { class Object; }

#define HOKKGKCCHHL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5BE270)
#define HOKKGKCCHHL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5BE2A0)
#define HOKKGKCCHHL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E5BE2B0)

inline static constexpr unsigned int HOKKGKCCHHL___c_TypeDefinitionIndex = 30483;

	class HOKKGKCCHHL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3D7C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOKKGKCCHHL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOKKGKCCHHL___C_CTOR_OFFSET))(this);
		}

		::HOKKGKCCHHL* __cctor_b__28_0()
		{
			return ((::HOKKGKCCHHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOKKGKCCHHL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
