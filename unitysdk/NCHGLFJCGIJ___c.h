#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NCHGLFJCGIJ;
namespace System { class Object; }

#define NCHGLFJCGIJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x202F2C10)
#define NCHGLFJCGIJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x202F2C40)
#define NCHGLFJCGIJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x202F2C50)

inline static constexpr unsigned int NCHGLFJCGIJ___c_TypeDefinitionIndex = 34314;

	class NCHGLFJCGIJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5CE70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCHGLFJCGIJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCHGLFJCGIJ___C_CTOR_OFFSET))(this);
		}

		::NCHGLFJCGIJ* __cctor_b__23_0()
		{
			return ((::NCHGLFJCGIJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCHGLFJCGIJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
