#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BinaryBundleLib/Runtime/BinaryBundleFileEntryInfo.h"
#include "unitysdk/DPOOEICEKLM.h"
#include "unitysdk/OFCHFMBGNFH.h"

class ILLOFHKALCJ;
class LHPPNKANHMM;
class OFBDCOIKBHM;
namespace System { class Object; }

#define ALOJCPGDFBO_BEDGKPELGOF_OFFSET UNITYSDK_OFFSET(0x1E5DDFB0)
#define ALOJCPGDFBO_FMEJPINFNPB_OFFSET UNITYSDK_OFFSET(0x1E5DF160)
#define ALOJCPGDFBO_FOHDACEOPIO_OFFSET UNITYSDK_OFFSET(0x1E5DE880)
#define ALOJCPGDFBO_GHJMMACLOMP_OFFSET UNITYSDK_OFFSET(0x1E5DEFB0)
#define ALOJCPGDFBO_GOJJODBEJOK_OFFSET UNITYSDK_OFFSET(0x1E5DF2F0)
#define ALOJCPGDFBO_HODPPMPCJMO_OFFSET UNITYSDK_OFFSET(0x1E5DF4D0)
#define ALOJCPGDFBO_JKLIDNEOGDN_OFFSET UNITYSDK_OFFSET(0x1E5DE040)
#define ALOJCPGDFBO_OJJHPDNKIIC_OFFSET UNITYSDK_OFFSET(0x1E5DF030)
#define ALOJCPGDFBO__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5DDF60)

inline static constexpr unsigned int ALOJCPGDFBO_TypeDefinitionIndex = 34090;

class ALOJCPGDFBO : public ::OFCHFMBGNFH
{
public:
	::OFBDCOIKBHM* DJHHJFGEOCD; // 0x48
	::BinaryBundleLib::Runtime::BinaryBundleFileEntryInfo AJEHHMDPJHA; // 0x50
	::LHPPNKANHMM* OBDMKKADCMC; // 0x78

	::System::Void _ctor(::ILLOFHKALCJ* IAKJNCAPGAF, ::System::Int64 DKCLIOPFHGA, ::DPOOEICEKLM DKOFFFNEFJC, ::BinaryBundleLib::Runtime::BinaryBundleFileEntryInfo KHICJAKHHMK)
	{
		return ((::System::Void(*)(::PVOID, ::ILLOFHKALCJ*, ::System::Int64, ::DPOOEICEKLM, ::BinaryBundleLib::Runtime::BinaryBundleFileEntryInfo))((::PBYTE)hIl2Cpp + ALOJCPGDFBO__CTOR_OFFSET))(this, IAKJNCAPGAF, DKCLIOPFHGA, DKOFFFNEFJC, KHICJAKHHMK);
	}

	::System::Object* BEDGKPELGOF()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALOJCPGDFBO_BEDGKPELGOF_OFFSET))(this);
	}

	::System::Void JKLIDNEOGDN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALOJCPGDFBO_JKLIDNEOGDN_OFFSET))(this);
	}

	::System::Void FOHDACEOPIO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALOJCPGDFBO_FOHDACEOPIO_OFFSET))(this);
	}

	::System::Void OJJHPDNKIIC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALOJCPGDFBO_OJJHPDNKIIC_OFFSET))(this);
	}

	::System::Void FMEJPINFNPB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALOJCPGDFBO_FMEJPINFNPB_OFFSET))(this);
	}

	::System::Void GOJJODBEJOK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALOJCPGDFBO_GOJJODBEJOK_OFFSET))(this);
	}

	::System::Void GHJMMACLOMP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALOJCPGDFBO_GHJMMACLOMP_OFFSET))(this);
	}

	::BinaryBundleLib::Runtime::BinaryBundleFileEntryInfo HODPPMPCJMO()
	{
		return ((::BinaryBundleLib::Runtime::BinaryBundleFileEntryInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + ALOJCPGDFBO_HODPPMPCJMO_OFFSET))(this);
	}
};
