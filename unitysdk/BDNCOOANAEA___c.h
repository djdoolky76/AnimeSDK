#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDNCOOANAEA;
namespace System { class Object; }

#define BDNCOOANAEA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F9F2DD0)
#define BDNCOOANAEA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F9F2E10)
#define BDNCOOANAEA___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1F9F2E20)

inline static constexpr unsigned int BDNCOOANAEA___c_TypeDefinitionIndex = 30128;

	class BDNCOOANAEA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47A90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDNCOOANAEA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDNCOOANAEA___C_CTOR_OFFSET))(this);
		}

		::BDNCOOANAEA* __cctor_b__38_0()
		{
			return ((::BDNCOOANAEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDNCOOANAEA___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
