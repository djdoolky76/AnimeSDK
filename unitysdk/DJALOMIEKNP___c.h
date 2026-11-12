#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DJALOMIEKNP;
namespace System { class Object; }

#define DJALOMIEKNP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4A1490)
#define DJALOMIEKNP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4A14D0)
#define DJALOMIEKNP___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F4A14E0)

inline static constexpr unsigned int DJALOMIEKNP___c_TypeDefinitionIndex = 33216;

	class DJALOMIEKNP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x33130);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJALOMIEKNP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJALOMIEKNP___C_CTOR_OFFSET))(this);
		}

		::DJALOMIEKNP* __cctor_b__33_0()
		{
			return ((::DJALOMIEKNP*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJALOMIEKNP___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
