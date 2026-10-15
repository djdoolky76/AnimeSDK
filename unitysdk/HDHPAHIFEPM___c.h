#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HDHPAHIFEPM;
namespace System { class Object; }

#define HDHPAHIFEPM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E54CDB0)
#define HDHPAHIFEPM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E54CDF0)
#define HDHPAHIFEPM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E54CE00)

inline static constexpr unsigned int HDHPAHIFEPM___c_TypeDefinitionIndex = 28684;

	class HDHPAHIFEPM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x31E00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDHPAHIFEPM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDHPAHIFEPM___C_CTOR_OFFSET))(this);
		}

		::HDHPAHIFEPM* __cctor_b__28_0()
		{
			return ((::HDHPAHIFEPM*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDHPAHIFEPM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
