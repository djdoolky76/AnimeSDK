#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AEBNHMHDMNP;
namespace System { class Object; }

#define AEBNHMHDMNP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDB9AF0)
#define AEBNHMHDMNP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDB9B30)
#define AEBNHMHDMNP___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1DDB9B40)

inline static constexpr unsigned int AEBNHMHDMNP___c_TypeDefinitionIndex = 33601;

	class AEBNHMHDMNP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x334F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AEBNHMHDMNP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEBNHMHDMNP___C_CTOR_OFFSET))(this);
		}

		::AEBNHMHDMNP* __cctor_b__38_0()
		{
			return ((::AEBNHMHDMNP*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEBNHMHDMNP___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
