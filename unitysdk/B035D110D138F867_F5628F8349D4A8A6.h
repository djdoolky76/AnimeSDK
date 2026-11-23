#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class ADDF5F55A85EB950; }
namespace System { template <typename T> class Action_1; }

#define B035D110D138F867_F5628F8349D4A8A6_BB4F83A6034D63BE_OFFSET UNITYSDK_OFFSET(0x3953020)
#define B035D110D138F867_F5628F8349D4A8A6_E8433DEE754C30E7_OFFSET UNITYSDK_OFFSET(0x39531C0)
#define B035D110D138F867_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3955220)
#define B035D110D138F867_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B035D110D138F867_F5628F8349D4A8A6_TypeDefinitionIndex = 12432;

class B035D110D138F867_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::B035D110D138F867_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::B035D110D138F867_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(B035D110D138F867_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::ADDF5F55A85EB950<::System::String*>** StaticGet_E4AE7C6234D30C14()
	{
		return (::System::ADDF5F55A85EB950<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(B035D110D138F867_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>** StaticGet_F2C54999C1BBBACC()
	{
		return (::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>**)Il2CppClass::FromTypeDefinitionIndex(B035D110D138F867_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + B035D110D138F867_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B035D110D138F867_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Int32 E8433DEE754C30E7(::System::String* BB8C609F76620E45, ::System::String* A0A0D02932F12CFD)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + B035D110D138F867_F5628F8349D4A8A6_E8433DEE754C30E7_OFFSET))(this, BB8C609F76620E45, A0A0D02932F12CFD);
	}

	::System::Void BB4F83A6034D63BE(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + B035D110D138F867_F5628F8349D4A8A6_BB4F83A6034D63BE_OFFSET))(this, A6CAE7339066B0FB);
	}
};
