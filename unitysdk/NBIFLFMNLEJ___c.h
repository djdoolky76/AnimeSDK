#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NBIFLFMNLEJ;
namespace System { class Object; }

#define NBIFLFMNLEJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2015C960)
#define NBIFLFMNLEJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2015C9A0)
#define NBIFLFMNLEJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x2015C9B0)

inline static constexpr unsigned int NBIFLFMNLEJ___c_TypeDefinitionIndex = 32822;

	class NBIFLFMNLEJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x58CB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBIFLFMNLEJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIFLFMNLEJ___C_CTOR_OFFSET))(this);
		}

		::NBIFLFMNLEJ* __cctor_b__28_0()
		{
			return ((::NBIFLFMNLEJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIFLFMNLEJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
