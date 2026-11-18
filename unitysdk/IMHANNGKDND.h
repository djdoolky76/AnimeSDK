#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/MKFIKMFNOAC.h"
#include "unitysdk/System/Object.h"

class DININGIGILE;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define IMHANNGKDND_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B629E90)
#define IMHANNGKDND_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B629C50)
#define IMHANNGKDND_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B629DD0)
#define IMHANNGKDND_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x1B62A110)
#define IMHANNGKDND_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B629F70)
#define IMHANNGKDND_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B629C60)
#define IMHANNGKDND_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x1B62A1E0)
#define IMHANNGKDND_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B62A3C0)
#define IMHANNGKDND_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B6298A0)
#define IMHANNGKDND_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B62A0F0)
#define IMHANNGKDND_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B629880)
#define IMHANNGKDND_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B629B60)
#define IMHANNGKDND__CTOR_OFFSET UNITYSDK_OFFSET(0x1B62A0A0)

inline static constexpr unsigned int IMHANNGKDND_TypeDefinitionIndex = 17612;

class IMHANNGKDND : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::MKFIKMFNOAC DHDJDGFNBOA; // 0x18
	::System::Action* PLDOELOOFLL; // 0x30
	::Il2CppArray<::DININGIGILE*>* OJMBOGGMIKO; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMHANNGKDND__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IMHANNGKDND_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMHANNGKDND_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IMHANNGKDND_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + IMHANNGKDND_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMHANNGKDND_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMHANNGKDND_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMHANNGKDND_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMHANNGKDND_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMHANNGKDND_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::DININGIGILE*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::DININGIGILE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMHANNGKDND_EJABHIAHIAN_OFFSET))(this);
	}

	::DININGIGILE* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::DININGIGILE*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IMHANNGKDND_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + IMHANNGKDND_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
