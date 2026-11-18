#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GGJNANKCFML.h"
#include "unitysdk/NGHBHFHGCKF.h"
#include "unitysdk/FCFOAKMODLK.h"
#include "unitysdk/System/Nullable_1.h"

class DPFMDEBJEMG;
class HOEHKPAKAKP;
class NBOPNEEINIB;
namespace Nap::NapECS { class EcsEntity; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define OJFCCONDFPF_EAKLAKBOEKD_1_OFFSET UNITYSDK_OFFSET(0xE158C60)
#define OJFCCONDFPF_EAKLAKBOEKD_OFFSET UNITYSDK_OFFSET(0xE158830)
#define OJFCCONDFPF_GIBGIBJPHKA_OFFSET UNITYSDK_OFFSET(0xE159290)
#define OJFCCONDFPF_HDELPHJEJAO_OFFSET UNITYSDK_OFFSET(0xE158B70)
#define OJFCCONDFPF_KJIPFJDOFBP_OFFSET UNITYSDK_OFFSET(0xE158670)
#define OJFCCONDFPF_NCBENFCMHNF_OFFSET UNITYSDK_OFFSET(0xE158FB0)
#define OJFCCONDFPF_NHDKIEANDCO_OFFSET UNITYSDK_OFFSET(0xE158680)
#define OJFCCONDFPF__CTOR_OFFSET UNITYSDK_OFFSET(0xE1585F0)

inline static constexpr unsigned int OJFCCONDFPF_TypeDefinitionIndex = 63691;

class OJFCCONDFPF
{
public:
	::NBOPNEEINIB* LCIDIIDOCAE; // 0x10
	::System::Collections::Generic::Queue_1<::HOEHKPAKAKP*>* MJDANLPIAJG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFCCONDFPF__CTOR_OFFSET))(this);
	}

	::System::Boolean KJIPFJDOFBP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFCCONDFPF_KJIPFJDOFBP_OFFSET))(this);
	}

	::System::Void NHDKIEANDCO(::System::Int32 JNGNMFPLIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OJFCCONDFPF_NHDKIEANDCO_OFFSET))(this, JNGNMFPLIFM);
	}

	::System::Void EAKLAKBOEKD(::System::Int32 JNGNMFPLIFM, ::Nap::NapECS::EcsEntity* PLCBINNKMAM, ::System::String* KDPCIAPDOLK, ::GGJNANKCFML OIHMEKKENJL, ::System::Action* DINFPEDDMMP, ::System::Action* HNPEKKBECNN, ::System::Action_1<::DPFMDEBJEMG*>* BKCBFLFCEMP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Nap::NapECS::EcsEntity*, ::System::String*, ::GGJNANKCFML, ::System::Action*, ::System::Action*, ::System::Action_1<::DPFMDEBJEMG*>*))((::PBYTE)hIl2Cpp + OJFCCONDFPF_EAKLAKBOEKD_OFFSET))(this, JNGNMFPLIFM, PLCBINNKMAM, KDPCIAPDOLK, OIHMEKKENJL, DINFPEDDMMP, HNPEKKBECNN, BKCBFLFCEMP);
	}

	::System::Void HDELPHJEJAO(::System::Nullable_1<::System::Boolean> GDNECMBHKND)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + OJFCCONDFPF_HDELPHJEJAO_OFFSET))(this, GDNECMBHKND);
	}

	::System::Void EAKLAKBOEKD_1(::System::Int32 JNGNMFPLIFM, ::Il2CppArray<::FCFOAKMODLK>* EOFMKOGLAFI, ::System::String* KDPCIAPDOLK, ::NGHBHFHGCKF OIHMEKKENJL, ::System::Action* DINFPEDDMMP, ::System::Action* HNPEKKBECNN, ::System::Action_1<::DPFMDEBJEMG*>* BKCBFLFCEMP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::FCFOAKMODLK>*, ::System::String*, ::NGHBHFHGCKF, ::System::Action*, ::System::Action*, ::System::Action_1<::DPFMDEBJEMG*>*))((::PBYTE)hIl2Cpp + OJFCCONDFPF_EAKLAKBOEKD_1_OFFSET))(this, JNGNMFPLIFM, EOFMKOGLAFI, KDPCIAPDOLK, OIHMEKKENJL, DINFPEDDMMP, HNPEKKBECNN, BKCBFLFCEMP);
	}

	::System::Void NCBENFCMHNF(::System::Int32 JNGNMFPLIFM, ::System::Nullable_1<::System::Boolean> GDNECMBHKND)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + OJFCCONDFPF_NCBENFCMHNF_OFFSET))(this, JNGNMFPLIFM, GDNECMBHKND);
	}

	::System::Void GIBGIBJPHKA(::System::Nullable_1<::System::Boolean> GDNECMBHKND)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + OJFCCONDFPF_GIBGIBJPHKA_OFFSET))(this, GDNECMBHKND);
	}
};
