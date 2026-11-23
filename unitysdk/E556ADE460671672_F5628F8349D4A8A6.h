#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { template <typename T> class Action_1; }

#define E556ADE460671672_F5628F8349D4A8A6_E985BFCE980B86D6_OFFSET UNITYSDK_OFFSET(0x3A108B0)
#define E556ADE460671672_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3A12390)
#define E556ADE460671672_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E556ADE460671672_F5628F8349D4A8A6_TypeDefinitionIndex = 12732;

class E556ADE460671672_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::E556ADE460671672_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::E556ADE460671672_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(E556ADE460671672_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>** StaticGet_AD64BB6C8EC2E491()
	{
		return (::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>**)Il2CppClass::FromTypeDefinitionIndex(E556ADE460671672_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E556ADE460671672_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E556ADE460671672_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Void E985BFCE980B86D6(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + E556ADE460671672_F5628F8349D4A8A6_E985BFCE980B86D6_OFFSET))(this, A6CAE7339066B0FB);
	}
};
