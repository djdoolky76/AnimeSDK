#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IAFJANHGCLL;
namespace System { class Object; }

#define IAFJANHGCLL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F9011B0)
#define IAFJANHGCLL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F9011F0)
#define IAFJANHGCLL___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1F901200)

inline static constexpr unsigned int IAFJANHGCLL___c_TypeDefinitionIndex = 32077;

	class IAFJANHGCLL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45940);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IAFJANHGCLL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAFJANHGCLL___C_CTOR_OFFSET))(this);
		}

		::IAFJANHGCLL* __cctor_b__18_0()
		{
			return ((::IAFJANHGCLL*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAFJANHGCLL___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
