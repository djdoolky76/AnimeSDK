#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DBOMCCEIFJO;
namespace System { class Object; }

#define DBOMCCEIFJO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x202B9090)
#define DBOMCCEIFJO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x202B90D0)
#define DBOMCCEIFJO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x202B90E0)

inline static constexpr unsigned int DBOMCCEIFJO___c_TypeDefinitionIndex = 34473;

	class DBOMCCEIFJO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1DFB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBOMCCEIFJO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBOMCCEIFJO___C_CTOR_OFFSET))(this);
		}

		::DBOMCCEIFJO* __cctor_b__23_0()
		{
			return ((::DBOMCCEIFJO*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBOMCCEIFJO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
