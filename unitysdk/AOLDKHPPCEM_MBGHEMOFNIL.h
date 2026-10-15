#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/WorldType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AOLDKHPPCEM_MBGHEMOFNIL_FEDGNLLLNLH.h"
class AOLDKHPPCEM_MBGHEMOFNIL;
namespace RPG::Client { class AssemNPC; }
namespace RPG::Client { class AssemNPCConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AOLDKHPPCEM_MBGHEMOFNIL_ACDGPABGIFE_OFFSET UNITYSDK_OFFSET(0x158B2290)
#define AOLDKHPPCEM_MBGHEMOFNIL_BGJFDANCEGI_OFFSET UNITYSDK_OFFSET(0x158B7FA0)
#define AOLDKHPPCEM_MBGHEMOFNIL_BNDOOBPHCMK_OFFSET UNITYSDK_OFFSET(0x158B6D00)
#define AOLDKHPPCEM_MBGHEMOFNIL_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x158B1F20)
#define AOLDKHPPCEM_MBGHEMOFNIL_CAINJPOOACD_OFFSET UNITYSDK_OFFSET(0x158B2B80)
#define AOLDKHPPCEM_MBGHEMOFNIL_CCTOR_OFFSET UNITYSDK_OFFSET(0x158B85A0)
#define AOLDKHPPCEM_MBGHEMOFNIL_CTOR_OFFSET UNITYSDK_OFFSET(0x158B5CD0)
#define AOLDKHPPCEM_MBGHEMOFNIL_DJFBJNLJNKK_OFFSET UNITYSDK_OFFSET(0x158B73A0)
#define AOLDKHPPCEM_MBGHEMOFNIL_DLJPAOFGDPO_OFFSET UNITYSDK_OFFSET(0x158B6DA0)
#define AOLDKHPPCEM_MBGHEMOFNIL_EOPGJDMCFHM_OFFSET UNITYSDK_OFFSET(0x158B4750)
#define AOLDKHPPCEM_MBGHEMOFNIL_FHKOPANAKBO_OFFSET UNITYSDK_OFFSET(0x158B2480)
#define AOLDKHPPCEM_MBGHEMOFNIL_FIECKOAHDHJ_OFFSET UNITYSDK_OFFSET(0x158B4B80)
#define AOLDKHPPCEM_MBGHEMOFNIL_GGOBMGDHAFF_OFFSET UNITYSDK_OFFSET(0x158B4FF0)
#define AOLDKHPPCEM_MBGHEMOFNIL_GOOLCODPEOO_OFFSET UNITYSDK_OFFSET(0x158B79A0)
#define AOLDKHPPCEM_MBGHEMOFNIL_LHJGOPEEKIL_OFFSET UNITYSDK_OFFSET(0x158B5CE0)
#define AOLDKHPPCEM_MBGHEMOFNIL_LNGLHJBBKCD_1_OFFSET UNITYSDK_OFFSET(0x158B2590)
#define AOLDKHPPCEM_MBGHEMOFNIL_LNGLHJBBKCD_2_OFFSET UNITYSDK_OFFSET(0x158B2F50)
#define AOLDKHPPCEM_MBGHEMOFNIL_LNGLHJBBKCD_3_OFFSET UNITYSDK_OFFSET(0x158B5310)
#define AOLDKHPPCEM_MBGHEMOFNIL_LNGLHJBBKCD_OFFSET UNITYSDK_OFFSET(0x158B2850)

