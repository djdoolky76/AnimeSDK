#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/BELENCMKDFO.h"
#include "unitysdk/FCMOFNMDNGG.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/IICPLAADMNN.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class AkCallbackInfo;
class DBHAGHMNDBN;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HGPHMDGIOAM_BINHELMKDPO_OFFSET UNITYSDK_OFFSET(0x15DAA490)
#define HGPHMDGIOAM_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x15DAA910)
#define HGPHMDGIOAM_DMBBNPCDFOG_OFFSET UNITYSDK_OFFSET(0x15DA9BE0)
#define HGPHMDGIOAM_EKALBDCBDAB_OFFSET UNITYSDK_OFFSET(0x15DA9D30)
#define HGPHMDGIOAM_FGBANFIFABK_OFFSET UNITYSDK_OFFSET(0x15DA9570)
#define HGPHMDGIOAM_IBEDILPMKBJ_OFFSET UNITYSDK_OFFSET(0x15DA9B00)
#define HGPHMDGIOAM_IIJCEPHCOOO_OFFSET UNITYSDK_OFFSET(0x15DAA6E0)
#define HGPHMDGIOAM_JDFOHCGOHCN_OFFSET UNITYSDK_OFFSET(0x15DAA120)
#define HGPHMDGIOAM_LHOFLCABGJB_1_OFFSET UNITYSDK_OFFSET(0x15DAA320)
#define HGPHMDGIOAM_LHOFLCABGJB_OFFSET UNITYSDK_OFFSET(0x15DAA1C0)
#define HGPHMDGIOAM_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x15DAA170)
#define HGPHMDGIOAM_PGHAJOMNDDJ_OFFSET UNITYSDK_OFFSET(0x15DA9E60)
#define HGPHMDGIOAM__CTOR_OFFSET UNITYSDK_OFFSET(0x15DA9490)

inline static constexpr unsigned int HGPHMDGIOAM_TypeDefinitionIndex = 86292;

class HGPHMDGIOAM : public ::System::Object
{
public:
	::System::Action* GFHPFCJOGNJ; // 0x10
	::DBHAGHMNDBN* KEMDGPLGNIL; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::IICPLAADMNN, ::FCMOFNMDNGG>, ::System::Collections::Generic::List_1<::BELENCMKDFO>*>* GCOCOLJJFAJ; // 0x20
	::System::UInt32 PNHBLBPDDMH; // 0x28
	::Foundation::Coroutine::CoroutineHandle GIMIAHPJNJA; // 0x2C
	::System::Int32 PNLOCMNCHLN; // 0x30
	::System::UInt32 AFLEHAHOBFC; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGPHMDGIOAM__CTOR_OFFSET))(this);
	}

	::System::Void IBEDILPMKBJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGPHMDGIOAM_IBEDILPMKBJ_OFFSET))(this);
	}

	::System::Void DMBBNPCDFOG(::System::UInt32 GFOPLDDFDIA, ::System::UInt32 ELNEEALLBGO)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + HGPHMDGIOAM_DMBBNPCDFOG_OFFSET))(this, GFOPLDDFDIA, ELNEEALLBGO);
	}

	::System::Void EKALBDCBDAB(::System::UInt32 GFOPLDDFDIA)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HGPHMDGIOAM_EKALBDCBDAB_OFFSET))(this, GFOPLDDFDIA);
	}

	::System::Void FGBANFIFABK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGPHMDGIOAM_FGBANFIFABK_OFFSET))(this);
	}

	::System::Void PGHAJOMNDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGPHMDGIOAM_PGHAJOMNDDJ_OFFSET))(this);
	}

	::System::Void JDFOHCGOHCN(::System::UInt32 GFOPLDDFDIA, ::System::UInt32 ELNEEALLBGO)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + HGPHMDGIOAM_JDFOHCGOHCN_OFFSET))(this, GFOPLDDFDIA, ELNEEALLBGO);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGPHMDGIOAM_NPOLNFDBOOD_OFFSET))(this);
	}

	::BELENCMKDFO LHOFLCABGJB(::IICPLAADMNN FFNKDGGHBPP, ::System::Int32 ABHBKFJKINO)
	{
		return ((::BELENCMKDFO(*)(::PVOID, ::IICPLAADMNN, ::System::Int32))((::PBYTE)hIl2Cpp + HGPHMDGIOAM_LHOFLCABGJB_OFFSET))(this, FFNKDGGHBPP, ABHBKFJKINO);
	}

	::System::UInt32 BINHELMKDPO(::IICPLAADMNN FFNKDGGHBPP, ::System::Int32 ABHBKFJKINO, ::System::Action* HKKEOJAJMLE)
	{
		return ((::System::UInt32(*)(::PVOID, ::IICPLAADMNN, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + HGPHMDGIOAM_BINHELMKDPO_OFFSET))(this, FFNKDGGHBPP, ABHBKFJKINO, HKKEOJAJMLE);
	}

	::System::Void IIJCEPHCOOO(::System::Object* BEHGCHBLHJJ, ::AkCallbackType OBNIAHNMHPF, ::AkCallbackInfo* HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + HGPHMDGIOAM_IIJCEPHCOOO_OFFSET))(this, BEHGCHBLHJJ, OBNIAHNMHPF, HMMMOCJAEOA);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGPHMDGIOAM_BJANDJKKNCD_OFFSET))(this);
	}

	::BELENCMKDFO LHOFLCABGJB_1(::IICPLAADMNN FFNKDGGHBPP, ::FCMOFNMDNGG MMJGCBNFMIE, ::System::Int32 ABHBKFJKINO)
	{
		return ((::BELENCMKDFO(*)(::PVOID, ::IICPLAADMNN, ::FCMOFNMDNGG, ::System::Int32))((::PBYTE)hIl2Cpp + HGPHMDGIOAM_LHOFLCABGJB_1_OFFSET))(this, FFNKDGGHBPP, MMJGCBNFMIE, ABHBKFJKINO);
	}
};
