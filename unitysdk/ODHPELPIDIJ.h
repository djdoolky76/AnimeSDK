#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EELLEKDMAPE.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class NPGHMJPGLCG;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define ODHPELPIDIJ_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x195C2470)
#define ODHPELPIDIJ_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x195C2230)
#define ODHPELPIDIJ_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x195C23B0)
#define ODHPELPIDIJ_FINALIZE_OFFSET UNITYSDK_OFFSET(0x195C2550)
#define ODHPELPIDIJ_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x195C2240)
#define ODHPELPIDIJ_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x195C28C0)
#define ODHPELPIDIJ_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x195C26F0)
#define ODHPELPIDIJ_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x195C1E80)
#define ODHPELPIDIJ_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x195C26D0)
#define ODHPELPIDIJ_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x195C1E60)
#define ODHPELPIDIJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x195C2140)
#define ODHPELPIDIJ__CTOR_OFFSET UNITYSDK_OFFSET(0x195C2680)

inline static constexpr unsigned int ODHPELPIDIJ_TypeDefinitionIndex = 17077;

class ODHPELPIDIJ : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::EELLEKDMAPE DHDJDGFNBOA; // 0x20
	::Il2CppArray<::NPGHMJPGLCG*>* OJMBOGGMIKO; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODHPELPIDIJ__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ODHPELPIDIJ_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODHPELPIDIJ_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ODHPELPIDIJ_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + ODHPELPIDIJ_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODHPELPIDIJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODHPELPIDIJ_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODHPELPIDIJ_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODHPELPIDIJ_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODHPELPIDIJ_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ODHPELPIDIJ_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::NPGHMJPGLCG* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::NPGHMJPGLCG*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ODHPELPIDIJ_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
