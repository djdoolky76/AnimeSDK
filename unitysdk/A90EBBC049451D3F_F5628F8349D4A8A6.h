#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A90EBBC049451D3F;
namespace System { template <typename T> class Action_1; }

#define A90EBBC049451D3F_F5628F8349D4A8A6_BDBCD59517228099_OFFSET UNITYSDK_OFFSET(0x2242C80)
#define A90EBBC049451D3F_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x22430F0)
#define A90EBBC049451D3F_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A90EBBC049451D3F_F5628F8349D4A8A6_TypeDefinitionIndex = 9167;

class A90EBBC049451D3F_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::A90EBBC049451D3F_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::A90EBBC049451D3F_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(A90EBBC049451D3F_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action_1<::A90EBBC049451D3F*>** StaticGet_F4EB4229F3368E16()
	{
		return (::System::Action_1<::A90EBBC049451D3F*>**)Il2CppClass::FromTypeDefinitionIndex(A90EBBC049451D3F_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A90EBBC049451D3F_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A90EBBC049451D3F_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Void BDBCD59517228099(::A90EBBC049451D3F* BD8273AB04C4B760)
	{
		return ((::System::Void(*)(::PVOID, ::A90EBBC049451D3F*))((::PBYTE)hIl2Cpp + A90EBBC049451D3F_F5628F8349D4A8A6_BDBCD59517228099_OFFSET))(this, BD8273AB04C4B760);
	}
};
