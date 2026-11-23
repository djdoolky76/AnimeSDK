#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BF0DA9333D08C555;
namespace System { template <typename T1, typename T2> class E370971BED0FB651; }
namespace UnityEngine { class TerrainLayer; }

#define F922AF60900157FE_F5628F8349D4A8A6_EC97EA1EB3769D0A_OFFSET UNITYSDK_OFFSET(0x387E380)
#define F922AF60900157FE_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x387E810)
#define F922AF60900157FE_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F922AF60900157FE_F5628F8349D4A8A6_TypeDefinitionIndex = 18039;

class F922AF60900157FE_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::F922AF60900157FE_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::F922AF60900157FE_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(F922AF60900157FE_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::E370971BED0FB651<::UnityEngine::TerrainLayer*, ::BF0DA9333D08C555*>** StaticGet_BCB5776C6392BCE4()
	{
		return (::System::E370971BED0FB651<::UnityEngine::TerrainLayer*, ::BF0DA9333D08C555*>**)Il2CppClass::FromTypeDefinitionIndex(F922AF60900157FE_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F922AF60900157FE_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F922AF60900157FE_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::BF0DA9333D08C555* EC97EA1EB3769D0A(::UnityEngine::TerrainLayer* B3F59769FF194988)
	{
		return ((::BF0DA9333D08C555*(*)(::PVOID, ::UnityEngine::TerrainLayer*))((::PBYTE)hIl2Cpp + F922AF60900157FE_F5628F8349D4A8A6_EC97EA1EB3769D0A_OFFSET))(this, B3F59769FF194988);
	}
};
