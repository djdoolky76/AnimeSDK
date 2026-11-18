#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/OKOLIIFHEKH.h"
#include "unitysdk/System/Object.h"

class EPFNKDELFMG;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define GMHFEGGDMKK_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A4DDD20)
#define GMHFEGGDMKK_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A4DDAE0)
#define GMHFEGGDMKK_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A4DDC60)
#define GMHFEGGDMKK_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A4DDE00)
#define GMHFEGGDMKK_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A4DDAF0)
#define GMHFEGGDMKK_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1A4DE150)
#define GMHFEGGDMKK_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A4DDF80)
#define GMHFEGGDMKK_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A4DD730)
#define GMHFEGGDMKK_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A4DD710)
#define GMHFEGGDMKK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A4DD9F0)
#define GMHFEGGDMKK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4DDF30)

inline static constexpr unsigned int GMHFEGGDMKK_TypeDefinitionIndex = 16194;

class GMHFEGGDMKK : public ::System::Object
{
public:
	::Il2CppArray<::EPFNKDELFMG*>* OJMBOGGMIKO; // 0x10
	::OKOLIIFHEKH DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMHFEGGDMKK__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GMHFEGGDMKK_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMHFEGGDMKK_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GMHFEGGDMKK_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + GMHFEGGDMKK_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMHFEGGDMKK_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMHFEGGDMKK_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMHFEGGDMKK_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMHFEGGDMKK_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + GMHFEGGDMKK_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::EPFNKDELFMG* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::EPFNKDELFMG*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GMHFEGGDMKK_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
