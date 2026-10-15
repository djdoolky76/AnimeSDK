#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OMPEMGHMDPM;
namespace System { class Object; }

#define OMPEMGHMDPM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE90D30)
#define OMPEMGHMDPM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE90D70)
#define OMPEMGHMDPM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DE90D80)

inline static constexpr unsigned int OMPEMGHMDPM___c_TypeDefinitionIndex = 27766;

	class OMPEMGHMDPM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x23890);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMPEMGHMDPM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMPEMGHMDPM___C_CTOR_OFFSET))(this);
		}

		::OMPEMGHMDPM* __cctor_b__28_0()
		{
			return ((::OMPEMGHMDPM*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMPEMGHMDPM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
