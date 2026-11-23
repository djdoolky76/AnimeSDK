#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define F9BFE8B5A4A1D051_A68C7B7988A81FDD_OFFSET UNITYSDK_OFFSET(0x3ADDE20)
#define F9BFE8B5A4A1D051_ABA06A195CC1DF53_OFFSET UNITYSDK_OFFSET(0x3ADDC20)
#define F9BFE8B5A4A1D051_B9B3888683B74044_OFFSET UNITYSDK_OFFSET(0x3ADDF60)
#define F9BFE8B5A4A1D051_E24D42BEB8E3399C_OFFSET UNITYSDK_OFFSET(0x3ADE020)
#define F9BFE8B5A4A1D051_F4D8F7CCEEFF256D_OFFSET UNITYSDK_OFFSET(0x3ADDD60)
#define F9BFE8B5A4A1D051__CCTOR_OFFSET UNITYSDK_OFFSET(0x3ADE0D0)
#define F9BFE8B5A4A1D051__CTOR_OFFSET UNITYSDK_OFFSET(0x3ADE120)

inline static constexpr unsigned int F9BFE8B5A4A1D051_TypeDefinitionIndex = 12170;

class F9BFE8B5A4A1D051 : public ::System::Object
{
public:
	static ::F9BFE8B5A4A1D051** StaticGet_E0E7A5F93551109B()
	{
		return (::F9BFE8B5A4A1D051**)Il2CppClass::FromTypeDefinitionIndex(F9BFE8B5A4A1D051_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* F9B3BA25BD327981; // 0x10
	::System::Int32 E5D105501773BBEA; // 0x18

	static ::F9BFE8B5A4A1D051* A68C7B7988A81FDD()
	{
		return ((::F9BFE8B5A4A1D051*(*)())((::PBYTE)hIl2Cpp + F9BFE8B5A4A1D051_A68C7B7988A81FDD_OFFSET))();
	}

	::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>* F4D8F7CCEEFF256D(::System::Int32 B388EC7BF992A18E)
	{
		return ((::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + F9BFE8B5A4A1D051_F4D8F7CCEEFF256D_OFFSET))(this, B388EC7BF992A18E);
	}

	::System::Void ABA06A195CC1DF53(::System::String* E41EB813C7FB644A, ::System::Action_1<::System::String*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + F9BFE8B5A4A1D051_ABA06A195CC1DF53_OFFSET))(this, E41EB813C7FB644A, E04D2BE64FCE9814);
	}

	::System::Void E24D42BEB8E3399C(::System::Int32 B388EC7BF992A18E)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + F9BFE8B5A4A1D051_E24D42BEB8E3399C_OFFSET))(this, B388EC7BF992A18E);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F9BFE8B5A4A1D051__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F9BFE8B5A4A1D051__CTOR_OFFSET))(this);
	}

	::System::Int32 B9B3888683B74044(::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>* BC288918C940C7A6)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*))((::PBYTE)hIl2Cpp + F9BFE8B5A4A1D051_B9B3888683B74044_OFFSET))(this, BC288918C940C7A6);
	}
};
