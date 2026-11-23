#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E68AA4EB51923C98/E4B55EE0EC5CC11E.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define E3A3EB5706FFACBF_F5628F8349D4A8A6_A82F104F35BD28C3_OFFSET UNITYSDK_OFFSET(0x22ABA20)
#define E3A3EB5706FFACBF_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x22AC010)
#define E3A3EB5706FFACBF_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E3A3EB5706FFACBF_F5628F8349D4A8A6_TypeDefinitionIndex = 7070;

class E3A3EB5706FFACBF_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::E3A3EB5706FFACBF_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::E3A3EB5706FFACBF_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(E3A3EB5706FFACBF_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Func_2<::E68AA4EB51923C98::E4B55EE0EC5CC11E, ::System::Boolean>** StaticGet_A0A6FBB4DBE00BF4()
	{
		return (::System::Func_2<::E68AA4EB51923C98::E4B55EE0EC5CC11E, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(E3A3EB5706FFACBF_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E3A3EB5706FFACBF_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E3A3EB5706FFACBF_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Boolean A82F104F35BD28C3(::E68AA4EB51923C98::E4B55EE0EC5CC11E F6D9486931E03236)
	{
		return ((::System::Boolean(*)(::PVOID, ::E68AA4EB51923C98::E4B55EE0EC5CC11E))((::PBYTE)hIl2Cpp + E3A3EB5706FFACBF_F5628F8349D4A8A6_A82F104F35BD28C3_OFFSET))(this, F6D9486931E03236);
	}
};
