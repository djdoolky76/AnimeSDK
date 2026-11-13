#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EvolvePeriodType.h"
#include "unitysdk/System/Object.h"
class GFNAPELNFIC;
class MOOEMCFGGNM;
class NBEAPDPABLI;
class NGDGDIGJPFP;
class OCCMJNNBBKC;
class OEMOIGDNPNP;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NGDGDIGJPFP_CTOR_OFFSET UNITYSDK_OFFSET(0x18E87570)
#define NGDGDIGJPFP_HEPPBBLLBPN_OFFSET UNITYSDK_OFFSET(0x18E872D0)

inline static constexpr unsigned int NGDGDIGJPFP_TypeDefinitionIndex = 57526;

	class NGDGDIGJPFP : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* CMCDONLEAFO; // 0x10
		::System::Collections::Generic::List_1<::GFNAPELNFIC*>* OODBOPJANLI; // 0x18
		::System::Collections::Generic::List_1<::OEMOIGDNPNP*>* PIBKHIILLLF; // 0x20
		::OCCMJNNBBKC* HPHJGIEKMAA; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::NBEAPDPABLI*>* PEPGHMFECCG; // 0x30
		::MOOEMCFGGNM* INPNMBJNPPK; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* FPONJJMJFAE; // 0x40
		::System::Collections::Generic::List_1<::System::UInt32>* BLLKCBJGAEB; // 0x48
		::System::Collections::Generic::List_1<::System::UInt32>* CPOGNJAMKIB; // 0x50
		::System::Collections::Generic::List_1<::GFNAPELNFIC*>* DNNPKNGGJHH; // 0x58
		::System::Collections::Generic::List_1<::System::UInt32>* PMLEEGOGPIF; // 0x60
		::System::UInt32 JKHKAADJAEN; // 0x68
		::System::Boolean CPNPEGDFGFA; // 0x6C
		::System::Boolean DGGBJNJJKJF; // 0x6D
		::System::Boolean POLHAGFFJAH; // 0x6E
		::System::Boolean BHEPGKJKMDP; // 0x6F
		::System::Boolean DBLCBJNGOEI; // 0x70
		::System::Byte _padding0[0x3];
		::System::UInt32 FICENPFBEBB; // 0x74
		::System::UInt32 ACOPEEKAFLF; // 0x78
		::System::UInt32 JIBBEBNCHAM; // 0x7C
		::System::UInt32 OIPPPLAENHI; // 0x80
		::System::UInt32 NNIOMKGHEEI; // 0x84
		::System::UInt32 EJEDDAINLFE; // 0x88
		::RPG::GameCore::EvolvePeriodType JNCLBMMJOFE; // 0x8C
		::System::UInt32 PJNNPOKJEFD; // 0x90
		::System::UInt32 ONGDMDIADMN; // 0x94
		::System::UInt32 FMHGMGMGMMA; // 0x98
		::System::UInt32 OGBEHKGJFAF; // 0x9C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGDGDIGJPFP_CTOR_OFFSET))(this);
		}

		::NGDGDIGJPFP* HEPPBBLLBPN()
		{
			return ((::NGDGDIGJPFP*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGDGDIGJPFP_HEPPBBLLBPN_OFFSET))(this);
		}

	};
