#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJBAAGFMEKM.h"
#include "unitysdk/System/Object.h"
class CBABAAOHGHH;
class NBJNPBNNLBH;
namespace RPG::Client { class Airline; }
namespace RPG::Client { class AirlineWay; }
namespace RPG::Client { class AirshipEmitter; }
namespace RPG::Client { class RacingDriveConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define DBCCLMILLOB_AJCOJCPJEMA_OFFSET UNITYSDK_OFFSET(0xDFDA210)
#define DBCCLMILLOB_BJOHNPKBEIM_OFFSET UNITYSDK_OFFSET(0xDFDB660)
#define DBCCLMILLOB_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0xDFD80E0)
#define DBCCLMILLOB_CCTOR_OFFSET UNITYSDK_OFFSET(0xDFDB690)
#define DBCCLMILLOB_CIPJBBAOLBD_OFFSET UNITYSDK_OFFSET(0xDFD7270)
#define DBCCLMILLOB_CTOR_OFFSET UNITYSDK_OFFSET(0xDFDACA0)
#define DBCCLMILLOB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDFD7F40)
#define DBCCLMILLOB_ENOFKLOBOLC_OFFSET UNITYSDK_OFFSET(0xDFD8B10)
#define DBCCLMILLOB_FBHJACEAOGE_OFFSET UNITYSDK_OFFSET(0xDFDA680)
#define DBCCLMILLOB_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xDFDB640)
#define DBCCLMILLOB_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0xDFDB650)
#define DBCCLMILLOB_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0xDFDB670)
#define DBCCLMILLOB_GMCOJDGEMGC_OFFSET UNITYSDK_OFFSET(0xDFD7A40)
#define DBCCLMILLOB_HMHGIHJEJEK_OFFSET UNITYSDK_OFFSET(0xDFDAE90)
#define DBCCLMILLOB_IFAGMKJAHAJ_OFFSET UNITYSDK_OFFSET(0xDFDAA00)
#define DBCCLMILLOB_JICFGJEKIEO_OFFSET UNITYSDK_OFFSET(0xDFDB590)
#define DBCCLMILLOB_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xDFD8150)
#define DBCCLMILLOB_JPBKMOGMPBB_OFFSET UNITYSDK_OFFSET(0xDFDABB0)
#define DBCCLMILLOB_KNPNGDEBFEJ_OFFSET UNITYSDK_OFFSET(0xDFDA3E0)
#define DBCCLMILLOB_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xDFD7620)
#define DBCCLMILLOB_MOOLOIBBHOL_OFFSET UNITYSDK_OFFSET(0xDFD7EA0)
#define DBCCLMILLOB_OHICOOLNFGE_OFFSET UNITYSDK_OFFSET(0xDFDA970)
#define DBCCLMILLOB_PBKMHGAGIMB_OFFSET UNITYSDK_OFFSET(0xDFD8EA0)
#define DBCCLMILLOB_SET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0xDFDB680)

inline static constexpr unsigned int DBCCLMILLOB_TypeDefinitionIndex = 59794;

	class DBCCLMILLOB : public ::System::Object
	{
	public:
		::System::String* JLKFFKGABBC; // 0x10
		::System::Collections::Generic::List_1<::JJBAAGFMEKM>* BHEGIGJGKOB; // 0x18
		::RPG::Client::AirlineWay* PLOCJFAHLPK; // 0x20
		::RPG::Client::AirshipEmitter* DHOEAAPGHFK; // 0x28
		::System::Collections::Generic::List_1<::NBJNPBNNLBH*>* IFCAPLOMACM; // 0x30
		::System::Collections::Generic::List_1<::JJBAAGFMEKM>* JLCLNDAEMML; // 0x38
		::NBJNPBNNLBH* LIGEPMNFLCO; // 0x40
		::System::Single _TimeScale_k__BackingField; // 0x48
		::System::UInt32 MJPPOIHKCCB; // 0x4C
		static ::System::Comparison_1<::NBJNPBNNLBH*>** StaticGet_DDJNMNJEFJF()
		{
			return (::System::Comparison_1<::NBJNPBNNLBH*>**)UnitySDK::FromName("", "DBCCLMILLOB")->GetStaticField(0x5CBE0);
		}

		static ::System::Int32* StaticGet_ILMPEJFKMFJ()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DBCCLMILLOB")->GetStaticField(0x141B0);
		}

