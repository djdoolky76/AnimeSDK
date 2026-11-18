#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HNCICFFLIPF;
class LLIPOBCFPCJ;
class PCEDMECCNJD;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CFIAMPECKFF_BLKPKDNGEKG_OFFSET UNITYSDK_OFFSET(0x14F21D60)
#define CFIAMPECKFF_PAFBHIBENBL_OFFSET UNITYSDK_OFFSET(0x14F22CA0)
#define CFIAMPECKFF_PGEAFIFJAFP_OFFSET UNITYSDK_OFFSET(0x14F223B0)
#define CFIAMPECKFF__CTOR_OFFSET UNITYSDK_OFFSET(0x14F216A0)

inline static constexpr unsigned int CFIAMPECKFF_TypeDefinitionIndex = 85223;

class CFIAMPECKFF : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* LEJMEBMCICP; // 0x10
	::System::Collections::Generic::HashSet_1<::System::UInt32>* FJPCFCOMNON; // 0x18
	::System::Collections::Generic::HashSet_1<::System::UInt32>* CKGIPPAEFPP; // 0x20
	::System::Collections::Generic::HashSet_1<::System::UInt32>* BHOAJBHMKMI; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::HNCICFFLIPF*>* NJGGJMEMANL; // 0x30

	::System::Void _ctor(::LLIPOBCFPCJ* ELFCPGCCAFE)
	{
		return ((::System::Void(*)(::PVOID, ::LLIPOBCFPCJ*))((::PBYTE)hIl2Cpp + CFIAMPECKFF__CTOR_OFFSET))(this, ELFCPGCCAFE);
	}

	::System::Void BLKPKDNGEKG(::System::Int32 FLJCLMOGPAF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CFIAMPECKFF_BLKPKDNGEKG_OFFSET))(this, FLJCLMOGPAF);
	}

	::System::Void PAFBHIBENBL(::PCEDMECCNJD* OFBDJCHNGOI)
	{
		return ((::System::Void(*)(::PVOID, ::PCEDMECCNJD*))((::PBYTE)hIl2Cpp + CFIAMPECKFF_PAFBHIBENBL_OFFSET))(this, OFBDJCHNGOI);
	}

	::System::Void PGEAFIFJAFP(::System::Int32 NGFHIMFFADB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CFIAMPECKFF_PGEAFIFJAFP_OFFSET))(this, NGFHIMFFADB);
	}
};
