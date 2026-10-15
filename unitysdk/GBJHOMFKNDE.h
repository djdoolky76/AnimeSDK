#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GBJHOMFKNDE_RF_TransformComponent.h"
#include "unitysdk/RPG/Client/LittleGameShare/ReplicationFlag.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
class AEDGBKOJEFD;
class GBJHOMFKNDE_MBINELLPJIK;
class LNHACPACCKH;
class OFKKOGBKOFI;
namespace Entitas { class IComponent; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define GBJHOMFKNDE_CECMCADBMDE_OFFSET UNITYSDK_OFFSET(0x1C5FE510)
#define GBJHOMFKNDE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5FE1D0)
#define GBJHOMFKNDE_DPMHDFDIGMJ_OFFSET UNITYSDK_OFFSET(0x1C5FE920)
#define GBJHOMFKNDE_FCHMADJPDOM_OFFSET UNITYSDK_OFFSET(0x1C5FF4E0)
#define GBJHOMFKNDE_FHFEPAIOENI_OFFSET UNITYSDK_OFFSET(0x1C5FDA10)
#define GBJHOMFKNDE_FMDIMGPGIHD_OFFSET UNITYSDK_OFFSET(0x1C5FE220)
#define GBJHOMFKNDE_GET_SOURCEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C5FE4B0)
#define GBJHOMFKNDE_GET_TARGETBUFFER_OFFSET UNITYSDK_OFFSET(0x1C5FE4D0)
#define GBJHOMFKNDE_GMLDPHJODIJ_OFFSET UNITYSDK_OFFSET(0x1C5FF1E0)
#define GBJHOMFKNDE_HAIHHFOPBLN_OFFSET UNITYSDK_OFFSET(0x1C5FD980)
#define GBJHOMFKNDE_HHMFILFAMNA_OFFSET UNITYSDK_OFFSET(0x1C5FE4F0)
#define GBJHOMFKNDE_KGMOPHKIKCJ_OFFSET UNITYSDK_OFFSET(0x1C5FDF70)
#define GBJHOMFKNDE_LBIHOLKGMIB_OFFSET UNITYSDK_OFFSET(0x1C5FE550)
#define GBJHOMFKNDE_LCEHGAIIHIK_OFFSET UNITYSDK_OFFSET(0x1C5FDEC0)
#define GBJHOMFKNDE_MJEODHKPKEB_OFFSET UNITYSDK_OFFSET(0x1C5FE0D0)
#define GBJHOMFKNDE_MKMMDNEGDFF_OFFSET UNITYSDK_OFFSET(0x1C5FED70)
#define GBJHOMFKNDE_NALIIADEEMO_OFFSET UNITYSDK_OFFSET(0x1C5FE8C0)
#define GBJHOMFKNDE_NBLPPFGNHHO_OFFSET UNITYSDK_OFFSET(0x1C5FF530)
#define GBJHOMFKNDE_NCPODAMBBHK_OFFSET UNITYSDK_OFFSET(0x1C5FE3A0)
#define GBJHOMFKNDE_NJKHGPCDAMI_1_OFFSET UNITYSDK_OFFSET(0x1C5FF440)
#define GBJHOMFKNDE_NJKHGPCDAMI_OFFSET UNITYSDK_OFFSET(0x1C5FE740)
#define GBJHOMFKNDE_NOJIPMKAGON_OFFSET UNITYSDK_OFFSET(0x1C5FE470)
#define GBJHOMFKNDE_OELDMLMHEHN_OFFSET UNITYSDK_OFFSET(0x1C5FE530)
#define GBJHOMFKNDE_PCIOAANPHKO_OFFSET UNITYSDK_OFFSET(0x1C5FE020)
#define GBJHOMFKNDE_PNJODACLLPH_OFFSET UNITYSDK_OFFSET(0x1C5FE460)
#define GBJHOMFKNDE_SET_SOURCEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C5FE4C0)
#define GBJHOMFKNDE_SET_TARGETBUFFER_OFFSET UNITYSDK_OFFSET(0x1C5FE4E0)

inline static constexpr unsigned int GBJHOMFKNDE_TypeDefinitionIndex = 36844;

