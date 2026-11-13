#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KNBIPFELFOG;
namespace System { class Object; }

#define KNBIPFELFOG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDCE080)
#define KNBIPFELFOG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDCE0B0)
#define KNBIPFELFOG___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1FDCE0C0)

inline static constexpr unsigned int KNBIPFELFOG___c_TypeDefinitionIndex = 31472;

	class KNBIPFELFOG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1E450);
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
