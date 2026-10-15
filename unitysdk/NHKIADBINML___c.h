#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NHKIADBINML;
namespace System { class Object; }

#define NHKIADBINML___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAF24A0)
#define NHKIADBINML___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAF24E0)
#define NHKIADBINML___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EAF24F0)

inline static constexpr unsigned int NHKIADBINML___c_TypeDefinitionIndex = 31122;

	class NHKIADBINML___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x64D10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NHKIADBINML___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHKIADBINML___C_CTOR_OFFSET))(this);
		}

		::NHKIADBINML* __cctor_b__28_0()
		{
			return ((::NHKIADBINML*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHKIADBINML___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
