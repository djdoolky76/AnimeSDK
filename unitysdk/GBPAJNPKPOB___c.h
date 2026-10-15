#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GBPAJNPKPOB;
namespace System { class Object; }

#define GBPAJNPKPOB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E407580)
#define GBPAJNPKPOB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4075C0)
#define GBPAJNPKPOB___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E4075D0)

inline static constexpr unsigned int GBPAJNPKPOB___c_TypeDefinitionIndex = 31862;

	class GBPAJNPKPOB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xDAF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBPAJNPKPOB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPAJNPKPOB___C_CTOR_OFFSET))(this);
		}

		::GBPAJNPKPOB* __cctor_b__38_0()
		{
			return ((::GBPAJNPKPOB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPAJNPKPOB___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
