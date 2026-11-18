#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GFDNHLLHGDM.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class ENMNJIFHGGP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EPMNGKGAILB_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1ADDC5F0)
#define EPMNGKGAILB_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1ADDC3B0)
#define EPMNGKGAILB_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1ADDC530)
#define EPMNGKGAILB_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1ADDC6D0)
#define EPMNGKGAILB_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1ADDC3C0)
#define EPMNGKGAILB_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1ADDCA00)
#define EPMNGKGAILB_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1ADDC830)
#define EPMNGKGAILB_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1ADDC000)
#define EPMNGKGAILB_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1ADDC810)
#define EPMNGKGAILB_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1ADDBFE0)
#define EPMNGKGAILB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1ADDC2C0)
#define EPMNGKGAILB__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADDC800)

inline static constexpr unsigned int EPMNGKGAILB_TypeDefinitionIndex = 14007;

class EPMNGKGAILB : public ::System::Object
{
public:
	::Il2CppArray<::ENMNJIFHGGP*>* OJMBOGGMIKO; // 0x10
	::GFDNHLLHGDM DHDJDGFNBOA; // 0x18
	::System::Action* PLDOELOOFLL; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Int32 IJDGGCANOFI; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPMNGKGAILB__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPMNGKGAILB_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPMNGKGAILB_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EPMNGKGAILB_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + EPMNGKGAILB_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPMNGKGAILB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPMNGKGAILB_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPMNGKGAILB_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPMNGKGAILB_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPMNGKGAILB_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EPMNGKGAILB_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::ENMNJIFHGGP* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::ENMNJIFHGGP*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EPMNGKGAILB_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
