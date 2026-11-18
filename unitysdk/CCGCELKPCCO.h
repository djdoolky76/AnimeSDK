#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CMIMAMMMOKA;
class DLDGOPHECJB;
class HMLPPDMAJNE;
class JLKKPMAIGPL;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CCGCELKPCCO_DKDJDEJHABH_OFFSET UNITYSDK_OFFSET(0x145A91A0)
#define CCGCELKPCCO_IAFHBCHLBME_OFFSET UNITYSDK_OFFSET(0x145A8DD0)
#define CCGCELKPCCO_KBNNAJCDCPF_OFFSET UNITYSDK_OFFSET(0x145A92F0)
#define CCGCELKPCCO_NCFDACBMLGK_OFFSET UNITYSDK_OFFSET(0x145A8E30)
#define CCGCELKPCCO__CTOR_OFFSET UNITYSDK_OFFSET(0x145A8C60)

inline static constexpr unsigned int CCGCELKPCCO_TypeDefinitionIndex = 72492;

class CCGCELKPCCO : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::JLKKPMAIGPL*>* MDNEPFGGLEO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGCELKPCCO__CTOR_OFFSET))(this);
	}

	::System::Void IAFHBCHLBME(::DLDGOPHECJB* LGLDDAMNBLC)
	{
		return ((::System::Void(*)(::PVOID, ::DLDGOPHECJB*))((::PBYTE)hIl2Cpp + CCGCELKPCCO_IAFHBCHLBME_OFFSET))(this, LGLDDAMNBLC);
	}

	::System::Void DKDJDEJHABH(::System::Collections::Generic::List_1<::CMIMAMMMOKA*>* HPKCIDINGMM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::CMIMAMMMOKA*>*))((::PBYTE)hIl2Cpp + CCGCELKPCCO_DKDJDEJHABH_OFFSET))(this, HPKCIDINGMM);
	}

	::System::Void KBNNAJCDCPF(::CMIMAMMMOKA* CLDFAJFLAEO, ::System::Action* PABLEDCGDGM)
	{
		return ((::System::Void(*)(::PVOID, ::CMIMAMMMOKA*, ::System::Action*))((::PBYTE)hIl2Cpp + CCGCELKPCCO_KBNNAJCDCPF_OFFSET))(this, CLDFAJFLAEO, PABLEDCGDGM);
	}

	::System::Collections::Generic::List_1<::CMIMAMMMOKA*>* NCFDACBMLGK(::DLDGOPHECJB* LGLDDAMNBLC, ::HMLPPDMAJNE* KLJFENLBJCB)
	{
		return ((::System::Collections::Generic::List_1<::CMIMAMMMOKA*>*(*)(::PVOID, ::DLDGOPHECJB*, ::HMLPPDMAJNE*))((::PBYTE)hIl2Cpp + CCGCELKPCCO_NCFDACBMLGK_OFFSET))(this, LGLDDAMNBLC, KLJFENLBJCB);
	}
};
