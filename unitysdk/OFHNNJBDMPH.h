#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/MDHEKGIOJMG.h"
#include "unitysdk/System/Object.h"

class PFKFGPNNDCH;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define OFHNNJBDMPH_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1CFF9240)
#define OFHNNJBDMPH_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1CFF9000)
#define OFHNNJBDMPH_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1CFF9180)
#define OFHNNJBDMPH_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1CFF9320)
#define OFHNNJBDMPH_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1CFF9010)
#define OFHNNJBDMPH_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1CFF94A0)
#define OFHNNJBDMPH_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1CFF8C50)
#define OFHNNJBDMPH_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1CFF8C30)
#define OFHNNJBDMPH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1CFF8F10)
#define OFHNNJBDMPH__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFF9450)

inline static constexpr unsigned int OFHNNJBDMPH_TypeDefinitionIndex = 10209;

class OFHNNJBDMPH : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::Il2CppArray<::PFKFGPNNDCH*>* OJMBOGGMIKO; // 0x18
	::MDHEKGIOJMG DHDJDGFNBOA; // 0x20
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFHNNJBDMPH__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OFHNNJBDMPH_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFHNNJBDMPH_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + OFHNNJBDMPH_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + OFHNNJBDMPH_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFHNNJBDMPH_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFHNNJBDMPH_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFHNNJBDMPH_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + OFHNNJBDMPH_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFHNNJBDMPH_CHLEALKAOJO_OFFSET))(this);
	}
};
