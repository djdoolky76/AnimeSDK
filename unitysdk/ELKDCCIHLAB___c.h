#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELKDCCIHLAB;
namespace System { class Object; }

#define ELKDCCIHLAB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2D59B0)
#define ELKDCCIHLAB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2D59F0)
#define ELKDCCIHLAB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E2D5A00)

inline static constexpr unsigned int ELKDCCIHLAB___c_TypeDefinitionIndex = 26923;

	class ELKDCCIHLAB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x51510);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELKDCCIHLAB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELKDCCIHLAB___C_CTOR_OFFSET))(this);
		}

		::ELKDCCIHLAB* __cctor_b__28_0()
		{
			return ((::ELKDCCIHLAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELKDCCIHLAB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
