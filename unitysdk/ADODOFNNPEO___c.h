#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ADODOFNNPEO;
namespace System { class Object; }

#define ADODOFNNPEO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDB8690)
#define ADODOFNNPEO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDB86C0)
#define ADODOFNNPEO___C___CCTOR_B__68_0_OFFSET UNITYSDK_OFFSET(0x1DDB86D0)

inline static constexpr unsigned int ADODOFNNPEO___c_TypeDefinitionIndex = 32013;

	class ADODOFNNPEO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x332A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ADODOFNNPEO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADODOFNNPEO___C_CTOR_OFFSET))(this);
		}

		::ADODOFNNPEO* __cctor_b__68_0()
		{
			return ((::ADODOFNNPEO*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADODOFNNPEO___C___CCTOR_B__68_0_OFFSET))(this);
		}

	};
