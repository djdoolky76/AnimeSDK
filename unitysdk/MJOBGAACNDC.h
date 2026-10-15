#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NavMap/NavAreaType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/LevelNavNodeInfo.h"
#include "unitysdk/UnityEngine/Vector3.h"
class DJJFECDBGIK;
class FAKLBEIDKMD;
class FFCGHKGDAJF;
class GIJPBMMNJKO;
class MJOBGAACNDC;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MJOBGAACNDC_ACJDOFKJHKO_OFFSET UNITYSDK_OFFSET(0xB978C90)
#define MJOBGAACNDC_AJEOJCKBJPL_OFFSET UNITYSDK_OFFSET(0xB976AB0)
#define MJOBGAACNDC_BCGHEJPLIEP_OFFSET UNITYSDK_OFFSET(0xB978DA0)
#define MJOBGAACNDC_BJBBBPKGDIF_OFFSET UNITYSDK_OFFSET(0xB977ED0)
#define MJOBGAACNDC_BJMNKLGEMPM_OFFSET UNITYSDK_OFFSET(0xB979D40)
#define MJOBGAACNDC_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB976AF0)
#define MJOBGAACNDC_CALGAPBGDLK_OFFSET UNITYSDK_OFFSET(0xB977D40)
#define MJOBGAACNDC_CTOR_OFFSET UNITYSDK_OFFSET(0xB976B90)
#define MJOBGAACNDC_ENEFIPEFEEE_OFFSET UNITYSDK_OFFSET(0xB978F10)
#define MJOBGAACNDC_GET_ID_OFFSET UNITYSDK_OFFSET(0xB976A30)
#define MJOBGAACNDC_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xB976A90)
#define MJOBGAACNDC_GFPHIJLLILO_OFFSET UNITYSDK_OFFSET(0xB978B30)
#define MJOBGAACNDC_GIEADBDDCDM_OFFSET UNITYSDK_OFFSET(0xB977860)
#define MJOBGAACNDC_GMIKIGIODJD_OFFSET UNITYSDK_OFFSET(0xB976F90)
#define MJOBGAACNDC_HDIEGOBDOBF_1_OFFSET UNITYSDK_OFFSET(0xB9790C0)
#define MJOBGAACNDC_HDIEGOBDOBF_OFFSET UNITYSDK_OFFSET(0xB978F80)
#define MJOBGAACNDC_HJFPHCNMANL_OFFSET UNITYSDK_OFFSET(0xB976DA0)
#define MJOBGAACNDC_IFLBALDDCEE_OFFSET UNITYSDK_OFFSET(0xB978A70)
#define MJOBGAACNDC_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0xB976A50)
#define MJOBGAACNDC_LHFPDLIIFAJ_OFFSET UNITYSDK_OFFSET(0xB977640)
#define MJOBGAACNDC_MFJFPNEIIBN_OFFSET UNITYSDK_OFFSET(0xB978070)
#define MJOBGAACNDC_NDLKIBLKMEP_OFFSET UNITYSDK_OFFSET(0xB977B40)
#define MJOBGAACNDC_SET_ID_OFFSET UNITYSDK_OFFSET(0xB976A40)
#define MJOBGAACNDC_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xB976AA0)

