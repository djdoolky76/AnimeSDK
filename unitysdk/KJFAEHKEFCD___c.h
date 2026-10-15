#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KJFAEHKEFCD;
namespace System { class Object; }

#define KJFAEHKEFCD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E83DFE0)
#define KJFAEHKEFCD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E83E020)
#define KJFAEHKEFCD___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E83E030)

inline static constexpr unsigned int KJFAEHKEFCD___c_TypeDefinitionIndex = 25603;

	class KJFAEHKEFCD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x19FF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJFAEHKEFCD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFAEHKEFCD___C_CTOR_OFFSET))(this);
		}

		::KJFAEHKEFCD* __cctor_b__33_0()
		{
			return ((::KJFAEHKEFCD*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFAEHKEFCD___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
