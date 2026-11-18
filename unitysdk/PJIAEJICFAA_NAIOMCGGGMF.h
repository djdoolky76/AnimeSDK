#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ELNBGNFNNMJ.h"
#include "unitysdk/HCIPMEEIBPP.h"
#include "unitysdk/OJGICDJIDFN.h"
#include "unitysdk/PGDANPMGKPN.h"
#include "unitysdk/UnityEngine/Vector3.h"

class GKOGIFAOFAA;
class PBOFLJFGIMD;
class PJIAEJICFAA;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define PJIAEJICFAA_NAIOMCGGGMF_ACNJOIJDNAA_OFFSET UNITYSDK_OFFSET(0x1D9CE820)
#define PJIAEJICFAA_NAIOMCGGGMF_BCHBJDDFNCP_OFFSET UNITYSDK_OFFSET(0x1D9CE680)
#define PJIAEJICFAA_NAIOMCGGGMF_DGBGAHPMELL_OFFSET UNITYSDK_OFFSET(0x1D9CE540)
#define PJIAEJICFAA_NAIOMCGGGMF_FEPIAGALOEP_OFFSET UNITYSDK_OFFSET(0x1D9CE3E0)
#define PJIAEJICFAA_NAIOMCGGGMF_IHLOABJAKDA_OFFSET UNITYSDK_OFFSET(0x1D9CE3F0)
#define PJIAEJICFAA_NAIOMCGGGMF_JMPEMIMKCMF_OFFSET UNITYSDK_OFFSET(0x1D9CE5A0)
#define PJIAEJICFAA_NAIOMCGGGMF__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9CE1A0)

inline static constexpr unsigned int PJIAEJICFAA_NAIOMCGGGMF_TypeDefinitionIndex = 39662;

class PJIAEJICFAA_NAIOMCGGGMF : public ::OJGICDJIDFN
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::PGDANPMGKPN>* IFMBEAHKCIL; // 0x18
	::System::Collections::Generic::Queue_1<::ELNBGNFNNMJ>* JMHEDJOIJNM; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* ECNLEGIFIHA; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::PBOFLJFGIMD*>* IABLKBBNNJE; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::GKOGIFAOFAA*>* NBOGINGDBPL; // 0x38
	::System::Int32 IIFMJFJOOCK; // 0x40
	::System::Single MDJNOBGPJBA; // 0x44
	::System::Single AHAFNGEDPLI; // 0x48
	::UnityEngine::Vector3 PNEIMNKBIAF; // 0x4C
	::System::Single OKCELMMEODN; // 0x58
	::System::Single JHPGOBOJCJK; // 0x5C
	::System::Int32 LBJFLNACOHA; // 0x60
	::UnityEngine::Vector3 EKDFMJLPIPI; // 0x64
	::System::Int32 AEPDIMADPBK; // 0x70
	::System::Boolean KKAALHEABBE; // 0x74
	::System::Boolean FGIOENGCLOP; // 0x75
	::System::Boolean GDNANFIHCNA; // 0x76
	::System::Boolean LBGGAAKKPLP; // 0x77
	::System::Int32 DHHOACNJJPO; // 0x78
	::System::Int32 PMFOPGAJOLI; // 0x7C
	::System::Single CDMFBNHLMDG; // 0x80
	::System::Single HKAKMKANDBL; // 0x84
	::System::Single LLMJMOBFAID; // 0x88
	::HCIPMEEIBPP OKNAJEBOPNP; // 0x8C

	::System::Void _ctor(::PJIAEJICFAA* HBNBIBADGNH)
	{
		return ((::System::Void(*)(::PVOID, ::PJIAEJICFAA*))((::PBYTE)hIl2Cpp + PJIAEJICFAA_NAIOMCGGGMF__CTOR_OFFSET))(this, HBNBIBADGNH);
	}

	::System::Void FEPIAGALOEP(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PJIAEJICFAA_NAIOMCGGGMF_FEPIAGALOEP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean IHLOABJAKDA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PJIAEJICFAA_NAIOMCGGGMF_IHLOABJAKDA_OFFSET))(this);
	}

	::System::Single DGBGAHPMELL()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PJIAEJICFAA_NAIOMCGGGMF_DGBGAHPMELL_OFFSET))(this);
	}

	::PGDANPMGKPN JMPEMIMKCMF(::System::Int32 CHOLPJCDLAI)
	{
		return ((::PGDANPMGKPN(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PJIAEJICFAA_NAIOMCGGGMF_JMPEMIMKCMF_OFFSET))(this, CHOLPJCDLAI);
	}

	::PBOFLJFGIMD* BCHBJDDFNCP(::System::Int32 KMOHKCADPNA)
	{
		return ((::PBOFLJFGIMD*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PJIAEJICFAA_NAIOMCGGGMF_BCHBJDDFNCP_OFFSET))(this, KMOHKCADPNA);
	}

	::System::Int32 ACNJOIJDNAA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJIAEJICFAA_NAIOMCGGGMF_ACNJOIJDNAA_OFFSET))(this);
	}
};
