#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FLDKIHGEFKE.h"

class AGCJCGPOCHI;
class CKMBDPOPDFC;
class MKKFAGNDCLB;
namespace Foundation { template <typename T1, typename T2, typename T3> class ExclusiveResourceManager_3; }
namespace MoleMole { class CameraShotData; }
namespace Nap::NapECS { class EcsWorld; }

#define JIILKHLOHBL_BOBJBPEFLND_OFFSET UNITYSDK_OFFSET(0x13AD24A0)
#define JIILKHLOHBL_GMOHPOJMLML_OFFSET UNITYSDK_OFFSET(0x13AD23F0)
#define JIILKHLOHBL_JJEJHGOJOII_OFFSET UNITYSDK_OFFSET(0x13AD1F30)
#define JIILKHLOHBL_JMDEKPONKMF_OFFSET UNITYSDK_OFFSET(0x719300)
#define JIILKHLOHBL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x719160)

inline static constexpr unsigned int JIILKHLOHBL_TypeDefinitionIndex = 42410;

struct alignas(8) JIILKHLOHBL
{
	::MKKFAGNDCLB* NJBAECOFFIJ; // 0x10

	::System::Void PHOADBJGFBE(::Nap::NapECS::EcsWorld* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + JIILKHLOHBL_PHOADBJGFBE_OFFSET))(this, AAOCANGHBDG);
	}

	static ::System::Void JJEJHGOJOII(::Nap::NapECS::EcsWorld* FFJBLFCLKLF, ::MKKFAGNDCLB* FCEIKAIDHPM)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsWorld*, ::MKKFAGNDCLB*))((::PBYTE)hIl2Cpp + JIILKHLOHBL_JJEJHGOJOII_OFFSET))(FFJBLFCLKLF, FCEIKAIDHPM);
	}

	::System::Void JMDEKPONKMF(::Nap::NapECS::EcsWorld* AAOCANGHBDG, ::FLDKIHGEFKE DFMKILICPFB, ::MoleMole::CameraShotData* CNABFFJNFIE)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*, ::FLDKIHGEFKE, ::MoleMole::CameraShotData*))((::PBYTE)hIl2Cpp + JIILKHLOHBL_JMDEKPONKMF_OFFSET))(this, AAOCANGHBDG, DFMKILICPFB, CNABFFJNFIE);
	}

	static ::Foundation::ExclusiveResourceManager_3<::AGCJCGPOCHI*, ::CKMBDPOPDFC*, ::MKKFAGNDCLB*>* GMOHPOJMLML(::Nap::NapECS::EcsWorld* FFJBLFCLKLF)
	{
		return ((::Foundation::ExclusiveResourceManager_3<::AGCJCGPOCHI*, ::CKMBDPOPDFC*, ::MKKFAGNDCLB*>*(*)(::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + JIILKHLOHBL_GMOHPOJMLML_OFFSET))(FFJBLFCLKLF);
	}

	static ::System::Void BOBJBPEFLND(::Nap::NapECS::EcsWorld* FFJBLFCLKLF, ::MKKFAGNDCLB* FCEIKAIDHPM)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsWorld*, ::MKKFAGNDCLB*))((::PBYTE)hIl2Cpp + JIILKHLOHBL_BOBJBPEFLND_OFFSET))(FFJBLFCLKLF, FCEIKAIDHPM);
	}
};
