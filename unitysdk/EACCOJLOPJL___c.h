#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EACCOJLOPJL;
namespace System { class Object; }

#define EACCOJLOPJL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F5032F0)
#define EACCOJLOPJL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F503330)
#define EACCOJLOPJL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F503340)

inline static constexpr unsigned int EACCOJLOPJL___c_TypeDefinitionIndex = 29287;

	class EACCOJLOPJL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44A10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EACCOJLOPJL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EACCOJLOPJL___C_CTOR_OFFSET))(this);
		}

		::EACCOJLOPJL* __cctor_b__23_0()
		{
			return ((::EACCOJLOPJL*(*)(::PVOID))((::PBYTE)hIl2Cpp + EACCOJLOPJL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
