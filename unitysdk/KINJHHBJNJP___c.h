#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KINJHHBJNJP;
namespace System { class Object; }

#define KINJHHBJNJP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E865120)
#define KINJHHBJNJP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E865160)
#define KINJHHBJNJP___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E865170)

inline static constexpr unsigned int KINJHHBJNJP___c_TypeDefinitionIndex = 29624;

	class KINJHHBJNJP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1B850);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KINJHHBJNJP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KINJHHBJNJP___C_CTOR_OFFSET))(this);
		}

		::KINJHHBJNJP* __cctor_b__33_0()
		{
			return ((::KINJHHBJNJP*(*)(::PVOID))((::PBYTE)hIl2Cpp + KINJHHBJNJP___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
