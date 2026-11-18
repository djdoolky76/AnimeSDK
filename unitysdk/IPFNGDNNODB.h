#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AKCGFNKLIBA;
class NLMHLJADDFG;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define IPFNGDNNODB_FEHMDNJBLOH_OFFSET UNITYSDK_OFFSET(0x1943FC10)
#define IPFNGDNNODB_FFAAMAIHADJ_OFFSET UNITYSDK_OFFSET(0x1943FE00)
#define IPFNGDNNODB_GKFNFEALDAP_OFFSET UNITYSDK_OFFSET(0x1943FF10)
#define IPFNGDNNODB_MLMHBELHDGA_OFFSET UNITYSDK_OFFSET(0x1943FB60)
#define IPFNGDNNODB_ODEEJCPBCMM_OFFSET UNITYSDK_OFFSET(0x1943F8D0)
#define IPFNGDNNODB_OMBDJLDBGHH_OFFSET UNITYSDK_OFFSET(0x1943F920)
#define IPFNGDNNODB_PMMOOKICDCI_OFFSET UNITYSDK_OFFSET(0x1943FF00)
#define IPFNGDNNODB__CTOR_OFFSET UNITYSDK_OFFSET(0x1943FD10)

inline static constexpr unsigned int IPFNGDNNODB_TypeDefinitionIndex = 78470;

class IPFNGDNNODB : public ::System::Object
{
public:
	::NLMHLJADDFG* DJNKAEAPJHN; // 0x10
	::System::Action_1<::AKCGFNKLIBA*>* CHCGMACMJLD; // 0x18
	::System::Collections::Generic::Dictionary_2<::NLMHLJADDFG*, ::System::Action_1<::AKCGFNKLIBA*>*>* MIDABOGHFHJ; // 0x20
	::System::Collections::Generic::Queue_1<::NLMHLJADDFG*>* ONBGFMPMFNH; // 0x28
	::System::Boolean HGAJHLHNLHA; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPFNGDNNODB__CTOR_OFFSET))(this);
	}

	::System::Void ODEEJCPBCMM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPFNGDNNODB_ODEEJCPBCMM_OFFSET))(this);
	}

	::System::Void MLMHBELHDGA(::System::Action_1<::AKCGFNKLIBA*>* JFKDJCEMCJB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::AKCGFNKLIBA*>*))((::PBYTE)hIl2Cpp + IPFNGDNNODB_MLMHBELHDGA_OFFSET))(this, JFKDJCEMCJB);
	}

	::System::Void FEHMDNJBLOH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPFNGDNNODB_FEHMDNJBLOH_OFFSET))(this);
	}

	::System::Boolean FFAAMAIHADJ(::NLMHLJADDFG* NLKHAICJJAL, ::System::Action_1<::AKCGFNKLIBA*>* PABLEDCGDGM)
	{
		return ((::System::Boolean(*)(::PVOID, ::NLMHLJADDFG*, ::System::Action_1<::AKCGFNKLIBA*>*))((::PBYTE)hIl2Cpp + IPFNGDNNODB_FFAAMAIHADJ_OFFSET))(this, NLKHAICJJAL, PABLEDCGDGM);
	}

	::NLMHLJADDFG* PMMOOKICDCI()
	{
		return ((::NLMHLJADDFG*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPFNGDNNODB_PMMOOKICDCI_OFFSET))(this);
	}

	::System::Void GKFNFEALDAP(::AKCGFNKLIBA* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::AKCGFNKLIBA*))((::PBYTE)hIl2Cpp + IPFNGDNNODB_GKFNFEALDAP_OFFSET))(this, IGAAKDOIPNN);
	}

	::System::Void OMBDJLDBGHH(::AKCGFNKLIBA* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::AKCGFNKLIBA*))((::PBYTE)hIl2Cpp + IPFNGDNNODB_OMBDJLDBGHH_OFFSET))(this, IGAAKDOIPNN);
	}
};
