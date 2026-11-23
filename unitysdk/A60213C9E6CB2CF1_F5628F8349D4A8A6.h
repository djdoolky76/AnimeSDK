#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class F8E676CB4FE10BB9;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define A60213C9E6CB2CF1_F5628F8349D4A8A6_A101A1E9D9EDE6C3_OFFSET UNITYSDK_OFFSET(0x21C6800)
#define A60213C9E6CB2CF1_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x23A80D0)
#define A60213C9E6CB2CF1_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A60213C9E6CB2CF1_F5628F8349D4A8A6_TypeDefinitionIndex = 3564;

class A60213C9E6CB2CF1_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::A60213C9E6CB2CF1_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::A60213C9E6CB2CF1_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(A60213C9E6CB2CF1_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Func_2<::F8E676CB4FE10BB9*, ::System::String*>** StaticGet_B8CA52E4DE85C79A()
	{
		return (::System::Func_2<::F8E676CB4FE10BB9*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(A60213C9E6CB2CF1_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A60213C9E6CB2CF1_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A60213C9E6CB2CF1_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::String* A101A1E9D9EDE6C3(::F8E676CB4FE10BB9* EFD09F0992A4635C)
	{
		return ((::System::String*(*)(::PVOID, ::F8E676CB4FE10BB9*))((::PBYTE)hIl2Cpp + A60213C9E6CB2CF1_F5628F8349D4A8A6_A101A1E9D9EDE6C3_OFFSET))(this, EFD09F0992A4635C);
	}
};
