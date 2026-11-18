#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IHGOHPEGJKP.h"
#include "unitysdk/ProtoScript/HollowEntityType.h"
#include "unitysdk/System/Object.h"

class AHDHIGCGKCK;
class GOLNGLCOEEA;
class IGKOFMFKNNO;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define AHLMMFMPHEO_DFPBGEGIGEA_OFFSET UNITYSDK_OFFSET(0x144DE440)
#define AHLMMFMPHEO_JGAMHAEIHKD_OFFSET UNITYSDK_OFFSET(0x144DE2D0)
#define AHLMMFMPHEO__CTOR_OFFSET UNITYSDK_OFFSET(0x144DE2C0)

inline static constexpr unsigned int AHLMMFMPHEO_TypeDefinitionIndex = 71782;

class AHLMMFMPHEO : public ::System::Object
{
public:
	::System::Collections::Generic::IList_1<::IHGOHPEGJKP>* FIEMAINLAEG; // 0x10
	::System::Collections::Generic::Dictionary_2<::IHGOHPEGJKP, ::IGKOFMFKNNO*>* KBCFGAOIHDJ; // 0x18
	::GOLNGLCOEEA* KNMOLPINLGA; // 0x20
	::System::UInt32 MLBNKKKCJGF; // 0x28
	::System::UInt32 ACHBBPJIBIE; // 0x2C
	::ProtoScript::HollowEntityType MKCOMJHINNJ; // 0x30

	::System::Void _ctor(::AHDHIGCGKCK* MLCFEGOMFGH)
	{
		return ((::System::Void(*)(::PVOID, ::AHDHIGCGKCK*))((::PBYTE)hIl2Cpp + AHLMMFMPHEO__CTOR_OFFSET))(this, MLCFEGOMFGH);
	}

	::System::Void JGAMHAEIHKD(::AHDHIGCGKCK* MLCFEGOMFGH)
	{
		return ((::System::Void(*)(::PVOID, ::AHDHIGCGKCK*))((::PBYTE)hIl2Cpp + AHLMMFMPHEO_JGAMHAEIHKD_OFFSET))(this, MLCFEGOMFGH);
	}

	::System::Void DFPBGEGIGEA(::AHDHIGCGKCK* MLCFEGOMFGH)
	{
		return ((::System::Void(*)(::PVOID, ::AHDHIGCGKCK*))((::PBYTE)hIl2Cpp + AHLMMFMPHEO_DFPBGEGIGEA_OFFSET))(this, MLCFEGOMFGH);
	}
};
