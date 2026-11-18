#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/KOBFGHCLLPH.h"
#include "unitysdk/System/Object.h"

class NLDKCFGGLAL;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NCHNDKAMGGN_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x195B2800)
#define NCHNDKAMGGN_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x195B25D0)
#define NCHNDKAMGGN_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x195B2740)
#define NCHNDKAMGGN_FINALIZE_OFFSET UNITYSDK_OFFSET(0x195B28E0)
#define NCHNDKAMGGN_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x195B25E0)
#define NCHNDKAMGGN_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x195B2C50)
#define NCHNDKAMGGN_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x195B2A60)
#define NCHNDKAMGGN_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x195B2230)
#define NCHNDKAMGGN_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x195B2C30)
#define NCHNDKAMGGN_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x195B2210)
#define NCHNDKAMGGN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x195B24F0)
#define NCHNDKAMGGN__CTOR_OFFSET UNITYSDK_OFFSET(0x195B2A10)

inline static constexpr unsigned int NCHNDKAMGGN_TypeDefinitionIndex = 10482;

class NCHNDKAMGGN : public ::System::Object
{
public:
	::KOBFGHCLLPH DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::Il2CppArray<::NLDKCFGGLAL*>* OJMBOGGMIKO; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCHNDKAMGGN__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NCHNDKAMGGN_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCHNDKAMGGN_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NCHNDKAMGGN_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + NCHNDKAMGGN_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCHNDKAMGGN_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCHNDKAMGGN_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCHNDKAMGGN_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NCHNDKAMGGN_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCHNDKAMGGN_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCHNDKAMGGN_CHLEALKAOJO_OFFSET))(this);
	}

	::NLDKCFGGLAL* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::NLDKCFGGLAL*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NCHNDKAMGGN_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
