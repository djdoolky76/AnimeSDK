#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"
class ECLKNNECNFK;
class FBFODNFGMKG;
class KGFNICBCMOA;
class OMINPDAIBLP;
namespace RPG::Client { class GridFightAugment; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C72BB30)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO_GETAUGMENTBYID_OFFSET UNITYSDK_OFFSET(0x1C72A990)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO_GETAUGMENTLISTCANADDDIFF_OFFSET UNITYSDK_OFFSET(0x1C72B020)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO_GET_AUGMENTOWNCOUNT_OFFSET UNITYSDK_OFFSET(0x1C72A350)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1C72A5D0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO_GET_PLAYERAUGMENTSWITHOUTEXTRA_OFFSET UNITYSDK_OFFSET(0x1C72A3A0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO_REMOVEALLAUGMENT_OFFSET UNITYSDK_OFFSET(0x1C72AE10)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO_SETCOLLECTOR_OFFSET UNITYSDK_OFFSET(0x1C72A650)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x1C72AA90)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO_UPDATEADD_OFFSET UNITYSDK_OFFSET(0x1C72B450)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO_UPDATEREMOVE_OFFSET UNITYSDK_OFFSET(0x1C72B930)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C72B720)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAugmentInfo_TypeDefinitionIndex = 65825;

	class GridFightAugmentInfo : public ::Sofa::Core::ObservableObject
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightAugment*>* _PlayerAugments; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO_CTOR_OFFSET))(this);
		}

		::System::Int32 get_AugmentOwnCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO_GET_AUGMENTOWNCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightAugment*>* get_PlayerAugmentsWithoutExtra()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightAugment*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO_GET_PLAYERAUGMENTSWITHOUTEXTRA_OFFSET))(this);
		}

		::RPG::Client::GridFightAugment* get_Item(::System::Int32 a1)
		{
			return ((::RPG::Client::GridFightAugment*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void SetCollector(::FBFODNFGMKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBFODNFGMKG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO_SETCOLLECTOR_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightAugment* GetAugmentByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightAugment*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO_GETAUGMENTBYID_OFFSET))(this, a1);
		}

		::System::Void Sync(::KGFNICBCMOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KGFNICBCMOA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO_SYNC_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightAugment*>* GetAugmentListCanAddDiff()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightAugment*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO_GETAUGMENTLISTCANADDDIFF_OFFSET))(this);
		}

		::System::Void UpdateAdd(::OMINPDAIBLP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMINPDAIBLP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO_UPDATEADD_OFFSET))(this, a1);
		}

		::System::Void Update(::ECLKNNECNFK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECLKNNECNFK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO_UPDATE_OFFSET))(this, a1);
		}

		::System::Void UpdateRemove(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO_UPDATEREMOVE_OFFSET))(this, a1);
		}

		::System::Void RemoveAllAugment()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO_REMOVEALLAUGMENT_OFFSET))(this);
		}

	};
}
