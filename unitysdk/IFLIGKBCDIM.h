#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FGPFMDJDEDF.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class ECBKLNMCPEG;
class MHODHAMHFDF;
class NKLLGKBGBAN;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IFLIGKBCDIM_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1747DC50)
#define IFLIGKBCDIM_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1747D9D0)
#define IFLIGKBCDIM_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1747D9E0)
#define IFLIGKBCDIM_EKLFKACJNDP_OFFSET UNITYSDK_OFFSET(0x1747E030)
#define IFLIGKBCDIM_ELAIKNLNCDH_OFFSET UNITYSDK_OFFSET(0x1747E700)
#define IFLIGKBCDIM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1747DAA0)
#define IFLIGKBCDIM_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1747DBD0)
#define IFLIGKBCDIM_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1747DD80)
#define IFLIGKBCDIM_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1747D630)
#define IFLIGKBCDIM_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1747D610)
#define IFLIGKBCDIM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1747D8F0)
#define IFLIGKBCDIM__CTOR_OFFSET UNITYSDK_OFFSET(0x1747DD30)

inline static constexpr unsigned int IFLIGKBCDIM_TypeDefinitionIndex = 12053;

class IFLIGKBCDIM : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MHODHAMHFDF*>*>* DBALBCOCDJF; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::Il2CppArray<::NKLLGKBGBAN*>* OJMBOGGMIKO; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::System::Action* PLDOELOOFLL; // 0x30
	::FGPFMDJDEDF DHDJDGFNBOA; // 0x38
	::System::Int32 IJDGGCANOFI; // 0x50
	::System::Boolean DLGKLGKOMHK; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFLIGKBCDIM__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFLIGKBCDIM_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFLIGKBCDIM_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFLIGKBCDIM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFLIGKBCDIM_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IFLIGKBCDIM_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + IFLIGKBCDIM_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFLIGKBCDIM_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFLIGKBCDIM_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + IFLIGKBCDIM_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MHODHAMHFDF*>*>* EKLFKACJNDP()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MHODHAMHFDF*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFLIGKBCDIM_EKLFKACJNDP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MHODHAMHFDF*>* ELAIKNLNCDH(::ECBKLNMCPEG* AMJADGKJAPK)
	{
		return ((::System::Collections::Generic::List_1<::MHODHAMHFDF*>*(*)(::PVOID, ::ECBKLNMCPEG*))((::PBYTE)hIl2Cpp + IFLIGKBCDIM_ELAIKNLNCDH_OFFSET))(this, AMJADGKJAPK);
	}
};
