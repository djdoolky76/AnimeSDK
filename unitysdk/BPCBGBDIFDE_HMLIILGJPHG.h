#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPCBGBDIFDE_JPIDADIBAFE;
namespace MoleMole::Config { class NewMonoSceneMap3DConfig_GroupStateControlItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }

#define BPCBGBDIFDE_HMLIILGJPHG_BFBINBIFBDJ_OFFSET UNITYSDK_OFFSET(0x10E1CA80)
#define BPCBGBDIFDE_HMLIILGJPHG__CTOR_OFFSET UNITYSDK_OFFSET(0x10E1CA70)

inline static constexpr unsigned int BPCBGBDIFDE_HMLIILGJPHG_TypeDefinitionIndex = 78651;

class BPCBGBDIFDE_HMLIILGJPHG : public ::System::Object
{
public:
	::MoleMole::Config::NewMonoSceneMap3DConfig_GroupStateControlItem* BLEIMPMKJJH; // 0x10
	::BPCBGBDIFDE_JPIDADIBAFE* KGFKHBMEKBL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_HMLIILGJPHG__CTOR_OFFSET))(this);
	}

	::System::Void BFBINBIFBDJ(::System::Boolean EBFCACIEKBC, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>* NJKCPGDNAED)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_HMLIILGJPHG_BFBINBIFBDJ_OFFSET))(this, EBFCACIEKBC, NJKCPGDNAED);
	}
};
