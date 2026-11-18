#pragma once
#include "unitysdk/unitysdk.h"

class CFMGIKJLMBJ;
class IANDOOLAALI;
class MKBMALLBJOF_NPLPKOKMEBM;
class OAEFGCLEHHO;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MKBMALLBJOF_CJIBLJCAJED_OFFSET UNITYSDK_OFFSET(0x17D37830)
#define MKBMALLBJOF_DNHHJDIILKG_OFFSET UNITYSDK_OFFSET(0x17D37F70)
#define MKBMALLBJOF_EAEAJPPBFHG_OFFSET UNITYSDK_OFFSET(0x17D37990)
#define MKBMALLBJOF_EGEJKJMGJMC_OFFSET UNITYSDK_OFFSET(0x17D375E0)
#define MKBMALLBJOF_FINNKDKNHBN_OFFSET UNITYSDK_OFFSET(0x17D374E0)
#define MKBMALLBJOF_HLEOAMMEMKE_OFFSET UNITYSDK_OFFSET(0x17D37AD0)
#define MKBMALLBJOF_IEHADCFCKGO_OFFSET UNITYSDK_OFFSET(0x17D379F0)
#define MKBMALLBJOF__CTOR_OFFSET UNITYSDK_OFFSET(0x17D37440)

inline static constexpr unsigned int MKBMALLBJOF_TypeDefinitionIndex = 58207;

class MKBMALLBJOF
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* DDPNADAGKFD; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* NCEEHHMJILI; // 0x18
	::System::Action_1<::OAEFGCLEHHO*>* BOAJPFLKADE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKBMALLBJOF__CTOR_OFFSET))(this);
	}

	::System::Void EGEJKJMGJMC(::OAEFGCLEHHO* BEPMBIKNIAH, ::System::Int32 BOOBCMCKJNN)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*, ::System::Int32))((::PBYTE)hIl2Cpp + MKBMALLBJOF_EGEJKJMGJMC_OFFSET))(this, BEPMBIKNIAH, BOOBCMCKJNN);
	}

	::System::Void CJIBLJCAJED(::System::UInt16 AMMJIOCMGKE, ::System::Action_1<::CFMGIKJLMBJ*>* PHHDHIBOCKA, ::System::Action_1<::CFMGIKJLMBJ*>* DCGJPNMFIKE)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Action_1<::CFMGIKJLMBJ*>*, ::System::Action_1<::CFMGIKJLMBJ*>*))((::PBYTE)hIl2Cpp + MKBMALLBJOF_CJIBLJCAJED_OFFSET))(this, AMMJIOCMGKE, PHHDHIBOCKA, DCGJPNMFIKE);
	}

	::System::Void EAEAJPPBFHG(::System::UInt16 AMMJIOCMGKE)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + MKBMALLBJOF_EAEAJPPBFHG_OFFSET))(this, AMMJIOCMGKE);
	}

	::MKBMALLBJOF_NPLPKOKMEBM* IEHADCFCKGO(::System::UInt32 BIJNDBBOLIJ)
	{
		return ((::MKBMALLBJOF_NPLPKOKMEBM*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MKBMALLBJOF_IEHADCFCKGO_OFFSET))(this, BIJNDBBOLIJ);
	}

	::System::Int32 HLEOAMMEMKE(::IANDOOLAALI* OEOICDOKIIB)
	{
		return ((::System::Int32(*)(::PVOID, ::IANDOOLAALI*))((::PBYTE)hIl2Cpp + MKBMALLBJOF_HLEOAMMEMKE_OFFSET))(this, OEOICDOKIIB);
	}

	::System::Void FINNKDKNHBN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKBMALLBJOF_FINNKDKNHBN_OFFSET))(this);
	}

	::System::Void DNHHJDIILKG(::System::Action_1<::OAEFGCLEHHO*>* PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::OAEFGCLEHHO*>*))((::PBYTE)hIl2Cpp + MKBMALLBJOF_DNHHJDIILKG_OFFSET))(this, PHHDHIBOCKA);
	}
};
