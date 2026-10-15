#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/B51Racing/B51RacingReadyDriverPanelIconState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class AEANOGAFBGK;
class BDHINPLKOPK;
class CHIGMLNHHDP;
class CIFKCGJNFHF;
class DCNNAGMLENM;
class HBGNFKBHDJK;
class IAKMFLMFALK;
class KBKFLNHFHPF;
class LGKNPHGNNDI;
class PNAKMCAJHHJ;
class PPEJPEMHNAO;
namespace RPG::Client::B51Racing { class B51RacingReadyDriverDetailViewModel; }
namespace RPG::Client::B51Racing { class B51RacingReadyDriverPanelViewModel; }
namespace RPG::Client::B51Racing { class B51RacingReadyPageViewModel; }
namespace RPG::Client::B51Racing { class B51RacingReadyVehicleDetailViewModel; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GCJKKPABMDK_ALJKBIKECDG_OFFSET UNITYSDK_OFFSET(0x1597FEC0)
#define GCJKKPABMDK_BBMEGMKEDHL_OFFSET UNITYSDK_OFFSET(0x15980030)
#define GCJKKPABMDK_CEJPPKJDKNK_OFFSET UNITYSDK_OFFSET(0x1597EA40)
#define GCJKKPABMDK_CGIGBEMBMPI_OFFSET UNITYSDK_OFFSET(0x15980B10)
#define GCJKKPABMDK_CTOR_OFFSET UNITYSDK_OFFSET(0x1597E340)
#define GCJKKPABMDK_DFLLADBFNMF_OFFSET UNITYSDK_OFFSET(0x15980FD0)
#define GCJKKPABMDK_DGJFBMGGALA_OFFSET UNITYSDK_OFFSET(0x1597E740)
#define GCJKKPABMDK_EHKBFEOJNCI_OFFSET UNITYSDK_OFFSET(0x1597E350)
#define GCJKKPABMDK_FJMHPLLONKC_OFFSET UNITYSDK_OFFSET(0x1597E500)
#define GCJKKPABMDK_GEBGOMJIDJN_OFFSET UNITYSDK_OFFSET(0x15980C10)
#define GCJKKPABMDK_GMIOGKNPBPA_OFFSET UNITYSDK_OFFSET(0x15980240)
#define GCJKKPABMDK_HHFJLEOMCPL_OFFSET UNITYSDK_OFFSET(0x15980B70)
#define GCJKKPABMDK_HICPENOAPFP_OFFSET UNITYSDK_OFFSET(0x1597EED0)
#define GCJKKPABMDK_HLGJKBIEIDB_OFFSET UNITYSDK_OFFSET(0x1597F900)
#define GCJKKPABMDK_IAEDAFHMECK_OFFSET UNITYSDK_OFFSET(0x1597E3E0)
#define GCJKKPABMDK_JNJHCDPNLFC_OFFSET UNITYSDK_OFFSET(0x1597F5D0)
#define GCJKKPABMDK_KIKJDMCCCPB_OFFSET UNITYSDK_OFFSET(0x1597EC30)
#define GCJKKPABMDK_KMLPAEHPDNG_OFFSET UNITYSDK_OFFSET(0x1597FF90)
#define GCJKKPABMDK_LCPBKBMIACO_OFFSET UNITYSDK_OFFSET(0x1597FA90)
#define GCJKKPABMDK_LNEGJIDADDN_OFFSET UNITYSDK_OFFSET(0x1597F260)
#define GCJKKPABMDK_MCBILABHHEH_OFFSET UNITYSDK_OFFSET(0x1597F9E0)
#define GCJKKPABMDK_MIAIDKOCPMI_OFFSET UNITYSDK_OFFSET(0x1597E7E0)
#define GCJKKPABMDK_MONCKNJJMHM_OFFSET UNITYSDK_OFFSET(0x159810D0)
#define GCJKKPABMDK_NGPILEAODHD_OFFSET UNITYSDK_OFFSET(0x15980530)
#define GCJKKPABMDK_OAGHGDCKFHJ_OFFSET UNITYSDK_OFFSET(0x1597E620)
#define GCJKKPABMDK_PEICAKJAGFO_OFFSET UNITYSDK_OFFSET(0x1597EB30)
#define GCJKKPABMDK_PKCAMAJNJDN_OFFSET UNITYSDK_OFFSET(0x1597E910)
#define GCJKKPABMDK_PKIFDMOOGAF_OFFSET UNITYSDK_OFFSET(0x159805B0)

