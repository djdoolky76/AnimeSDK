#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHJBBHOOOBC;
namespace System { class Object; }

#define GHJBBHOOOBC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F77BD70)
#define GHJBBHOOOBC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F77BDB0)
#define GHJBBHOOOBC___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1F77BDC0)

inline static constexpr unsigned int GHJBBHOOOBC___c_TypeDefinitionIndex = 29307;

	class GHJBBHOOOBC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xFDB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHJBBHOOOBC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJBBHOOOBC___C_CTOR_OFFSET))(this);
		}

		::GHJBBHOOOBC* __cctor_b__53_0()
		{
			return ((::GHJBBHOOOBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJBBHOOOBC___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