	class GBJHOMFKNDE : public ::System::Object
	{
	public:
		::System::Func_3<::OFKKOGBKOFI*, ::System::Single, ::System::Int32>* FBGOIIOFANH; // 0x10
		::GBJHOMFKNDE_MBINELLPJIK* _SourceBuffer_k__BackingField; // 0x18
		::GBJHOMFKNDE_MBINELLPJIK* _TargetBuffer_k__BackingField; // 0x20
		::GBJHOMFKNDE_RF_TransformComponent HFKLFHBEDEM; // 0x28
		::RPG::MVector3 AIBODDMGPMF; // 0x2C
		::RPG::MVector3 EHOIDNKOPEJ; // 0x38
		::RPG::MVector3 IMJEPKABDCA; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBJHOMFKNDE_CTOR_OFFSET))(this);
		}

		::System::Void HAIHHFOPBLN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GBJHOMFKNDE_HAIHHFOPBLN_OFFSET))(this, a1);
		}

		::System::Void FHFEPAIOENI(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GBJHOMFKNDE_FHFEPAIOENI_OFFSET))(this, a1);
		}

		::Entitas::IComponent* MJEODHKPKEB()
		{
			return ((::Entitas::IComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBJHOMFKNDE_MJEODHKPKEB_OFFSET))(this);
		}

		::System::Boolean FMDIMGPGIHD(::Entitas::IComponent* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + GBJHOMFKNDE_FMDIMGPGIHD_OFFSET))(this, a1);
		}

		::System::Void NCPODAMBBHK(::Entitas::IComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + GBJHOMFKNDE_NCPODAMBBHK_OFFSET))(this, a1);
		}

		::System::Boolean PNJODACLLPH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GBJHOMFKNDE_PNJODACLLPH_OFFSET))(this);
		}

		::System::Void NOJIPMKAGON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBJHOMFKNDE_NOJIPMKAGON_OFFSET))(this);
		}

		::GBJHOMFKNDE_MBINELLPJIK* get_SourceBuffer()
		{
			return ((::GBJHOMFKNDE_MBINELLPJIK*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBJHOMFKNDE_GET_SOURCEBUFFER_OFFSET))(this);
		}

		::System::Void set_SourceBuffer(::GBJHOMFKNDE_MBINELLPJIK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GBJHOMFKNDE_MBINELLPJIK*))((::PBYTE)hIl2Cpp + GBJHOMFKNDE_SET_SOURCEBUFFER_OFFSET))(this, a1);
		}

		::GBJHOMFKNDE_MBINELLPJIK* get_TargetBuffer()
		{
			return ((::GBJHOMFKNDE_MBINELLPJIK*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBJHOMFKNDE_GET_TARGETBUFFER_OFFSET))(this);
		}

		::System::Void set_TargetBuffer(::GBJHOMFKNDE_MBINELLPJIK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GBJHOMFKNDE_MBINELLPJIK*))((::PBYTE)hIl2Cpp + GBJHOMFKNDE_SET_TARGETBUFFER_OFFSET))(this, a1);
		}

		::RPG::MVector3 HHMFILFAMNA()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GBJHOMFKNDE_HHMFILFAMNA_OFFSET))(this);
		}

		::System::Void LCEHGAIIHIK(::RPG::MVector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + GBJHOMFKNDE_LCEHGAIIHIK_OFFSET))(this, a1);
		}

		::RPG::MVector3 CECMCADBMDE()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GBJHOMFKNDE_CECMCADBMDE_OFFSET))(this);
		}

		::System::Void KGMOPHKIKCJ(::RPG::MVector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + GBJHOMFKNDE_KGMOPHKIKCJ_OFFSET))(this, a1);
		}

		::RPG::MVector3 OELDMLMHEHN()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GBJHOMFKNDE_OELDMLMHEHN_OFFSET))(this);
		}

		::System::Void PCIOAANPHKO(::RPG::MVector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + GBJHOMFKNDE_PCIOAANPHKO_OFFSET))(this, a1);
		}

		::System::Void LBIHOLKGMIB(::AEDGBKOJEFD* a1, ::RPG::Client::LittleGameShare::ReplicationFlag a2)
		{
			return ((::System::Void(*)(::PVOID, ::AEDGBKOJEFD*, ::RPG::Client::LittleGameShare::ReplicationFlag))((::PBYTE)hIl2Cpp + GBJHOMFKNDE_LBIHOLKGMIB_OFFSET))(this, a1, a2);
		}

		::System::Void NJKHGPCDAMI(::LNHACPACCKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNHACPACCKH*))((::PBYTE)hIl2Cpp + GBJHOMFKNDE_NJKHGPCDAMI_OFFSET))(this, a1);
		}

		::System::Void NALIIADEEMO(::LNHACPACCKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNHACPACCKH*))((::PBYTE)hIl2Cpp + GBJHOMFKNDE_NALIIADEEMO_OFFSET))(this, a1);
		}

		::Entitas::IComponent* DPMHDFDIGMJ(::LNHACPACCKH* a1)
		{
			return ((::Entitas::IComponent*(*)(::PVOID, ::LNHACPACCKH*))((::PBYTE)hIl2Cpp + GBJHOMFKNDE_DPMHDFDIGMJ_OFFSET))(this, a1);
		}

		::System::Void MKMMDNEGDFF(::LNHACPACCKH* a1, ::LNHACPACCKH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LNHACPACCKH*, ::LNHACPACCKH*))((::PBYTE)hIl2Cpp + GBJHOMFKNDE_MKMMDNEGDFF_OFFSET))(this, a1, a2);
		}

		::System::Void GMLDPHJODIJ(::LNHACPACCKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNHACPACCKH*))((::PBYTE)hIl2Cpp + GBJHOMFKNDE_GMLDPHJODIJ_OFFSET))(this, a1);
		}

		::System::Void NJKHGPCDAMI_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GBJHOMFKNDE_NJKHGPCDAMI_1_OFFSET))(this, a1);
		}

		::System::Boolean FCHMADJPDOM(::GBJHOMFKNDE_RF_TransformComponent a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GBJHOMFKNDE_RF_TransformComponent))((::PBYTE)hIl2Cpp + GBJHOMFKNDE_FCHMADJPDOM_OFFSET))(this, a1);
		}

		::System::Boolean NBLPPFGNHHO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GBJHOMFKNDE_NBLPPFGNHHO_OFFSET))(this);
		}

	};
