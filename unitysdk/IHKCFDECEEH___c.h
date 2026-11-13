#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IHKCFDECEEH;
namespace System { class Object; }

#define IHKCFDECEEH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F7FA590)
#define IHKCFDECEEH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F7FA5D0)
#define IHKCFDECEEH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F7FA5E0)

inline static constexpr unsigned int IHKCFDECEEH___c_TypeDefinitionIndex = 28542;

	class IHKCFDECEEH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x466E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IHKCFDECEEH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHKCFDECEEH___C_CTOR_OFFSET))(this);
		}

		::IHKCFDECEEH* __cctor_b__28_0()
		{
			return ((::IHKCFDECEEH*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHKCFDECEEH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
