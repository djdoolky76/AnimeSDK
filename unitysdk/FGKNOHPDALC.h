#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FCFOAKMODLK.h"
#include "unitysdk/NGHBHFHGCKF.h"
#include "unitysdk/System/Object.h"

class DPFMDEBJEMG;
class NBOPNEEINIB;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define FGKNOHPDALC_FKKPDJHHJKO_OFFSET UNITYSDK_OFFSET(0x11C4A9B0)
#define FGKNOHPDALC_OINLMEJNOGH_OFFSET UNITYSDK_OFFSET(0x11C4AC40)
#define FGKNOHPDALC__CTOR_OFFSET UNITYSDK_OFFSET(0x11C4A970)

inline static constexpr unsigned int FGKNOHPDALC_TypeDefinitionIndex = 68121;

class FGKNOHPDALC : public ::System::Object
{
public:
	::System::Action* EAPBGIJBMNB; // 0x10
	::System::String* DOEEOKEGPDO; // 0x18
	::System::Action_1<::DPFMDEBJEMG*>* GKLGEBGNBFI; // 0x20
	::System::Action* BIGLCDOGLGP; // 0x28
	::Il2CppArray<::FCFOAKMODLK>* GMODNKEKPJI; // 0x30
	::System::Int32 DAHIAEFNBID; // 0x38
	::NGHBHFHGCKF OEJIOMPPHKC; // 0x3C

	::System::Void _ctor(::System::Int32 JNGNMFPLIFM, ::Il2CppArray<::FCFOAKMODLK>* EOFMKOGLAFI, ::NGHBHFHGCKF OIHMEKKENJL, ::System::String* AHLGCADFGIF, ::System::Action* DINFPEDDMMP, ::System::Action* HNPEKKBECNN, ::System::Action_1<::DPFMDEBJEMG*>* BKCBFLFCEMP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::FCFOAKMODLK>*, ::NGHBHFHGCKF, ::System::String*, ::System::Action*, ::System::Action*, ::System::Action_1<::DPFMDEBJEMG*>*))((::PBYTE)hIl2Cpp + FGKNOHPDALC__CTOR_OFFSET))(this, JNGNMFPLIFM, EOFMKOGLAFI, OIHMEKKENJL, AHLGCADFGIF, DINFPEDDMMP, HNPEKKBECNN, BKCBFLFCEMP);
	}

	::NBOPNEEINIB* FKKPDJHHJKO()
	{
		return ((::NBOPNEEINIB*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGKNOHPDALC_FKKPDJHHJKO_OFFSET))(this);
	}

	::System::Int32 OINLMEJNOGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGKNOHPDALC_OINLMEJNOGH_OFFSET))(this);
	}
};
