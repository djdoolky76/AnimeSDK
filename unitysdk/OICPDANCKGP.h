#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/NAMAMLGDPCO.h"
#include "unitysdk/System/Object.h"

class OMIOAJGHCAM;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define OICPDANCKGP_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1BF7CB20)
#define OICPDANCKGP_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1BF7C8F0)
#define OICPDANCKGP_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1BF7CA60)
#define OICPDANCKGP_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x1BF7CF30)
#define OICPDANCKGP_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BF7CC00)
#define OICPDANCKGP_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1BF7C900)
#define OICPDANCKGP_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x1BF7D000)
#define OICPDANCKGP_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1BF7CD60)
#define OICPDANCKGP_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1BF7C550)
#define OICPDANCKGP_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1BF7CD40)
#define OICPDANCKGP_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1BF7C530)
#define OICPDANCKGP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1BF7C810)
#define OICPDANCKGP__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF7CD30)

inline static constexpr unsigned int OICPDANCKGP_TypeDefinitionIndex = 12288;

class OICPDANCKGP : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::NAMAMLGDPCO DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::Il2CppArray<::OMIOAJGHCAM*>* OJMBOGGMIKO; // 0x38
	::System::Int32 IJDGGCANOFI; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OICPDANCKGP__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OICPDANCKGP_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OICPDANCKGP_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + OICPDANCKGP_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + OICPDANCKGP_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OICPDANCKGP_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OICPDANCKGP_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OICPDANCKGP_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OICPDANCKGP_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + OICPDANCKGP_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Collections::Generic::IReadOnlyList_1<::OMIOAJGHCAM*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::OMIOAJGHCAM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OICPDANCKGP_EJABHIAHIAN_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OICPDANCKGP_CHLEALKAOJO_OFFSET))(this);
	}

	::OMIOAJGHCAM* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::OMIOAJGHCAM*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OICPDANCKGP_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}
};
