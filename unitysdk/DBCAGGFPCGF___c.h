#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DBCAGGFPCGF;
namespace System { class Object; }

#define DBCAGGFPCGF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x202AB3E0)
#define DBCAGGFPCGF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x202AB420)
#define DBCAGGFPCGF___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x202AB430)

inline static constexpr unsigned int DBCAGGFPCGF___c_TypeDefinitionIndex = 30657;

	class DBCAGGFPCGF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1BF40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBCAGGFPCGF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBCAGGFPCGF___C_CTOR_OFFSET))(this);
		}

		::DBCAGGFPCGF* __cctor_b__38_0()
		{
			return ((::DBCAGGFPCGF*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBCAGGFPCGF___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
