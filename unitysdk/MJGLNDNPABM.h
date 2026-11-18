#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
template <typename T> class KCMIFNGABDC_1;

#define MJGLNDNPABM_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x17D36B40)
#define MJGLNDNPABM_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x17D36AB0)
#define MJGLNDNPABM_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x17D36FC0)
#define MJGLNDNPABM__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D36EF0)
#define MJGLNDNPABM__CTOR_OFFSET UNITYSDK_OFFSET(0x17D36E50)

inline static constexpr unsigned int MJGLNDNPABM_TypeDefinitionIndex = 66092;

class MJGLNDNPABM : public ::MHMFINLCNFN
{
public:
	static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_PCAFLOAHFCO()
	{
		return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MJGLNDNPABM_TypeDefinitionIndex)->GetStaticField(0x4E720);
	}
	::KCMIFNGABDC_1<::System::String*>* ELOAKMNGMHL; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJGLNDNPABM__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MJGLNDNPABM__CCTOR_OFFSET))();
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJGLNDNPABM_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + MJGLNDNPABM_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJGLNDNPABM_GDEOPIBNOIN_OFFSET))(this);
	}
};
