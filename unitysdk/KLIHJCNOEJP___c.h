#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLIHJCNOEJP;
namespace System { class Object; }

#define KLIHJCNOEJP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E88CAC0)
#define KLIHJCNOEJP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E88CB00)
#define KLIHJCNOEJP___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E88CB10)

inline static constexpr unsigned int KLIHJCNOEJP___c_TypeDefinitionIndex = 29319;

	class KLIHJCNOEJP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x209D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLIHJCNOEJP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLIHJCNOEJP___C_CTOR_OFFSET))(this);
		}

		::KLIHJCNOEJP* __cctor_b__43_0()
		{
			return ((::KLIHJCNOEJP*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLIHJCNOEJP___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
