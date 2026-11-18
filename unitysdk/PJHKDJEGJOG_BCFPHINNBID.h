#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CINBCDONMPK;
namespace System { class String; }

#define PJHKDJEGJOG_BCFPHINNBID_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x1BF1F4E0)
#define PJHKDJEGJOG_BCFPHINNBID_FNKFOMMBGOG_OFFSET UNITYSDK_OFFSET(0x1BF1F3E0)
#define PJHKDJEGJOG_BCFPHINNBID_HFLMBDHMIHB_OFFSET UNITYSDK_OFFSET(0x1BF1F460)
#define PJHKDJEGJOG_BCFPHINNBID_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BF1F000)
#define PJHKDJEGJOG_BCFPHINNBID__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF1DBE0)

inline static constexpr unsigned int PJHKDJEGJOG_BCFPHINNBID_TypeDefinitionIndex = 67867;

class PJHKDJEGJOG_BCFPHINNBID : public ::System::Object
{
public:
	::System::UInt32 HKHHHJHCGKL; // 0x10
	::System::UInt32 DKPLOKENJHF; // 0x14
	::System::Int32 PEJOAEKACCP; // 0x18
	::System::Boolean ONNBBOKLIEH; // 0x1C
	::System::Byte _padding0[0x3];
	::System::UInt32 NJNCGJLHLKC; // 0x20
	::System::UInt32 NLPFIBPHGDD; // 0x24
	::System::UInt32 LFAEBNBAGLK; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJHKDJEGJOG_BCFPHINNBID__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJHKDJEGJOG_BCFPHINNBID_TOSTRING_OFFSET))(this);
	}

	::System::Void FNKFOMMBGOG(::CINBCDONMPK* GMFDBIGMBHE)
	{
		return ((::System::Void(*)(::PVOID, ::CINBCDONMPK*))((::PBYTE)hIl2Cpp + PJHKDJEGJOG_BCFPHINNBID_FNKFOMMBGOG_OFFSET))(this, GMFDBIGMBHE);
	}

	::System::Void HFLMBDHMIHB(::CINBCDONMPK* GMFDBIGMBHE)
	{
		return ((::System::Void(*)(::PVOID, ::CINBCDONMPK*))((::PBYTE)hIl2Cpp + PJHKDJEGJOG_BCFPHINNBID_HFLMBDHMIHB_OFFSET))(this, GMFDBIGMBHE);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJHKDJEGJOG_BCFPHINNBID_DPIHOJBBGLA_OFFSET))(this);
	}
};
