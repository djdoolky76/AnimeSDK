#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGELKBLKFHE.h"
#include "unitysdk/LFGDHBAEIIJ.h"

class DLDGOPHECJB;
class MGGACIODHON;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LBDNNOLBFGC_GNENDMIHBBC_OFFSET UNITYSDK_OFFSET(0xD415840)
#define LBDNNOLBFGC_HDLGEDBNEIP_OFFSET UNITYSDK_OFFSET(0xD415E10)
#define LBDNNOLBFGC_MMJBPBFPHMI_OFFSET UNITYSDK_OFFSET(0xD415B70)
#define LBDNNOLBFGC_OBGFHMOEGFB_OFFSET UNITYSDK_OFFSET(0xD415530)
#define LBDNNOLBFGC_ODCAOIFKBND_OFFSET UNITYSDK_OFFSET(0xD415750)
#define LBDNNOLBFGC__CTOR_OFFSET UNITYSDK_OFFSET(0xD415520)

inline static constexpr unsigned int LBDNNOLBFGC_TypeDefinitionIndex = 73761;

class LBDNNOLBFGC : public ::JGELKBLKFHE
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MGGACIODHON*>* PFJNDAMGGAK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBDNNOLBFGC__CTOR_OFFSET))(this);
	}

	::LFGDHBAEIIJ OBGFHMOEGFB(::System::UInt32 ACHBBPJIBIE, ::System::UInt32 KPAOHPIPHGK)
	{
		return ((::LFGDHBAEIIJ(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + LBDNNOLBFGC_OBGFHMOEGFB_OFFSET))(this, ACHBBPJIBIE, KPAOHPIPHGK);
	}

	::System::Boolean ODCAOIFKBND(::System::UInt32 ACHBBPJIBIE, ::MGGACIODHON*& BNGKMDBADOE)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::MGGACIODHON*&))((::PBYTE)hIl2Cpp + LBDNNOLBFGC_ODCAOIFKBND_OFFSET))(this, ACHBBPJIBIE, BNGKMDBADOE);
	}

	::System::Void GNENDMIHBBC(::DLDGOPHECJB* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DLDGOPHECJB*))((::PBYTE)hIl2Cpp + LBDNNOLBFGC_GNENDMIHBBC_OFFSET))(this, NKMKJFCBBCK);
	}

	::System::Boolean MMJBPBFPHMI(::System::UInt32 ACHBBPJIBIE, ::System::Collections::Generic::List_1<::System::Int32>*& BNGKMDBADOE)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + LBDNNOLBFGC_MMJBPBFPHMI_OFFSET))(this, ACHBBPJIBIE, BNGKMDBADOE);
	}

	::System::Void HDLGEDBNEIP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBDNNOLBFGC_HDLGEDBNEIP_OFFSET))(this);
	}
};
