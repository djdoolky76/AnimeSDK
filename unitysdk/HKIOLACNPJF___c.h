#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HKIOLACNPJF;
namespace System { class Object; }

#define HKIOLACNPJF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5B3640)
#define HKIOLACNPJF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5B3680)
#define HKIOLACNPJF___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E5B3690)

inline static constexpr unsigned int HKIOLACNPJF___c_TypeDefinitionIndex = 26546;

	class HKIOLACNPJF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45830);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKIOLACNPJF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKIOLACNPJF___C_CTOR_OFFSET))(this);
		}

		::HKIOLACNPJF* __cctor_b__33_0()
		{
			return ((::HKIOLACNPJF*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKIOLACNPJF___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