	class GCJKKPABMDK : public ::System::Object
	{
	public:
		::KBKFLNHFHPF* APIINPIAPFI; // 0x10
		::System::Void _ctor(::KBKFLNHFHPF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KBKFLNHFHPF*))((::PBYTE)hIl2Cpp + GCJKKPABMDK_CTOR_OFFSET))(this, a1);
		}

		::BDHINPLKOPK* EHKBFEOJNCI()
		{
			return ((::BDHINPLKOPK*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCJKKPABMDK_EHKBFEOJNCI_OFFSET))(this);
		}

		::CIFKCGJNFHF* IAEDAFHMECK()
		{
			return ((::CIFKCGJNFHF*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCJKKPABMDK_IAEDAFHMECK_OFFSET))(this);
		}

		::PPEJPEMHNAO* FJMHPLLONKC()
		{
			return ((::PPEJPEMHNAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCJKKPABMDK_FJMHPLLONKC_OFFSET))(this);
		}

		::CHIGMLNHHDP* OAGHGDCKFHJ()
		{
			return ((::CHIGMLNHHDP*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCJKKPABMDK_OAGHGDCKFHJ_OFFSET))(this);
		}

		::RPG::Client::B51Racing::B51RacingReadyPageViewModel* DGJFBMGGALA(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::B51Racing::B51RacingReadyPageViewModel*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + GCJKKPABMDK_DGJFBMGGALA_OFFSET))(this, a1, a2);
		}

		::RPG::Client::TextID MIAIDKOCPMI(::System::UInt32 a1)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GCJKKPABMDK_MIAIDKOCPMI_OFFSET))(this, a1);
		}

		::RPG::Client::TextID PKCAMAJNJDN(::System::UInt32 a1)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GCJKKPABMDK_PKCAMAJNJDN_OFFSET))(this, a1);
		}

		::System::UInt32 CEJPPKJDKNK(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GCJKKPABMDK_CEJPPKJDKNK_OFFSET))(this, a1);
		}

		::System::String* PEICAKJAGFO(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GCJKKPABMDK_PEICAKJAGFO_OFFSET))(this, a1);
		}

		::RPG::Client::B51Racing::B51RacingReadyDriverPanelViewModel* KIKJDMCCCPB(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::B51Racing::B51RacingReadyDriverPanelViewModel*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + GCJKKPABMDK_KIKJDMCCCPB_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::B51Racing::B51RacingReadyDriverDetailViewModel* HLGJKBIEIDB()
		{
			return ((::RPG::Client::B51Racing::B51RacingReadyDriverDetailViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCJKKPABMDK_HLGJKBIEIDB_OFFSET))(this);
		}

		::Il2CppArray<::HBGNFKBHDJK*>* LCPBKBMIACO()
		{
			return ((::Il2CppArray<::HBGNFKBHDJK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCJKKPABMDK_LCPBKBMIACO_OFFSET))(this);
		}

		::System::UInt32 MCBILABHHEH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCJKKPABMDK_MCBILABHHEH_OFFSET))(this);
		}

		::System::Void ALJKBIKECDG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GCJKKPABMDK_ALJKBIKECDG_OFFSET))(this, a1);
		}

		::RPG::Client::B51Racing::B51RacingReadyDriverPanelIconState JNJHCDPNLFC()
		{
			return ((::RPG::Client::B51Racing::B51RacingReadyDriverPanelIconState(*)(::PVOID))((::PBYTE)hIl2Cpp + GCJKKPABMDK_JNJHCDPNLFC_OFFSET))(this);
		}

		::RPG::Client::B51Racing::B51RacingReadyDriverDetailViewModel* LNEGJIDADDN(::AEANOGAFBGK* a1)
		{
			return ((::RPG::Client::B51Racing::B51RacingReadyDriverDetailViewModel*(*)(::PVOID, ::AEANOGAFBGK*))((::PBYTE)hIl2Cpp + GCJKKPABMDK_LNEGJIDADDN_OFFSET))(this, a1);
		}

		::System::Collections::Generic::SortedDictionary_2<::System::UInt32, ::System::UInt32>* KMLPAEHPDNG()
		{
			return ((::System::Collections::Generic::SortedDictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCJKKPABMDK_KMLPAEHPDNG_OFFSET))(this);
		}

		::System::UInt32 BBMEGMKEDHL(::System::Collections::Generic::SortedDictionary_2<::System::UInt32, ::System::UInt32>* a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::SortedDictionary_2<::System::UInt32, ::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + GCJKKPABMDK_BBMEGMKEDHL_OFFSET))(this, a1, a2);
		}

		::RPG::Client::B51Racing::B51RacingReadyVehicleDetailViewModel* HICPENOAPFP(::System::UInt32 a1, ::IAKMFLMFALK* a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::B51Racing::B51RacingReadyVehicleDetailViewModel*(*)(::PVOID, ::System::UInt32, ::IAKMFLMFALK*, ::System::UInt32))((::PBYTE)hIl2Cpp + GCJKKPABMDK_HICPENOAPFP_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::PNAKMCAJHHJ*>* GMIOGKNPBPA(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Collections::Generic::List_1<::PNAKMCAJHHJ*>*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + GCJKKPABMDK_GMIOGKNPBPA_OFFSET))(this, a1, a2);
		}

		::System::Boolean NGPILEAODHD(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GCJKKPABMDK_NGPILEAODHD_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::LGKNPHGNNDI*>* PKIFDMOOGAF()
		{
			return ((::System::Collections::Generic::List_1<::LGKNPHGNNDI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCJKKPABMDK_PKIFDMOOGAF_OFFSET))(this);
		}

		::System::Void CGIGBEMBMPI(::RPG::Client::B51Racing::B51RacingReadyPageViewModel* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingReadyPageViewModel*, ::System::Int32))((::PBYTE)hIl2Cpp + GCJKKPABMDK_CGIGBEMBMPI_OFFSET))(this, a1, a2);
		}

		::System::Boolean HHFJLEOMCPL(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GCJKKPABMDK_HHFJLEOMCPL_OFFSET))(this, a1);
		}

		::System::Void GEBGOMJIDJN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCJKKPABMDK_GEBGOMJIDJN_OFFSET))(this);
		}

		::DCNNAGMLENM* DFLLADBFNMF(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::DCNNAGMLENM*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + GCJKKPABMDK_DFLLADBFNMF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MONCKNJJMHM(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GCJKKPABMDK_MONCKNJJMHM_OFFSET))(this, a1);
		}

	};