		// static const ::System::Object FKFPHPFHPLG; // 0x0
		// static const ::System::Object LEHLHJMKKPE; // 0x0
		::System::Void _ctor(::System::UInt32 a1, ::System::String* a2, ::UnityEngine::GameObject* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + DBCCLMILLOB_CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBCCLMILLOB_CCTOR_OFFSET))();
		}

		static ::CBABAAOHGHH* CIPJBBAOLBD(::UnityEngine::Transform* a1, ::System::UInt32 a2, ::System::String* a3, ::UnityEngine::GameObject* a4)
		{
			return ((::CBABAAOHGHH*(*)(::UnityEngine::Transform*, ::System::UInt32, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + DBCCLMILLOB_CIPJBBAOLBD_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBCCLMILLOB_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBCCLMILLOB_DISPOSE_OFFSET))(this);
		}

		::System::Void BLILDBCEGFH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DBCCLMILLOB_BLILDBCEGFH_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DBCCLMILLOB_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Single KNPNGDEBFEJ(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DBCCLMILLOB_KNPNGDEBFEJ_OFFSET))(this, a1);
		}

		::System::Single FBHJACEAOGE(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DBCCLMILLOB_FBHJACEAOGE_OFFSET))(this, a1);
		}

		::System::Void PBKMHGAGIMB(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + DBCCLMILLOB_PBKMHGAGIMB_OFFSET))(this, a1, a2);
		}

		::System::Single OHICOOLNFGE(::NBJNPBNNLBH* a1, ::NBJNPBNNLBH* a2)
		{
			return ((::System::Single(*)(::PVOID, ::NBJNPBNNLBH*, ::NBJNPBNNLBH*))((::PBYTE)hIl2Cpp + DBCCLMILLOB_OHICOOLNFGE_OFFSET))(this, a1, a2);
		}

		::System::Single JPBKMOGMPBB(::System::Single a1, ::RPG::Client::RacingDriveConfig* a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::RPG::Client::RacingDriveConfig*))((::PBYTE)hIl2Cpp + DBCCLMILLOB_JPBKMOGMPBB_OFFSET))(this, a1, a2);
		}

		::System::Single IFAGMKJAHAJ(::NBJNPBNNLBH* a1, ::NBJNPBNNLBH* a2, ::RPG::Client::RacingDriveConfig* a3)
		{
			return ((::System::Single(*)(::PVOID, ::NBJNPBNNLBH*, ::NBJNPBNNLBH*, ::RPG::Client::RacingDriveConfig*))((::PBYTE)hIl2Cpp + DBCCLMILLOB_IFAGMKJAHAJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean ENOFKLOBOLC(::NBJNPBNNLBH* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::NBJNPBNNLBH*, ::System::Boolean))((::PBYTE)hIl2Cpp + DBCCLMILLOB_ENOFKLOBOLC_OFFSET))(this, a1, a2);
		}

		::System::Boolean AJCOJCPJEMA(::NBJNPBNNLBH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NBJNPBNNLBH*))((::PBYTE)hIl2Cpp + DBCCLMILLOB_AJCOJCPJEMA_OFFSET))(this, a1);
		}

		::System::Void HMHGIHJEJEK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBCCLMILLOB_HMHGIHJEJEK_OFFSET))(this);
		}

		::System::Void GMCOJDGEMGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBCCLMILLOB_GMCOJDGEMGC_OFFSET))(this);
		}

		::System::Void MOOLOIBBHOL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBCCLMILLOB_MOOLOIBBHOL_OFFSET))(this);
		}

		::System::Void JICFGJEKIEO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DBCCLMILLOB_JICFGJEKIEO_OFFSET))(this, a1);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBCCLMILLOB_GET_GROUPID_OFFSET))(this);
		}

		::System::String* get_PrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBCCLMILLOB_GET_PREFABPATH_OFFSET))(this);
		}

		::RPG::Client::Airline* BJOHNPKBEIM()
		{
			return ((::RPG::Client::Airline*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBCCLMILLOB_BJOHNPKBEIM_OFFSET))(this);
		}

		::System::Single get_TimeScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DBCCLMILLOB_GET_TIMESCALE_OFFSET))(this);
		}

		::System::Void set_TimeScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DBCCLMILLOB_SET_TIMESCALE_OFFSET))(this, a1);
		}

	};
