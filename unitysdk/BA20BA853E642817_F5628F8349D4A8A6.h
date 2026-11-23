#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Mesh; }

#define BA20BA853E642817_F5628F8349D4A8A6_BF9C8C91550986EC_OFFSET UNITYSDK_OFFSET(0x3DCC700)
#define BA20BA853E642817_F5628F8349D4A8A6_F97AEDBB0F8C1BD0_OFFSET UNITYSDK_OFFSET(0x3DCC750)
#define BA20BA853E642817_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3DCC7A0)
#define BA20BA853E642817_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BA20BA853E642817_F5628F8349D4A8A6_TypeDefinitionIndex = 20875;

class BA20BA853E642817_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::BA20BA853E642817_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::BA20BA853E642817_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(BA20BA853E642817_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Func_2<::UnityEngine::Mesh*, ::System::Boolean>** StaticGet_B25B9042DD5F4B8E()
	{
		return (::System::Func_2<::UnityEngine::Mesh*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(BA20BA853E642817_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::System::Func_2<::UnityEngine::Mesh*, ::System::Boolean>** StaticGet_F66507BF291AAAE8()
	{
		return (::System::Func_2<::UnityEngine::Mesh*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(BA20BA853E642817_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BA20BA853E642817_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BA20BA853E642817_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Boolean BF9C8C91550986EC(::UnityEngine::Mesh* E6A305882BEE348D)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + BA20BA853E642817_F5628F8349D4A8A6_BF9C8C91550986EC_OFFSET))(this, E6A305882BEE348D);
	}

	::System::Boolean F97AEDBB0F8C1BD0(::UnityEngine::Mesh* E6A305882BEE348D)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + BA20BA853E642817_F5628F8349D4A8A6_F97AEDBB0F8C1BD0_OFFSET))(this, E6A305882BEE348D);
	}
};
