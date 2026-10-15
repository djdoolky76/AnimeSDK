#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPMONPAABKJ;
namespace System { class Object; }

#define EPMONPAABKJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3186D0)
#define EPMONPAABKJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E318710)
#define EPMONPAABKJ___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E318720)

inline static constexpr unsigned int EPMONPAABKJ___c_TypeDefinitionIndex = 30331;

	class EPMONPAABKJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x56B60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPMONPAABKJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPMONPAABKJ___C_CTOR_OFFSET))(this);
		}

		::EPMONPAABKJ* __cctor_b__33_0()
		{
			return ((::EPMONPAABKJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPMONPAABKJ___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
