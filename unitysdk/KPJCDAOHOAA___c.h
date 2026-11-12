#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPJCDAOHOAA;
namespace System { class Object; }

#define KPJCDAOHOAA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBFA7E0)
#define KPJCDAOHOAA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FBFA810)
#define KPJCDAOHOAA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FBFA820)

inline static constexpr unsigned int KPJCDAOHOAA___c_TypeDefinitionIndex = 33288;

	class KPJCDAOHOAA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x247D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPJCDAOHOAA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPJCDAOHOAA___C_CTOR_OFFSET))(this);
		}

		::KPJCDAOHOAA* __cctor_b__28_0()
		{
			return ((::KPJCDAOHOAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPJCDAOHOAA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
