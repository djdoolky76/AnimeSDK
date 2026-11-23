#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A958BCFBBED70564;
namespace System { template <typename T1, typename T2> class E370971BED0FB651; }
namespace UnityEngine { class Material; }

#define E56EE88CEBE84A9D_F5628F8349D4A8A6_EC97EA1EB3769D0A_OFFSET UNITYSDK_OFFSET(0x3808920)
#define E56EE88CEBE84A9D_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3808980)
#define E56EE88CEBE84A9D_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E56EE88CEBE84A9D_F5628F8349D4A8A6_TypeDefinitionIndex = 17826;

class E56EE88CEBE84A9D_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::E56EE88CEBE84A9D_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::E56EE88CEBE84A9D_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(E56EE88CEBE84A9D_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::E370971BED0FB651<::UnityEngine::Material*, ::A958BCFBBED70564*>** StaticGet_BCB5776C6392BCE4()
	{
		return (::System::E370971BED0FB651<::UnityEngine::Material*, ::A958BCFBBED70564*>**)Il2CppClass::FromTypeDefinitionIndex(E56EE88CEBE84A9D_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E56EE88CEBE84A9D_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E56EE88CEBE84A9D_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::A958BCFBBED70564* EC97EA1EB3769D0A(::UnityEngine::Material* B3F59769FF194988)
	{
		return ((::A958BCFBBED70564*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + E56EE88CEBE84A9D_F5628F8349D4A8A6_EC97EA1EB3769D0A_OFFSET))(this, B3F59769FF194988);
	}
};
