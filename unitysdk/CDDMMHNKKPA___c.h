#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDDMMHNKKPA;
namespace System { class Object; }

#define CDDMMHNKKPA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E083BB0)
#define CDDMMHNKKPA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E083BE0)
#define CDDMMHNKKPA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E083BF0)

inline static constexpr unsigned int CDDMMHNKKPA___c_TypeDefinitionIndex = 33554;

	class CDDMMHNKKPA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xF010);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDDMMHNKKPA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDDMMHNKKPA___C_CTOR_OFFSET))(this);
		}

		::CDDMMHNKKPA* __cctor_b__33_0()
		{
			return ((::CDDMMHNKKPA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDDMMHNKKPA___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
