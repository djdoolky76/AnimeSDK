#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HFHGPMCHDGL;
class HHCNMGNAIBG;
class HIMPJFMPEPA;
namespace RPG::Client::PetDiy { class PetDiyAreaInfo; }
namespace RPG::Client::PetDiy { class TrainPetDiyEditController; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PETDIY_TRAINPETDIYCONTROLLER_CTOR_OFFSET UNITYSDK_OFFSET(0xDAC2E90)
#define RPG_CLIENT_PETDIY_TRAINPETDIYCONTROLLER_GETPETDIYAREAINFOLIST_OFFSET UNITYSDK_OFFSET(0xDAC3A30)
#define RPG_CLIENT_PETDIY_TRAINPETDIYCONTROLLER_GETPETDIYAREAINFO_OFFSET UNITYSDK_OFFSET(0xDAC3C20)
#define RPG_CLIENT_PETDIY_TRAINPETDIYCONTROLLER_GETPETDIYEDITCONTROLLER_OFFSET UNITYSDK_OFFSET(0xDAC3A70)
#define RPG_CLIENT_PETDIY_TRAINPETDIYCONTROLLER_SYNCBYSERVERINFO_1_OFFSET UNITYSDK_OFFSET(0xDAC39A0)
#define RPG_CLIENT_PETDIY_TRAINPETDIYCONTROLLER_SYNCBYSERVERINFO_OFFSET UNITYSDK_OFFSET(0xDAC3390)
#define RPG_CLIENT_PETDIY_TRAINPETDIYCONTROLLER__GETSLOTCOUNT_OFFSET UNITYSDK_OFFSET(0xDAC3D20)
#define RPG_CLIENT_PETDIY_TRAINPETDIYCONTROLLER__INITAREAS_OFFSET UNITYSDK_OFFSET(0xDAC2ED0)
#define RPG_CLIENT_PETDIY_TRAINPETDIYCONTROLLER__SYNCBYSERVERINFO_G__GETAREAINFO_1_0_OFFSET UNITYSDK_OFFSET(0xDAC3590)

namespace RPG::Client::PetDiy
{
	inline static constexpr unsigned int TrainPetDiyController_TypeDefinitionIndex = 74488;

	class TrainPetDiyController : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::PetDiy::PetDiyAreaInfo*>* _PetDiyAreaInfoList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_TRAINPETDIYCONTROLLER_CTOR_OFFSET))(this);
		}

		::System::Void SyncByServerInfo(::HHCNMGNAIBG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HHCNMGNAIBG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_TRAINPETDIYCONTROLLER_SYNCBYSERVERINFO_OFFSET))(this, a1);
		}

		::System::Void SyncByServerInfo_1(::System::Collections::Generic::IList_1<::HIMPJFMPEPA*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::HIMPJFMPEPA*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_TRAINPETDIYCONTROLLER_SYNCBYSERVERINFO_1_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PetDiy::PetDiyAreaInfo*>* GetPetDiyAreaInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PetDiy::PetDiyAreaInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_TRAINPETDIYCONTROLLER_GETPETDIYAREAINFOLIST_OFFSET))(this);
		}

		::RPG::Client::PetDiy::TrainPetDiyEditController* GetPetDiyEditController()
		{
			return ((::RPG::Client::PetDiy::TrainPetDiyEditController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_TRAINPETDIYCONTROLLER_GETPETDIYEDITCONTROLLER_OFFSET))(this);
		}

		::RPG::Client::PetDiy::PetDiyAreaInfo* GetPetDiyAreaInfo(::System::UInt32 a1)
		{
			return ((::RPG::Client::PetDiy::PetDiyAreaInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_TRAINPETDIYCONTROLLER_GETPETDIYAREAINFO_OFFSET))(this, a1);
		}

		::System::Void _InitAreas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_TRAINPETDIYCONTROLLER__INITAREAS_OFFSET))(this);
		}

		::System::UInt32 _GetSlotCount(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_TRAINPETDIYCONTROLLER__GETSLOTCOUNT_OFFSET))(this, a1);
		}

		static ::HFHGPMCHDGL* _SyncByServerInfo_g__GetAreaInfo_1_0(::HHCNMGNAIBG* a1, ::System::UInt32 a2)
		{
			return ((::HFHGPMCHDGL*(*)(::HHCNMGNAIBG*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_TRAINPETDIYCONTROLLER__SYNCBYSERVERINFO_G__GETAREAINFO_1_0_OFFSET))(a1, a2);
		}

	};
}
