#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDNCOOANAEA;
namespace System { class Object; }

#define BDNCOOANAEA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E91C800)
#define BDNCOOANAEA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E91C840)
#define BDNCOOANAEA___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E91C850)

inline static constexpr unsigned int BDNCOOANAEA___c_TypeDefinitionIndex = 29412;

	class BDNCOOANAEA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3EA40);
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
