#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJNOEKPLPCL;
namespace System { class Object; }

#define AJNOEKPLPCL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20636880)
#define AJNOEKPLPCL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x206368C0)
#define AJNOEKPLPCL___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x206368D0)

inline static constexpr unsigned int AJNOEKPLPCL___c_TypeDefinitionIndex = 34366;

	class AJNOEKPLPCL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32220);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AJNOEKPLPCL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNOEKPLPCL___C_CTOR_OFFSET))(this);
		}

		::AJNOEKPLPCL* __cctor_b__53_0()
		{
			return ((::AJNOEKPLPCL*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNOEKPLPCL___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
