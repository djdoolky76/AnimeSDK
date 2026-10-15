#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DOEJLDNIDED;
namespace System { class Object; }

#define DOEJLDNIDED___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1D10E0)
#define DOEJLDNIDED___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1D1120)
#define DOEJLDNIDED___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E1D1130)

inline static constexpr unsigned int DOEJLDNIDED___c_TypeDefinitionIndex = 33353;

	class DOEJLDNIDED___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x37BF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DOEJLDNIDED___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOEJLDNIDED___C_CTOR_OFFSET))(this);
		}

		::DOEJLDNIDED* __cctor_b__23_0()
		{
			return ((::DOEJLDNIDED*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOEJLDNIDED___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
