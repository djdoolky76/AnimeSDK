#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class ADDF5F55A85EB950; }
namespace System { template <typename T> class Action_1; }

#define B6F733D33EA0C7BA_F5628F8349D4A8A6_A4D0A12DF137F34F_OFFSET UNITYSDK_OFFSET(0x3A5ACF0)
#define B6F733D33EA0C7BA_F5628F8349D4A8A6_E143475B35594537_OFFSET UNITYSDK_OFFSET(0x3A5B240)
#define B6F733D33EA0C7BA_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3A5D6D0)
#define B6F733D33EA0C7BA_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B6F733D33EA0C7BA_F5628F8349D4A8A6_TypeDefinitionIndex = 13007;

class B6F733D33EA0C7BA_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::B6F733D33EA0C7BA_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::B6F733D33EA0C7BA_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(B6F733D33EA0C7BA_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::ADDF5F55A85EB950<::System::String*>** StaticGet_E7075C39E6B63936()
	{
		return (::System::ADDF5F55A85EB950<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(B6F733D33EA0C7BA_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>** StaticGet_BFC2B29B610F5A11()
	{
		return (::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>**)Il2CppClass::FromTypeDefinitionIndex(B6F733D33EA0C7BA_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + B6F733D33EA0C7BA_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B6F733D33EA0C7BA_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Int32 E143475B35594537(::System::String* BB8C609F76620E45, ::System::String* A0A0D02932F12CFD)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + B6F733D33EA0C7BA_F5628F8349D4A8A6_E143475B35594537_OFFSET))(this, BB8C609F76620E45, A0A0D02932F12CFD);
	}

	::System::Void A4D0A12DF137F34F(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + B6F733D33EA0C7BA_F5628F8349D4A8A6_A4D0A12DF137F34F_OFFSET))(this, A6CAE7339066B0FB);
	}
};
