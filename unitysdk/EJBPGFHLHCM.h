#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/NPCKBNKCPMN.h"
#include "unitysdk/System/Object.h"

class PGOIGMCFBHD;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EJBPGFHLHCM_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A5653E0)
#define EJBPGFHLHCM_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A5651B0)
#define EJBPGFHLHCM_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A565320)
#define EJBPGFHLHCM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A5654C0)
#define EJBPGFHLHCM_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A5651C0)
#define EJBPGFHLHCM_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A565600)
#define EJBPGFHLHCM_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A564E10)
#define EJBPGFHLHCM_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A564DF0)
#define EJBPGFHLHCM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A5650D0)
#define EJBPGFHLHCM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5655F0)

inline static constexpr unsigned int EJBPGFHLHCM_TypeDefinitionIndex = 10319;

class EJBPGFHLHCM : public ::System::Object
{
public:
	::Il2CppArray<::PGOIGMCFBHD*>* OJMBOGGMIKO; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::NPCKBNKCPMN DHDJDGFNBOA; // 0x28
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJBPGFHLHCM__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EJBPGFHLHCM_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJBPGFHLHCM_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EJBPGFHLHCM_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + EJBPGFHLHCM_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJBPGFHLHCM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJBPGFHLHCM_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJBPGFHLHCM_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EJBPGFHLHCM_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJBPGFHLHCM_CHLEALKAOJO_OFFSET))(this);
	}
};
