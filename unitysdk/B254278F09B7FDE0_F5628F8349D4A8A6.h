#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define B254278F09B7FDE0_F5628F8349D4A8A6_B67DB7A6DAD3D937_OFFSET UNITYSDK_OFFSET(0x1F55270)
#define B254278F09B7FDE0_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F556F0)
#define B254278F09B7FDE0_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B254278F09B7FDE0_F5628F8349D4A8A6_TypeDefinitionIndex = 7734;

class B254278F09B7FDE0_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::B254278F09B7FDE0_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::B254278F09B7FDE0_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(B254278F09B7FDE0_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action_2<::System::String*, ::System::String*>** StaticGet_A46C49D0C87A77DA()
	{
		return (::System::Action_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(B254278F09B7FDE0_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + B254278F09B7FDE0_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B254278F09B7FDE0_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Void B67DB7A6DAD3D937(::System::String* A6E476DEDB99637C, ::System::String* E0C0689B1CEBE48C)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + B254278F09B7FDE0_F5628F8349D4A8A6_B67DB7A6DAD3D937_OFFSET))(this, A6E476DEDB99637C, E0C0689B1CEBE48C);
	}
};
