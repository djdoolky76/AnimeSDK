#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GINKCKNPFDA;
namespace System { class Object; }

#define GINKCKNPFDA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4A2E30)
#define GINKCKNPFDA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4A2E70)
#define GINKCKNPFDA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E4A2E80)

inline static constexpr unsigned int GINKCKNPFDA___c_TypeDefinitionIndex = 33837;

	class GINKCKNPFDA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1AF30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GINKCKNPFDA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GINKCKNPFDA___C_CTOR_OFFSET))(this);
		}

		::GINKCKNPFDA* __cctor_b__33_0()
		{
			return ((::GINKCKNPFDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + GINKCKNPFDA___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
