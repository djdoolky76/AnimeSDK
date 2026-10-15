#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DLLNHNMMJOM;
class FBECENEMLNO;
class FNBGDIAOCAL;
class GGHEGHCAIEH;
class HCMGIHLBFOF;
class JAPKPEJKIDB;
class KAINFBAJFMB;
class KCJNGDLDKFG;
class KLFLPIFLDAB;
class MCHECHNKADP;
class MJCLAKNBIAH;
class OBJANKHLNGO;
namespace RPG::Client::MechCraft::ViewModel { class MechCraftExamSettleViewModel; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftOrderSettleViewModel; }

#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTSETTLEVIEWMODEL_FACTORY_CREATEFOREXAM_OFFSET UNITYSDK_OFFSET(0xD685AC0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTSETTLEVIEWMODEL_FACTORY_CREATEFORORDER_OFFSET UNITYSDK_OFFSET(0xD6858C0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTSETTLEVIEWMODEL_FACTORY_CTOR_OFFSET UNITYSDK_OFFSET(0xD685C00)

namespace RPG::Client::MechCraft::ViewModel
{
	class MechCraftSettleViewModel_Factory : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTSETTLEVIEWMODEL_FACTORY_CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftOrderSettleViewModel* CreateForOrder(::KCJNGDLDKFG* a1, ::OBJANKHLNGO* a2, ::MCHECHNKADP* a3, ::KAINFBAJFMB* a4, ::FNBGDIAOCAL* a5, ::MJCLAKNBIAH* a6, ::KLFLPIFLDAB* a7, ::HCMGIHLBFOF* a8, ::FBECENEMLNO* a9, ::JAPKPEJKIDB* a10, ::DLLNHNMMJOM* a11, ::System::UInt32 a12, ::System::UInt32 a13, ::System::Boolean a14)
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftOrderSettleViewModel*(*)(::PVOID, ::KCJNGDLDKFG*, ::OBJANKHLNGO*, ::MCHECHNKADP*, ::KAINFBAJFMB*, ::FNBGDIAOCAL*, ::MJCLAKNBIAH*, ::KLFLPIFLDAB*, ::HCMGIHLBFOF*, ::FBECENEMLNO*, ::JAPKPEJKIDB*, ::DLLNHNMMJOM*, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTSETTLEVIEWMODEL_FACTORY_CREATEFORORDER_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftExamSettleViewModel* CreateForExam(::KCJNGDLDKFG* a1, ::OBJANKHLNGO* a2, ::MCHECHNKADP* a3, ::KAINFBAJFMB* a4, ::MJCLAKNBIAH* a5, ::KLFLPIFLDAB* a6, ::FBECENEMLNO* a7, ::GGHEGHCAIEH* a8)
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftExamSettleViewModel*(*)(::PVOID, ::KCJNGDLDKFG*, ::OBJANKHLNGO*, ::MCHECHNKADP*, ::KAINFBAJFMB*, ::MJCLAKNBIAH*, ::KLFLPIFLDAB*, ::FBECENEMLNO*, ::GGHEGHCAIEH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTSETTLEVIEWMODEL_FACTORY_CREATEFOREXAM_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

	};
}
