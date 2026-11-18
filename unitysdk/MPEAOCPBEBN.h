#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JCJEINKOJKJ.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class BFKKHMELAHP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MPEAOCPBEBN_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1C183060)
#define MPEAOCPBEBN_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1C182E20)
#define MPEAOCPBEBN_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1C182FA0)
#define MPEAOCPBEBN_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C183140)
#define MPEAOCPBEBN_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1C182E30)
#define MPEAOCPBEBN_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1C1832C0)
#define MPEAOCPBEBN_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1C183510)
#define MPEAOCPBEBN_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1C182A70)
#define MPEAOCPBEBN_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1C1834F0)
#define MPEAOCPBEBN_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1C182A50)
#define MPEAOCPBEBN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1C182D30)
#define MPEAOCPBEBN__CTOR_OFFSET UNITYSDK_OFFSET(0x1C183270)

inline static constexpr unsigned int MPEAOCPBEBN_TypeDefinitionIndex = 15674;

class MPEAOCPBEBN : public ::System::Object
{
public:
	::JCJEINKOJKJ DHDJDGFNBOA; // 0x10
	::Il2CppArray<::BFKKHMELAHP*>* OJMBOGGMIKO; // 0x28
	::System::Action* PLDOELOOFLL; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPEAOCPBEBN__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MPEAOCPBEBN_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPEAOCPBEBN_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MPEAOCPBEBN_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + MPEAOCPBEBN_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPEAOCPBEBN_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPEAOCPBEBN_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPEAOCPBEBN_FINALIZE_OFFSET))(this);
	}

	::BFKKHMELAHP* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::BFKKHMELAHP*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MPEAOCPBEBN_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPEAOCPBEBN_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MPEAOCPBEBN_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPEAOCPBEBN_NAMKJOJBAOA_OFFSET))(this);
	}
};
