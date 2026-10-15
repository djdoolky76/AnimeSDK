#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EAAHHGIGLNN;
namespace System { class Object; }

#define EAAHHGIGLNN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1F3B60)
#define EAAHHGIGLNN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1F3BA0)
#define EAAHHGIGLNN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E1F3BB0)

inline static constexpr unsigned int EAAHHGIGLNN___c_TypeDefinitionIndex = 32103;

	class EAAHHGIGLNN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3BFB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EAAHHGIGLNN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAAHHGIGLNN___C_CTOR_OFFSET))(this);
		}

		::EAAHHGIGLNN* __cctor_b__28_0()
		{
			return ((::EAAHHGIGLNN*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAAHHGIGLNN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
