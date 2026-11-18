#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GBPCPPMFGIH.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class PIFJGHKOPEO;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define LICECBLALDC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19DA7570)
#define LICECBLALDC_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19DA7340)
#define LICECBLALDC_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19DA74B0)
#define LICECBLALDC_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x19DA79D0)
#define LICECBLALDC_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19DA7650)
#define LICECBLALDC_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19DA7350)
#define LICECBLALDC_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x19DA77F0)
#define LICECBLALDC_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19DA7AA0)
#define LICECBLALDC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19DA6FA0)
#define LICECBLALDC_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x19DA77D0)
#define LICECBLALDC_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19DA6F80)
#define LICECBLALDC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19DA7260)
#define LICECBLALDC__CTOR_OFFSET UNITYSDK_OFFSET(0x19DA7780)

inline static constexpr unsigned int LICECBLALDC_TypeDefinitionIndex = 10666;

class LICECBLALDC : public ::System::Object
{
public:
	::Il2CppArray<::PIFJGHKOPEO*>* OJMBOGGMIKO; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::GBPCPPMFGIH DHDJDGFNBOA; // 0x28
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LICECBLALDC__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LICECBLALDC_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LICECBLALDC_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LICECBLALDC_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + LICECBLALDC_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LICECBLALDC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LICECBLALDC_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LICECBLALDC_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LICECBLALDC_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LICECBLALDC_NAMKJOJBAOA_OFFSET))(this);
	}

	::PIFJGHKOPEO* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::PIFJGHKOPEO*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LICECBLALDC_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Collections::Generic::IReadOnlyList_1<::PIFJGHKOPEO*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::PIFJGHKOPEO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LICECBLALDC_EJABHIAHIAN_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + LICECBLALDC_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
