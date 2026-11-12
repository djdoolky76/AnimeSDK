#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FMNPJNPAMOA;
namespace System { class Object; }

#define FMNPJNPAMOA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6D6630)
#define FMNPJNPAMOA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6D6670)
#define FMNPJNPAMOA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F6D6680)

inline static constexpr unsigned int FMNPJNPAMOA___c_TypeDefinitionIndex = 26092;

	class FMNPJNPAMOA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4E4F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FMNPJNPAMOA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMNPJNPAMOA___C_CTOR_OFFSET))(this);
		}

		::FMNPJNPAMOA* __cctor_b__28_0()
		{
			return ((::FMNPJNPAMOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMNPJNPAMOA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
