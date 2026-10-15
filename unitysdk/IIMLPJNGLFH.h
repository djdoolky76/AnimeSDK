#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/RtMoveStopReason.h"
#include "unitysdk/RPG/GameCore/FixVec3.h"
class CBPHAOJJAMH;
class CEOAOADFGLI;
class CMJBLLIHDKP;
class IFMBINHDMOI;
class KAOOFGPIBGF;
class MJNGFEGNCOA;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IIMLPJNGLFH_CCTOR_OFFSET UNITYSDK_OFFSET(0x16442E40)
#define IIMLPJNGLFH_CFKCFDIFEML_OFFSET UNITYSDK_OFFSET(0x16442B20)
#define IIMLPJNGLFH_CONHCMOGADH_OFFSET UNITYSDK_OFFSET(0x16442B30)
#define IIMLPJNGLFH_CTOR_OFFSET UNITYSDK_OFFSET(0x16442E30)
#define IIMLPJNGLFH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16441880)
#define IIMLPJNGLFH_EBLMEKGAKAD_OFFSET UNITYSDK_OFFSET(0x164418E0)
#define IIMLPJNGLFH_FLCPHONNELH_OFFSET UNITYSDK_OFFSET(0x16442B40)
#define IIMLPJNGLFH_GCFKBGCGMLP_OFFSET UNITYSDK_OFFSET(0x16442B60)
#define IIMLPJNGLFH_JKKKNKOIAGG_OFFSET UNITYSDK_OFFSET(0x16442090)
#define IIMLPJNGLFH_KCKGCEBBCIE_OFFSET UNITYSDK_OFFSET(0x16442120)
#define IIMLPJNGLFH_KGLIDGCDFBP_OFFSET UNITYSDK_OFFSET(0x16441D20)
#define IIMLPJNGLFH_LCJHBLOMABA_OFFSET UNITYSDK_OFFSET(0x16441C00)
#define IIMLPJNGLFH_LPFBANCOMPE_OFFSET UNITYSDK_OFFSET(0x16441DB0)
#define IIMLPJNGLFH_NOHDPEMNGAI_OFFSET UNITYSDK_OFFSET(0x16442CB0)
#define IIMLPJNGLFH_PGDMPPKFDMH_OFFSET UNITYSDK_OFFSET(0x16442B50)
#define IIMLPJNGLFH__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x16441750)

inline static constexpr unsigned int IIMLPJNGLFH_TypeDefinitionIndex = 54039;

	class IIMLPJNGLFH : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::System::Collections::Generic::List_1<::CEOAOADFGLI*>* MPDDCNCBDAF; // 0x18
		::CMJBLLIHDKP* MBKHKFMMCLG; // 0x20
		::KAOOFGPIBGF* JAIGGDJJADB; // 0x28
		::IFMBINHDMOI* EDHHLDCELMK; // 0x30
		::CBPHAOJJAMH* COPKEBGNPBH; // 0x38
		::System::Boolean FCBJKKGDOIC; // 0x40
		static ::RPG::GameCore::FixPoint* StaticGet_ECEBACKCLGA()
		{
			return (::RPG::GameCore::FixPoint*)UnitySDK::FromName("", "IIMLPJNGLFH")->GetStaticField(0x14680);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMLPJNGLFH_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IIMLPJNGLFH_CCTOR_OFFSET))();
		}

		::System::Void _OnInitOwnerRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMLPJNGLFH__ONINITOWNERREF_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMLPJNGLFH_DISPOSE_OFFSET))(this);
		}

		::System::Void LCJHBLOMABA(::CEOAOADFGLI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CEOAOADFGLI*))((::PBYTE)hIl2Cpp + IIMLPJNGLFH_LCJHBLOMABA_OFFSET))(this, a1);
		}

		::System::Void KGLIDGCDFBP(::CEOAOADFGLI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CEOAOADFGLI*))((::PBYTE)hIl2Cpp + IIMLPJNGLFH_KGLIDGCDFBP_OFFSET))(this, a1);
		}

		::RPG::GameCore::RtMoveStopReason LPFBANCOMPE(::IFMBINHDMOI* a1)
		{
			return ((::RPG::GameCore::RtMoveStopReason(*)(::PVOID, ::IFMBINHDMOI*))((::PBYTE)hIl2Cpp + IIMLPJNGLFH_LPFBANCOMPE_OFFSET))(this, a1);
		}

		::System::Void EBLMEKGAKAD(::IFMBINHDMOI* a1, ::RPG::GameCore::RtMoveStopReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::IFMBINHDMOI*, ::RPG::GameCore::RtMoveStopReason))((::PBYTE)hIl2Cpp + IIMLPJNGLFH_EBLMEKGAKAD_OFFSET))(this, a1, a2);
		}

		::System::Void KCKGCEBBCIE(::MJNGFEGNCOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MJNGFEGNCOA*))((::PBYTE)hIl2Cpp + IIMLPJNGLFH_KCKGCEBBCIE_OFFSET))(this, a1);
		}

		::IFMBINHDMOI* CFKCFDIFEML()
		{
			return ((::IFMBINHDMOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMLPJNGLFH_CFKCFDIFEML_OFFSET))(this);
		}

		::System::Boolean CONHCMOGADH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMLPJNGLFH_CONHCMOGADH_OFFSET))(this);
		}

		::System::Boolean JKKKNKOIAGG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMLPJNGLFH_JKKKNKOIAGG_OFFSET))(this);
		}

		::System::Boolean FLCPHONNELH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMLPJNGLFH_FLCPHONNELH_OFFSET))(this);
		}

		::System::Void PGDMPPKFDMH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IIMLPJNGLFH_PGDMPPKFDMH_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* GCFKBGCGMLP()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMLPJNGLFH_GCFKBGCGMLP_OFFSET))(this);
		}

		::RPG::GameCore::FixVec3 NOHDPEMNGAI()
		{
			return ((::RPG::GameCore::FixVec3(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMLPJNGLFH_NOHDPEMNGAI_OFFSET))(this);
		}

	};
