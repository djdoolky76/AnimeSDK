#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AB642D1382756991;
class FE293E1EDB480DA2;
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }

#define A55CB307B62E0698_F5628F8349D4A8A6_F64DBA5E83FE4231_OFFSET UNITYSDK_OFFSET(0x1DDFC30)
#define A55CB307B62E0698_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE0100)
#define A55CB307B62E0698_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A55CB307B62E0698_F5628F8349D4A8A6_TypeDefinitionIndex = 9358;

class A55CB307B62E0698_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::A55CB307B62E0698_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::A55CB307B62E0698_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(A55CB307B62E0698_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action_4<::FE293E1EDB480DA2*, ::System::UInt32, ::System::Boolean, ::AB642D1382756991*>** StaticGet_A7539CEF38B4E00D()
	{
		return (::System::Action_4<::FE293E1EDB480DA2*, ::System::UInt32, ::System::Boolean, ::AB642D1382756991*>**)Il2CppClass::FromTypeDefinitionIndex(A55CB307B62E0698_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A55CB307B62E0698_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A55CB307B62E0698_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Void F64DBA5E83FE4231(::FE293E1EDB480DA2* AE2BDC9C3EE9F2F0, ::System::UInt32 A01A760EDABCB977, ::System::Boolean B286671A94FCBCDA, ::AB642D1382756991* E940BFE34B1F4BEF)
	{
		return ((::System::Void(*)(::PVOID, ::FE293E1EDB480DA2*, ::System::UInt32, ::System::Boolean, ::AB642D1382756991*))((::PBYTE)hIl2Cpp + A55CB307B62E0698_F5628F8349D4A8A6_F64DBA5E83FE4231_OFFSET))(this, AE2BDC9C3EE9F2F0, A01A760EDABCB977, B286671A94FCBCDA, E940BFE34B1F4BEF);
	}
};
