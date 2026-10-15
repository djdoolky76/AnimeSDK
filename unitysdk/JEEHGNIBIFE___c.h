#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JEEHGNIBIFE;
namespace System { class Object; }

#define JEEHGNIBIFE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6E9880)
#define JEEHGNIBIFE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6E98B0)
#define JEEHGNIBIFE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E6E98C0)

inline static constexpr unsigned int JEEHGNIBIFE___c_TypeDefinitionIndex = 26205;

	class JEEHGNIBIFE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5C480);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEEHGNIBIFE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEEHGNIBIFE___C_CTOR_OFFSET))(this);
		}

		::JEEHGNIBIFE* __cctor_b__28_0()
		{
			return ((::JEEHGNIBIFE*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEEHGNIBIFE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