	class AOLDKHPPCEM_MBGHEMOFNIL : public ::System::Object
	{
	public:
		::RPG::Client::AssemNPCConfig* IIPLHIPAJJP; // 0x10
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>*>** StaticGet_BLKPNGPPDBM()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>*>**)UnitySDK::FromName("", "MBGHEMOFNIL")->GetStaticField(0x63EE0);
		}

		::System::Void _ctor(::RPG::Client::AssemNPCConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AssemNPCConfig*))((::PBYTE)hIl2Cpp + AOLDKHPPCEM_MBGHEMOFNIL_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AOLDKHPPCEM_MBGHEMOFNIL_CCTOR_OFFSET))();
		}

		static ::AOLDKHPPCEM_MBGHEMOFNIL* BPLPBPMEODA(::RPG::Client::AssemNPCConfig* a1)
		{
			return ((::AOLDKHPPCEM_MBGHEMOFNIL*(*)(::RPG::Client::AssemNPCConfig*))((::PBYTE)hIl2Cpp + AOLDKHPPCEM_MBGHEMOFNIL_BPLPBPMEODA_OFFSET))(a1);
		}

		::RPG::Client::AssemNPC* LNGLHJBBKCD(::RPG::GameCore::WorldType a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::RPG::Client::AssemNPC*(*)(::PVOID, ::RPG::GameCore::WorldType, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + AOLDKHPPCEM_MBGHEMOFNIL_LNGLHJBBKCD_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::AssemNPC* LNGLHJBBKCD_1(::System::String* a1, ::System::String* a2)
		{
			return ((::RPG::Client::AssemNPC*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + AOLDKHPPCEM_MBGHEMOFNIL_LNGLHJBBKCD_1_OFFSET))(this, a1, a2);
		}

		::RPG::Client::AssemNPC* LNGLHJBBKCD_2(::RPG::GameCore::WorldType a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::RPG::Client::AssemNPC*(*)(::PVOID, ::RPG::GameCore::WorldType, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + AOLDKHPPCEM_MBGHEMOFNIL_LNGLHJBBKCD_2_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::AssemNPC* LNGLHJBBKCD_3(::System::String* a1)
		{
			return ((::RPG::Client::AssemNPC*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AOLDKHPPCEM_MBGHEMOFNIL_LNGLHJBBKCD_3_OFFSET))(this, a1);
		}

		::RPG::Client::AssemNPC* CAINJPOOACD(::RPG::GameCore::WorldType a1, ::System::String* a2, ::System::String* a3, ::System::Collections::Generic::List_1<::System::String*>* a4)
		{
			return ((::RPG::Client::AssemNPC*(*)(::PVOID, ::RPG::GameCore::WorldType, ::System::String*, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + AOLDKHPPCEM_MBGHEMOFNIL_CAINJPOOACD_OFFSET))(this, a1, a2, a3, a4);
		}

		::Il2CppArray<::System::String*>* GGOBMGDHAFF(::RPG::GameCore::WorldType a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::RPG::GameCore::WorldType, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + AOLDKHPPCEM_MBGHEMOFNIL_GGOBMGDHAFF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ACDGPABGIFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOLDKHPPCEM_MBGHEMOFNIL_ACDGPABGIFE_OFFSET))(this);
		}

		::System::Void LHJGOPEEKIL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOLDKHPPCEM_MBGHEMOFNIL_LHJGOPEEKIL_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* EOPGJDMCFHM(::RPG::GameCore::WorldType a1)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::RPG::GameCore::WorldType))((::PBYTE)hIl2Cpp + AOLDKHPPCEM_MBGHEMOFNIL_EOPGJDMCFHM_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::String*>* FIECKOAHDHJ(::RPG::GameCore::WorldType a1, ::System::String* a2)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::RPG::GameCore::WorldType, ::System::String*))((::PBYTE)hIl2Cpp + AOLDKHPPCEM_MBGHEMOFNIL_FIECKOAHDHJ_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Object*>* BNDOOBPHCMK()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOLDKHPPCEM_MBGHEMOFNIL_BNDOOBPHCMK_OFFSET))(this);
		}

		::System::Boolean DLJPAOFGDPO(::AOLDKHPPCEM_MBGHEMOFNIL_FEDGNLLLNLH a1, ::System::Collections::Generic::ICollection_1<::System::String*>* a2, ::System::Collections::Generic::ICollection_1<::System::String*>* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::AOLDKHPPCEM_MBGHEMOFNIL_FEDGNLLLNLH, ::System::Collections::Generic::ICollection_1<::System::String*>*, ::System::Collections::Generic::ICollection_1<::System::String*>*))((::PBYTE)hIl2Cpp + AOLDKHPPCEM_MBGHEMOFNIL_DLJPAOFGDPO_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean DJFBJNLJNKK(::AOLDKHPPCEM_MBGHEMOFNIL_FEDGNLLLNLH a1, ::System::Collections::Generic::ICollection_1<::System::String*>* a2, ::System::Collections::Generic::ICollection_1<::System::String*>* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::AOLDKHPPCEM_MBGHEMOFNIL_FEDGNLLLNLH, ::System::Collections::Generic::ICollection_1<::System::String*>*, ::System::Collections::Generic::ICollection_1<::System::String*>*))((::PBYTE)hIl2Cpp + AOLDKHPPCEM_MBGHEMOFNIL_DJFBJNLJNKK_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean GOOLCODPEOO(::AOLDKHPPCEM_MBGHEMOFNIL_FEDGNLLLNLH a1, ::System::Collections::Generic::ICollection_1<::System::String*>* a2, ::System::Collections::Generic::ICollection_1<::System::String*>* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::AOLDKHPPCEM_MBGHEMOFNIL_FEDGNLLLNLH, ::System::Collections::Generic::ICollection_1<::System::String*>*, ::System::Collections::Generic::ICollection_1<::System::String*>*))((::PBYTE)hIl2Cpp + AOLDKHPPCEM_MBGHEMOFNIL_GOOLCODPEOO_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean BGJFDANCEGI(::AOLDKHPPCEM_MBGHEMOFNIL_FEDGNLLLNLH a1, ::System::Collections::Generic::ICollection_1<::System::String*>* a2, ::System::Collections::Generic::ICollection_1<::System::String*>* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::AOLDKHPPCEM_MBGHEMOFNIL_FEDGNLLLNLH, ::System::Collections::Generic::ICollection_1<::System::String*>*, ::System::Collections::Generic::ICollection_1<::System::String*>*))((::PBYTE)hIl2Cpp + AOLDKHPPCEM_MBGHEMOFNIL_BGJFDANCEGI_OFFSET))(this, a1, a2, a3);
		}

		::System::Single FHKOPANAKBO(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AOLDKHPPCEM_MBGHEMOFNIL_FHKOPANAKBO_OFFSET))(this, a1);
		}

	};
