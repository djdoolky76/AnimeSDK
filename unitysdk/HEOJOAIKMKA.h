#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/HEOJOAIKMKA_ILHPEEABJFB.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
class KPACKGEBECC;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
template <typename T> class KCMIFNGABDC_1;

#define HEOJOAIKMKA_AJIGDGCMIMO_OFFSET UNITYSDK_OFFSET(0x17AF2770)
#define HEOJOAIKMKA_DPBEOJHDBBN_OFFSET UNITYSDK_OFFSET(0x17AF2520)
#define HEOJOAIKMKA_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x17AF2150)
#define HEOJOAIKMKA_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x17AF1E90)
#define HEOJOAIKMKA_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x17AF2A50)
#define HEOJOAIKMKA_HNAAJCBNGPP_OFFSET UNITYSDK_OFFSET(0x17AF2AE0)
#define HEOJOAIKMKA_JCKNMFPLECC_OFFSET UNITYSDK_OFFSET(0x17AF2BD0)
#define HEOJOAIKMKA__CTOR_OFFSET UNITYSDK_OFFSET(0x17AF27D0)

inline static constexpr unsigned int HEOJOAIKMKA_TypeDefinitionIndex = 52041;

class HEOJOAIKMKA : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* EJLOPJOMHHN; // 0x18
	::CPABOPKIGAL* MMFNFINOFPN; // 0x20
	::CPABOPKIGAL* LIJLLBJKFLN; // 0x28
	::LGCNEDCMPKM DAOCMHGPJAN; // 0x30
	::KCMIFNGABDC_1<::System::Int32>* PHHLHKFGBNI; // 0x58
	::KCMIFNGABDC_1<::System::Boolean>* JGDLAAOKPOF; // 0x60
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x68
	::CPABOPKIGAL* EGCCIODCJIA; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOJOAIKMKA__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOJOAIKMKA_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HEOJOAIKMKA_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::String* AJIGDGCMIMO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOJOAIKMKA_AJIGDGCMIMO_OFFSET))(this);
	}

	::System::Void DPBEOJHDBBN(::KPACKGEBECC* EPFOEIJDMBM, ::System::Int32 ABHBKFJKINO, ::LGCNEDCMPKM& BKBGPKNGNMF, ::System::Boolean& PHEEOFBPPLG)
	{
		return ((::System::Void(*)(::PVOID, ::KPACKGEBECC*, ::System::Int32, ::LGCNEDCMPKM&, ::System::Boolean&))((::PBYTE)hIl2Cpp + HEOJOAIKMKA_DPBEOJHDBBN_OFFSET))(this, EPFOEIJDMBM, ABHBKFJKINO, BKBGPKNGNMF, PHEEOFBPPLG);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOJOAIKMKA_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* HNAAJCBNGPP(::LGCNEDCMPKM BKBGPKNGNMF, ::System::Boolean HIHPCLJCHKK, ::System::Boolean MEHMAIDOBKA, ::System::Boolean PHEEOFBPPLG)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::LGCNEDCMPKM, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HEOJOAIKMKA_HNAAJCBNGPP_OFFSET))(this, BKBGPKNGNMF, HIHPCLJCHKK, MEHMAIDOBKA, PHEEOFBPPLG);
	}

	::HEOJOAIKMKA_ILHPEEABJFB JCKNMFPLECC(::KPACKGEBECC* EPFOEIJDMBM)
	{
		return ((::HEOJOAIKMKA_ILHPEEABJFB(*)(::PVOID, ::KPACKGEBECC*))((::PBYTE)hIl2Cpp + HEOJOAIKMKA_JCKNMFPLECC_OFFSET))(this, EPFOEIJDMBM);
	}
};
