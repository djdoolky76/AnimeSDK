#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHHMLENLDEF;
namespace System { class Object; }

#define AHHMLENLDEF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E243680)
#define AHHMLENLDEF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2436C0)
#define AHHMLENLDEF___C___CCTOR_B__68_0_OFFSET UNITYSDK_OFFSET(0x1E2436D0)

inline static constexpr unsigned int AHHMLENLDEF___c_TypeDefinitionIndex = 34819;

	class AHHMLENLDEF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x39CC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHHMLENLDEF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHHMLENLDEF___C_CTOR_OFFSET))(this);
		}

		::AHHMLENLDEF* __cctor_b__68_0()
		{
			return ((::AHHMLENLDEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHHMLENLDEF___C___CCTOR_B__68_0_OFFSET))(this);
		}

	};
