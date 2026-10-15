#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EACCOJLOPJL;
namespace System { class Object; }

#define EACCOJLOPJL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E223080)
#define EACCOJLOPJL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2230C0)
#define EACCOJLOPJL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E2230D0)

inline static constexpr unsigned int EACCOJLOPJL___c_TypeDefinitionIndex = 28697;

	class EACCOJLOPJL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x482D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EACCOJLOPJL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EACCOJLOPJL___C_CTOR_OFFSET))(this);
		}

		::EACCOJLOPJL* __cctor_b__23_0()
		{
			return ((::EACCOJLOPJL*(*)(::PVOID))((::PBYTE)hIl2Cpp + EACCOJLOPJL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