inline static constexpr unsigned int MJOBGAACNDC_TypeDefinitionIndex = 74604;

	class MJOBGAACNDC : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::DJJFECDBGIK*>* MFPDFIHEKLN; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* CBEFJBCGPJK; // 0x18
		::FFCGHKGDAJF* DCOPELFHOLO; // 0x20
		::System::UInt32 _ID_k__BackingField; // 0x28
		::System::UInt32 _Priority_k__BackingField; // 0x2C
		::System::Void _ctor(::FFCGHKGDAJF* a1, ::DJJFECDBGIK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FFCGHKGDAJF*, ::DJJFECDBGIK*))((::PBYTE)hIl2Cpp + MJOBGAACNDC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJOBGAACNDC_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MJOBGAACNDC_SET_ID_OFFSET))(this, a1);
		}

		::RPG::Client::NavMap::NavAreaType JBIOGKPHKKC()
		{
			return ((::RPG::Client::NavMap::NavAreaType(*)(::PVOID))((::PBYTE)hIl2Cpp + MJOBGAACNDC_JBIOGKPHKKC_OFFSET))(this);
		}

		::System::UInt32 get_Priority()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJOBGAACNDC_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void set_Priority(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MJOBGAACNDC_SET_PRIORITY_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::DJJFECDBGIK*>* AJEOJCKBJPL()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::DJJFECDBGIK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJOBGAACNDC_AJEOJCKBJPL_OFFSET))(this);
		}

		static ::MJOBGAACNDC* BPLPBPMEODA(::FFCGHKGDAJF* a1, ::RPG::GameCore::LevelNavNodeInfo a2)
		{
			return ((::MJOBGAACNDC*(*)(::FFCGHKGDAJF*, ::RPG::GameCore::LevelNavNodeInfo))((::PBYTE)hIl2Cpp + MJOBGAACNDC_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Void HJFPHCNMANL(::MJOBGAACNDC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MJOBGAACNDC*))((::PBYTE)hIl2Cpp + MJOBGAACNDC_HJFPHCNMANL_OFFSET))(this, a1);
		}

		::GIJPBMMNJKO* GMIKIGIODJD(::FAKLBEIDKMD* a1)
		{
			return ((::GIJPBMMNJKO*(*)(::PVOID, ::FAKLBEIDKMD*))((::PBYTE)hIl2Cpp + MJOBGAACNDC_GMIKIGIODJD_OFFSET))(this, a1);
		}

		::GIJPBMMNJKO* GIEADBDDCDM(::FAKLBEIDKMD* a1)
		{
			return ((::GIJPBMMNJKO*(*)(::PVOID, ::FAKLBEIDKMD*))((::PBYTE)hIl2Cpp + MJOBGAACNDC_GIEADBDDCDM_OFFSET))(this, a1);
		}

		::System::Void CALGAPBGDLK(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MJOBGAACNDC_CALGAPBGDLK_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IReadOnlyList_1<::GIJPBMMNJKO*>* BJBBBPKGDIF()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::GIJPBMMNJKO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJOBGAACNDC_BJBBBPKGDIF_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::GIJPBMMNJKO*>* LHFPDLIIFAJ(::UnityEngine::Vector3 a1)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::GIJPBMMNJKO*>*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MJOBGAACNDC_LHFPDLIIFAJ_OFFSET))(this, a1);
		}

		::System::Single IFLBALDDCEE(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MJOBGAACNDC_IFLBALDDCEE_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IReadOnlyList_1<::GIJPBMMNJKO*>* MFJFPNEIIBN(::UnityEngine::Vector3 a1)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::GIJPBMMNJKO*>*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MJOBGAACNDC_MFJFPNEIIBN_OFFSET))(this, a1);
		}

		::System::Boolean GFPHIJLLILO(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MJOBGAACNDC_GFPHIJLLILO_OFFSET))(this, a1);
		}

		::DJJFECDBGIK* NDLKIBLKMEP(::UnityEngine::Vector3 a1)
		{
			return ((::DJJFECDBGIK*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MJOBGAACNDC_NDLKIBLKMEP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* ACJDOFKJHKO()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJOBGAACNDC_ACJDOFKJHKO_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* BCGHEJPLIEP()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJOBGAACNDC_BCGHEJPLIEP_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* ENEFIPEFEEE()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJOBGAACNDC_ENEFIPEFEEE_OFFSET))(this);
		}

		::System::Void HDIEGOBDOBF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJOBGAACNDC_HDIEGOBDOBF_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* HDIEGOBDOBF_1(::DJJFECDBGIK* a1, ::DJJFECDBGIK* a2)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID, ::DJJFECDBGIK*, ::DJJFECDBGIK*))((::PBYTE)hIl2Cpp + MJOBGAACNDC_HDIEGOBDOBF_1_OFFSET))(this, a1, a2);
		}

		::System::Void BJMNKLGEMPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJOBGAACNDC_BJMNKLGEMPM_OFFSET))(this);
		}

	};
