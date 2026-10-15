#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AAOABMHALOJ;
namespace System { class Object; }

#define AAOABMHALOJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDC2E60)
#define AAOABMHALOJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDC2EA0)
#define AAOABMHALOJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DDC2EB0)

inline static constexpr unsigned int AAOABMHALOJ___c_TypeDefinitionIndex = 26106;

	class AAOABMHALOJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x37A20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAOABMHALOJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAOABMHALOJ___C_CTOR_OFFSET))(this);
		}

		::AAOABMHALOJ* __cctor_b__28_0()
		{
			return ((::AAOABMHALOJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAOABMHALOJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
