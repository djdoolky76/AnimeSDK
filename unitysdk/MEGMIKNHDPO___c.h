#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MEGMIKNHDPO;
namespace System { class Object; }

#define MEGMIKNHDPO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9DE9C0)
#define MEGMIKNHDPO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9DEA00)
#define MEGMIKNHDPO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E9DEA10)

inline static constexpr unsigned int MEGMIKNHDPO___c_TypeDefinitionIndex = 31597;

	class MEGMIKNHDPO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4D3E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MEGMIKNHDPO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEGMIKNHDPO___C_CTOR_OFFSET))(this);
		}

		::MEGMIKNHDPO* __cctor_b__23_0()
		{
			return ((::MEGMIKNHDPO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEGMIKNHDPO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
