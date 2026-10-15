#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IDEFMHBFDKL.h"
#include "unitysdk/RPG/Client/TSCRendererType.h"
class HNLEPDNENAJ;
namespace RPG { template <typename T> class PoolList_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define HNLEPDNENAJ_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0x15D9FFB0)
#define HNLEPDNENAJ_ABNMKAPKMGF_OFFSET UNITYSDK_OFFSET(0x15D9F1A0)
#define HNLEPDNENAJ_CLEAR_OFFSET UNITYSDK_OFFSET(0x15DA0120)
#define HNLEPDNENAJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15DA01B0)
#define HNLEPDNENAJ_EFHDNNMCOPB_OFFSET UNITYSDK_OFFSET(0x15D9FF20)
#define HNLEPDNENAJ_EJHLHCOHBCE_OFFSET UNITYSDK_OFFSET(0x15D9EF70)
#define HNLEPDNENAJ_LFFIEGIEENI_OFFSET UNITYSDK_OFFSET(0x15D9FE90)
#define HNLEPDNENAJ_LIACMNMJNBF_OFFSET UNITYSDK_OFFSET(0x15D9F110)
#define HNLEPDNENAJ_MCJALPKNNMD_OFFSET UNITYSDK_OFFSET(0x15D9F220)
#define HNLEPDNENAJ_MLNAPKIKHFO_OFFSET UNITYSDK_OFFSET(0x15D9F230)
#define HNLEPDNENAJ_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0x15D9EF80)
#define HNLEPDNENAJ_OONEJNFHIBB_OFFSET UNITYSDK_OFFSET(0x15D9FB80)
#define HNLEPDNENAJ_PJLOJLFPFFC_OFFSET UNITYSDK_OFFSET(0x15D9F280)

	class HNLEPDNENAJ : public ::IDEFMHBFDKL
	{
	public:
		::RPG::PoolList_1<::UnityEngine::Material*>* HOJNHPHGKKG; // 0x30
		::UnityEngine::Renderer* OJAHLJGABMJ; // 0x38
		::Il2CppArray<::UnityEngine::Material*>* HELNKPNLDLE; // 0x40
		::Il2CppArray<::System::Boolean>* CAMANMDOIEG; // 0x48
		::Il2CppArray<::UnityEngine::Material*>* FFEJIGEEEOD; // 0x50
		::System::Boolean LIJNPMJCIPE; // 0x58
		::System::Boolean IFOJGMEDPPD; // 0x59
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLEPDNENAJ_CTOR_OFFSET))(this);
		}

		::System::Boolean EJHLHCOHBCE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLEPDNENAJ_EJHLHCOHBCE_OFFSET))(this);
		}

		::HNLEPDNENAJ* OINBDMGFFJL(::UnityEngine::Renderer* a1, ::RPG::Client::TSCRendererType a2, ::System::Boolean a3)
		{
			return ((::HNLEPDNENAJ*(*)(::PVOID, ::UnityEngine::Renderer*, ::RPG::Client::TSCRendererType, ::System::Boolean))((::PBYTE)hIl2Cpp + HNLEPDNENAJ_OINBDMGFFJL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LIACMNMJNBF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLEPDNENAJ_LIACMNMJNBF_OFFSET))(this);
		}

		::System::Boolean ABNMKAPKMGF(::UnityEngine::Renderer* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + HNLEPDNENAJ_ABNMKAPKMGF_OFFSET))(this, a1);
		}

		::UnityEngine::Renderer* MCJALPKNNMD()
		{
			return ((::UnityEngine::Renderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLEPDNENAJ_MCJALPKNNMD_OFFSET))(this);
		}

		::System::Boolean MLNAPKIKHFO(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HNLEPDNENAJ_MLNAPKIKHFO_OFFSET))(this, a1);
		}

		::System::Void PJLOJLFPFFC(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HNLEPDNENAJ_PJLOJLFPFFC_OFFSET))(this, a1, a2);
		}

		::System::Void OONEJNFHIBB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLEPDNENAJ_OONEJNFHIBB_OFFSET))(this);
		}

		::System::Void LFFIEGIEENI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLEPDNENAJ_LFFIEGIEENI_OFFSET))(this);
		}

		::System::Void EFHDNNMCOPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLEPDNENAJ_EFHDNNMCOPB_OFFSET))(this);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLEPDNENAJ_ABKBOGIGAEH_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLEPDNENAJ_CLEAR_OFFSET))(this);
		}

	};
