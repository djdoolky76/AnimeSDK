#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDNIBCBGJIP.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class CHFJHIKHFMB;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CHLAMKJLJEG_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B999F20)
#define CHLAMKJLJEG_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B999CF0)
#define CHLAMKJLJEG_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B999E60)
#define CHLAMKJLJEG_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B99A000)
#define CHLAMKJLJEG_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B999D00)
#define CHLAMKJLJEG_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B99A140)
#define CHLAMKJLJEG_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B999950)
#define CHLAMKJLJEG_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B999930)
#define CHLAMKJLJEG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B999C10)
#define CHLAMKJLJEG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B99A130)

inline static constexpr unsigned int CHLAMKJLJEG_TypeDefinitionIndex = 9412;

class CHLAMKJLJEG : public ::System::Object
{
public:
	::BDNIBCBGJIP DHDJDGFNBOA; // 0x10
	::System::Action* PLDOELOOFLL; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::Il2CppArray<::CHFJHIKHFMB*>* OJMBOGGMIKO; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLAMKJLJEG__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLAMKJLJEG_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLAMKJLJEG_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CHLAMKJLJEG_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + CHLAMKJLJEG_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLAMKJLJEG_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLAMKJLJEG_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLAMKJLJEG_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CHLAMKJLJEG_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLAMKJLJEG_CHLEALKAOJO_OFFSET))(this);
	}
};
