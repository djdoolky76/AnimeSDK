#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define FE734A9626E6465E_A27AB6D7D199F1D1_OFFSET UNITYSDK_OFFSET(0x3F2E950)
#define FE734A9626E6465E__CCTOR_OFFSET UNITYSDK_OFFSET(0x3F2E9A0)

inline static constexpr unsigned int FE734A9626E6465E_TypeDefinitionIndex = 19957;

class FE734A9626E6465E : public ::System::Object
{
public:
	static ::System::Action_1<::System::Object*>** StaticGet_FE6BD4034BC274A4()
	{
		return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(FE734A9626E6465E_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FE734A9626E6465E__CCTOR_OFFSET))();
	}

	static ::System::Void A27AB6D7D199F1D1(::System::Object* BAF8A3E3C5E8EAEF)
	{
		return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + FE734A9626E6465E_A27AB6D7D199F1D1_OFFSET))(BAF8A3E3C5E8EAEF);
	}
};
