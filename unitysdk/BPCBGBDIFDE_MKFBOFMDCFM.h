#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPCBGBDIFDE_JPIDADIBAFE;
namespace MoleMole { class MapGroupMemberStateConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }

#define BPCBGBDIFDE_MKFBOFMDCFM_LGCLJHJLFAO_OFFSET UNITYSDK_OFFSET(0x14C58440)
#define BPCBGBDIFDE_MKFBOFMDCFM__CTOR_OFFSET UNITYSDK_OFFSET(0x14C58430)

inline static constexpr unsigned int BPCBGBDIFDE_MKFBOFMDCFM_TypeDefinitionIndex = 78644;

class BPCBGBDIFDE_MKFBOFMDCFM : public ::System::Object
{
public:
	::BPCBGBDIFDE_JPIDADIBAFE* FGBNBFHOKAA; // 0x10
	::MoleMole::MapGroupMemberStateConfig* APEAGIJKGNF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_MKFBOFMDCFM__CTOR_OFFSET))(this);
	}

	::System::Void LGCLJHJLFAO(::System::Boolean EBFCACIEKBC, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>* NJKCPGDNAED)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_MKFBOFMDCFM_LGCLJHJLFAO_OFFSET))(this, EBFCACIEKBC, NJKCPGDNAED);
	}
};
