#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KNBIPFELFOG;
namespace System { class Object; }

#define KNBIPFELFOG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBBA500)
#define KNBIPFELFOG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FBBA530)
#define KNBIPFELFOG___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1FBBA540)

inline static constexpr unsigned int KNBIPFELFOG___c_TypeDefinitionIndex = 31472;

	class KNBIPFELFOG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1B670);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNBIPFELFOG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBIPFELFOG___C_CTOR_OFFSET))(this);
		}

		::KNBIPFELFOG* __cctor_b__43_0()
		{
			return ((::KNBIPFELFOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBIPFELFOG___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
