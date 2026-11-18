#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxVector.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"

namespace MoleMole { class ConfigNewbie_NewbieGroup; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DDJDKKDNGFK_AGMFCCKFKDD_OFFSET UNITYSDK_OFFSET(0x15362D50)
#define DDJDKKDNGFK_DANENFBKNJO_OFFSET UNITYSDK_OFFSET(0x15363B10)
#define DDJDKKDNGFK_JPODFHIJLFP_OFFSET UNITYSDK_OFFSET(0x15362DB0)
#define DDJDKKDNGFK_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x15363340)
#define DDJDKKDNGFK_MMBNFELOJHC_OFFSET UNITYSDK_OFFSET(0x15363AA0)
#define DDJDKKDNGFK_NOGAPFIDLJC_OFFSET UNITYSDK_OFFSET(0x15362FC0)
#define DDJDKKDNGFK_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x15363B00)
#define DDJDKKDNGFK_PCBPHBGFMMC_OFFSET UNITYSDK_OFFSET(0x15363BD0)
#define DDJDKKDNGFK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x153638E0)
#define DDJDKKDNGFK__CTOR_OFFSET UNITYSDK_OFFSET(0x15362D40)

inline static constexpr unsigned int DDJDKKDNGFK_TypeDefinitionIndex = 40376;

class DDJDKKDNGFK : public ::System::Object
{
public:
	::FlexBuffers::FlxVector PALJMAJEGGL; // 0x10
	::Foundation::AssetRequestHandle OFHPHIBOPKE; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* MGANGKBOAPN; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* CMIJDDGJJEG; // 0x50
	::Il2CppArray<::System::Byte>* EFEDMJMFBEE; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDJDKKDNGFK__CTOR_OFFSET))(this);
	}

	::System::Int32 AGMFCCKFKDD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDJDKKDNGFK_AGMFCCKFKDD_OFFSET))(this);
	}

	::MoleMole::ConfigNewbie_NewbieGroup* JPODFHIJLFP(::System::Int32 KMMGKJPAOMF)
	{
		return ((::MoleMole::ConfigNewbie_NewbieGroup*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DDJDKKDNGFK_JPODFHIJLFP_OFFSET))(this, KMMGKJPAOMF);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDJDKKDNGFK_LNFENFDLMIG_OFFSET))(this);
	}

	static ::MoleMole::ConfigNewbie_NewbieGroup* NOGAPFIDLJC(::FlexBuffers::FlxMap JIMHIEPMDKI)
	{
		return ((::MoleMole::ConfigNewbie_NewbieGroup*(*)(::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + DDJDKKDNGFK_NOGAPFIDLJC_OFFSET))(JIMHIEPMDKI);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDJDKKDNGFK_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Int32 MMBNFELOJHC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDJDKKDNGFK_MMBNFELOJHC_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DDJDKKDNGFK_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Object* DANENFBKNJO()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDJDKKDNGFK_DANENFBKNJO_OFFSET))(this);
	}

	::System::Boolean PCBPHBGFMMC(::System::Int32 KMMGKJPAOMF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DDJDKKDNGFK_PCBPHBGFMMC_OFFSET))(this, KMMGKJPAOMF);
	}
};
