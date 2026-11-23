#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class B02A84909AE1658A;
namespace System { template <typename T1, typename T2> class E370971BED0FB651; }
namespace UnityEngine { class Collider; }

#define B938A40D5E65343D_F5628F8349D4A8A6_EC4D2B952BCAB8EB_OFFSET UNITYSDK_OFFSET(0x38438D0)
#define B938A40D5E65343D_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3843A70)
#define B938A40D5E65343D_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B938A40D5E65343D_F5628F8349D4A8A6_TypeDefinitionIndex = 17956;

class B938A40D5E65343D_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::B938A40D5E65343D_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::B938A40D5E65343D_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(B938A40D5E65343D_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::E370971BED0FB651<::UnityEngine::Collider*, ::B02A84909AE1658A*>** StaticGet_E3CEE43317B9E051()
	{
		return (::System::E370971BED0FB651<::UnityEngine::Collider*, ::B02A84909AE1658A*>**)Il2CppClass::FromTypeDefinitionIndex(B938A40D5E65343D_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + B938A40D5E65343D_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B938A40D5E65343D_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::B02A84909AE1658A* EC4D2B952BCAB8EB(::UnityEngine::Collider* B3F59769FF194988)
	{
		return ((::B02A84909AE1658A*(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + B938A40D5E65343D_F5628F8349D4A8A6_EC4D2B952BCAB8EB_OFFSET))(this, B3F59769FF194988);
	}
};
