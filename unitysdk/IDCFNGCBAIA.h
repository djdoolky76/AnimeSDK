#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/FixVec3.h"
class AAKADBDHKBJ;
class ELHMEDAGGPG;
class HHMIFAELKCK;
class KAOOFGPIBGF;
class KPNOJJNHIFL;
class LFGIBPHFIMF;
class MJNGFEGNCOA;
namespace RPG::GameCore { class JsonEnum; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IDCFNGCBAIA_BEFOREDISPOSE_OFFSET UNITYSDK_OFFSET(0x15EA1730)
#define IDCFNGCBAIA_CNFNPIPICHI_OFFSET UNITYSDK_OFFSET(0x15EA20B0)
#define IDCFNGCBAIA_CTOR_OFFSET UNITYSDK_OFFSET(0x15EA2780)
#define IDCFNGCBAIA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15EA1860)
#define IDCFNGCBAIA_DNBCIEGGMCN_OFFSET UNITYSDK_OFFSET(0x15EA1AF0)
#define IDCFNGCBAIA_HJFFNDJOMLE_OFFSET UNITYSDK_OFFSET(0x15EA1960)
#define IDCFNGCBAIA_IOGGIIBIOIA_OFFSET UNITYSDK_OFFSET(0x15EA2750)
#define IDCFNGCBAIA_JCPFAMEELAH_OFFSET UNITYSDK_OFFSET(0x15EA2310)
#define IDCFNGCBAIA_KCKGCEBBCIE_OFFSET UNITYSDK_OFFSET(0x15EA2360)
#define IDCFNGCBAIA_LEFIJNPNIHC_OFFSET UNITYSDK_OFFSET(0x15EA1B90)
#define IDCFNGCBAIA_MHAJDOLAGOI_OFFSET UNITYSDK_OFFSET(0x15EA2770)
#define IDCFNGCBAIA_MOPJLKIHIHP_OFFSET UNITYSDK_OFFSET(0x15EA2760)
#define IDCFNGCBAIA_NOHBCHNLBAP_1_OFFSET UNITYSDK_OFFSET(0x15EA1EA0)
#define IDCFNGCBAIA_NOHBCHNLBAP_OFFSET UNITYSDK_OFFSET(0x15EA1D20)
#define IDCFNGCBAIA_OFEGLEDEFIK_OFFSET UNITYSDK_OFFSET(0x15EA25E0)
#define IDCFNGCBAIA__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x15EA1570)

inline static constexpr unsigned int IDCFNGCBAIA_TypeDefinitionIndex = 53983;

	class IDCFNGCBAIA : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::AAKADBDHKBJ* AAPDKELFMNH; // 0x18
		::System::Collections::Generic::List_1<::HHMIFAELKCK*>* MOBLNLPNOIN; // 0x20
		::KAOOFGPIBGF* PLJPNMPJMJH; // 0x28
		::RPG::GameCore::FixPoint NMCJLENIEFC; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCFNGCBAIA_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitOwnerRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCFNGCBAIA__ONINITOWNERREF_OFFSET))(this);
		}

		::System::Void BeforeDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCFNGCBAIA_BEFOREDISPOSE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCFNGCBAIA_DISPOSE_OFFSET))(this);
		}

		::HHMIFAELKCK* HJFFNDJOMLE(::System::UInt32 a1, ::LFGIBPHFIMF* a2, ::ELHMEDAGGPG* a3, ::KPNOJJNHIFL* a4, ::RPG::GameCore::FixPoint a5, ::Il2CppArray<::RPG::GameCore::JsonEnum*>* a6, ::System::String* a7)
		{
			return ((::HHMIFAELKCK*(*)(::PVOID, ::System::UInt32, ::LFGIBPHFIMF*, ::ELHMEDAGGPG*, ::KPNOJJNHIFL*, ::RPG::GameCore::FixPoint, ::Il2CppArray<::RPG::GameCore::JsonEnum*>*, ::System::String*))((::PBYTE)hIl2Cpp + IDCFNGCBAIA_HJFFNDJOMLE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void DNBCIEGGMCN(::HHMIFAELKCK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HHMIFAELKCK*))((::PBYTE)hIl2Cpp + IDCFNGCBAIA_DNBCIEGGMCN_OFFSET))(this, a1);
		}

		::HHMIFAELKCK* LEFIJNPNIHC(::System::String* a1)
		{
			return ((::HHMIFAELKCK*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IDCFNGCBAIA_LEFIJNPNIHC_OFFSET))(this, a1);
		}

		::HHMIFAELKCK* NOHBCHNLBAP(::RPG::GameCore::JsonEnum* a1)
		{
			return ((::HHMIFAELKCK*(*)(::PVOID, ::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + IDCFNGCBAIA_NOHBCHNLBAP_OFFSET))(this, a1);
		}

		::HHMIFAELKCK* NOHBCHNLBAP_1(::Il2CppArray<::RPG::GameCore::JsonEnum*>* a1)
		{
			return ((::HHMIFAELKCK*(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::JsonEnum*>*))((::PBYTE)hIl2Cpp + IDCFNGCBAIA_NOHBCHNLBAP_1_OFFSET))(this, a1);
		}

		::HHMIFAELKCK* CNFNPIPICHI(::Il2CppArray<::RPG::GameCore::JsonEnum*>* a1, ::System::String* a2)
		{
			return ((::HHMIFAELKCK*(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::JsonEnum*>*, ::System::String*))((::PBYTE)hIl2Cpp + IDCFNGCBAIA_CNFNPIPICHI_OFFSET))(this, a1, a2);
		}

		::System::Void JCPFAMEELAH(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + IDCFNGCBAIA_JCPFAMEELAH_OFFSET))(this, a1);
		}

		::System::Void KCKGCEBBCIE(::MJNGFEGNCOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MJNGFEGNCOA*))((::PBYTE)hIl2Cpp + IDCFNGCBAIA_KCKGCEBBCIE_OFFSET))(this, a1);
		}

		::System::Void OFEGLEDEFIK(::RPG::GameCore::FixVec3 a1, ::RPG::GameCore::FixVec3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + IDCFNGCBAIA_OFEGLEDEFIK_OFFSET))(this, a1, a2);
		}

		::AAKADBDHKBJ* IOGGIIBIOIA()
		{
			return ((::AAKADBDHKBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCFNGCBAIA_IOGGIIBIOIA_OFFSET))(this);
		}

		::KAOOFGPIBGF* MOPJLKIHIHP()
		{
			return ((::KAOOFGPIBGF*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCFNGCBAIA_MOPJLKIHIHP_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::HHMIFAELKCK*>* MHAJDOLAGOI()
		{
			return ((::System::Collections::Generic::List_1<::HHMIFAELKCK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCFNGCBAIA_MHAJDOLAGOI_OFFSET))(this);
		}

	};
