#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAGKEDMHEOI;
class GGGBAIAPDLO;
class NLNFLEDEKGM;
class PKFNILLONDF;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Proto { class ItemCost; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IFEFEELJELP_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC06F20)
#define IFEFEELJELP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BC06F40)
#define IFEFEELJELP_EHMICGCNEON_OFFSET UNITYSDK_OFFSET(0x1BC07900)
#define IFEFEELJELP_EOCJLAEKOJB_OFFSET UNITYSDK_OFFSET(0x1BC07690)
#define IFEFEELJELP_FONKMGEJOAJ_OFFSET UNITYSDK_OFFSET(0x1BC07080)
#define IFEFEELJELP_GET_CANROLL_OFFSET UNITYSDK_OFFSET(0x1BC077A0)
#define IFEFEELJELP_GET_FORCESELECTBUFFID_OFFSET UNITYSDK_OFFSET(0x1BC07950)
#define IFEFEELJELP_GET_ROLLBUFFCOSTS_OFFSET UNITYSDK_OFFSET(0x1BC07800)
#define IFEFEELJELP_GET_ROLLBUFFMAXTIMES_OFFSET UNITYSDK_OFFSET(0x1BC077E0)
#define IFEFEELJELP_GET_ROLLBUFFTIMES_OFFSET UNITYSDK_OFFSET(0x1BC077C0)
#define IFEFEELJELP_GET_SELECTBUFFSOURCECURCOUNT_OFFSET UNITYSDK_OFFSET(0x1BC07760)
#define IFEFEELJELP_GET_SELECTBUFFSOURCEHINTID_OFFSET UNITYSDK_OFFSET(0x1BC07740)
#define IFEFEELJELP_GET_SELECTBUFFSOURCETOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x1BC07780)
#define IFEFEELJELP_GET_SELECTBUFFS_OFFSET UNITYSDK_OFFSET(0x1BC07720)
#define IFEFEELJELP_GET_SELECTFIRSTBUFFTYPELIST_OFFSET UNITYSDK_OFFSET(0x1BC07820)
#define IFEFEELJELP_HHIAKBHPPCE_OFFSET UNITYSDK_OFFSET(0x1BC07970)
#define IFEFEELJELP_HHJGIALECAI_1_OFFSET UNITYSDK_OFFSET(0x1BC074F0)
#define IFEFEELJELP_HHJGIALECAI_OFFSET UNITYSDK_OFFSET(0x1BC070D0)
#define IFEFEELJELP_JFILLFCPDKC_OFFSET UNITYSDK_OFFSET(0x1BC07270)
#define IFEFEELJELP_KKBMGGDCDAM_OFFSET UNITYSDK_OFFSET(0x1BC07490)
#define IFEFEELJELP_LBBPHPHNKPI_OFFSET UNITYSDK_OFFSET(0x1BC07210)
#define IFEFEELJELP_LPABCBDACCA_OFFSET UNITYSDK_OFFSET(0x1BC07840)
#define IFEFEELJELP_SET_CANROLL_OFFSET UNITYSDK_OFFSET(0x1BC077B0)
#define IFEFEELJELP_SET_FORCESELECTBUFFID_OFFSET UNITYSDK_OFFSET(0x1BC07960)
#define IFEFEELJELP_SET_ROLLBUFFCOSTS_OFFSET UNITYSDK_OFFSET(0x1BC07810)
#define IFEFEELJELP_SET_ROLLBUFFMAXTIMES_OFFSET UNITYSDK_OFFSET(0x1BC077F0)
#define IFEFEELJELP_SET_ROLLBUFFTIMES_OFFSET UNITYSDK_OFFSET(0x1BC077D0)
#define IFEFEELJELP_SET_SELECTBUFFSOURCECURCOUNT_OFFSET UNITYSDK_OFFSET(0x1BC07770)
#define IFEFEELJELP_SET_SELECTBUFFSOURCEHINTID_OFFSET UNITYSDK_OFFSET(0x1BC07750)
#define IFEFEELJELP_SET_SELECTBUFFSOURCETOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x1BC07790)
#define IFEFEELJELP_SET_SELECTBUFFS_OFFSET UNITYSDK_OFFSET(0x1BC07730)
#define IFEFEELJELP_SET_SELECTFIRSTBUFFTYPELIST_OFFSET UNITYSDK_OFFSET(0x1BC07830)

inline static constexpr unsigned int IFEFEELJELP_TypeDefinitionIndex = 69146;

	class IFEFEELJELP : public ::System::Object
	{
	public:
		::NLNFLEDEKGM* _SelectBuffs_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _SelectFirstBuffTypeList_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::Proto::ItemCost*>* _RollBuffCosts_k__BackingField; // 0x20
		::System::UInt32 _SelectBuffSourceHintID_k__BackingField; // 0x28
		::System::Boolean _CanRoll_k__BackingField; // 0x2C
		::System::Byte _padding0[0x3];
		::System::UInt32 _RollBuffTimes_k__BackingField; // 0x30
		::System::UInt32 _SelectBuffSourceCurCount_k__BackingField; // 0x34
		::System::UInt32 _RollBuffMaxTimes_k__BackingField; // 0x38
		::System::UInt32 _ForceSelectBuffID_k__BackingField; // 0x3C
		::System::UInt32 _SelectBuffSourceTotalCount_k__BackingField; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEFEELJELP_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEFEELJELP_DISPOSE_OFFSET))(this);
		}

		::System::Void HHJGIALECAI(::GGGBAIAPDLO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGGBAIAPDLO*))((::PBYTE)hIl2Cpp + IFEFEELJELP_HHJGIALECAI_OFFSET))(this, a1);
		}

		::System::Void HHJGIALECAI_1(::PKFNILLONDF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKFNILLONDF*))((::PBYTE)hIl2Cpp + IFEFEELJELP_HHJGIALECAI_1_OFFSET))(this, a1);
		}

		::System::Void EOCJLAEKOJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEFEELJELP_EOCJLAEKOJB_OFFSET))(this);
		}

		::System::Void LBBPHPHNKPI(::System::Boolean a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + IFEFEELJELP_LBBPHPHNKPI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JFILLFCPDKC(::CAGKEDMHEOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAGKEDMHEOI*))((::PBYTE)hIl2Cpp + IFEFEELJELP_JFILLFCPDKC_OFFSET))(this, a1);
		}

		::System::Void KKBMGGDCDAM(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + IFEFEELJELP_KKBMGGDCDAM_OFFSET))(this, a1, a2, a3);
		}

		::NLNFLEDEKGM* get_SelectBuffs()
		{
			return ((::NLNFLEDEKGM*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEFEELJELP_GET_SELECTBUFFS_OFFSET))(this);
		}

		::System::Void set_SelectBuffs(::NLNFLEDEKGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NLNFLEDEKGM*))((::PBYTE)hIl2Cpp + IFEFEELJELP_SET_SELECTBUFFS_OFFSET))(this, a1);
		}

		::System::UInt32 get_SelectBuffSourceHintID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEFEELJELP_GET_SELECTBUFFSOURCEHINTID_OFFSET))(this);
		}

		::System::Void set_SelectBuffSourceHintID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IFEFEELJELP_SET_SELECTBUFFSOURCEHINTID_OFFSET))(this, a1);
		}

		::System::UInt32 get_SelectBuffSourceCurCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEFEELJELP_GET_SELECTBUFFSOURCECURCOUNT_OFFSET))(this);
		}

		::System::Void set_SelectBuffSourceCurCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IFEFEELJELP_SET_SELECTBUFFSOURCECURCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_SelectBuffSourceTotalCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEFEELJELP_GET_SELECTBUFFSOURCETOTALCOUNT_OFFSET))(this);
		}

		::System::Void set_SelectBuffSourceTotalCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IFEFEELJELP_SET_SELECTBUFFSOURCETOTALCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean get_CanRoll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEFEELJELP_GET_CANROLL_OFFSET))(this);
		}

		::System::Void set_CanRoll(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IFEFEELJELP_SET_CANROLL_OFFSET))(this, a1);
		}

		::System::UInt32 get_RollBuffTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEFEELJELP_GET_ROLLBUFFTIMES_OFFSET))(this);
		}

		::System::Void set_RollBuffTimes(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IFEFEELJELP_SET_ROLLBUFFTIMES_OFFSET))(this, a1);
		}

		::System::UInt32 get_RollBuffMaxTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEFEELJELP_GET_ROLLBUFFMAXTIMES_OFFSET))(this);
		}

		::System::Void set_RollBuffMaxTimes(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IFEFEELJELP_SET_ROLLBUFFMAXTIMES_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Proto::ItemCost*>* get_RollBuffCosts()
		{
			return ((::System::Collections::Generic::List_1<::Proto::ItemCost*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEFEELJELP_GET_ROLLBUFFCOSTS_OFFSET))(this);
		}

		::System::Void set_RollBuffCosts(::System::Collections::Generic::List_1<::Proto::ItemCost*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Proto::ItemCost*>*))((::PBYTE)hIl2Cpp + IFEFEELJELP_SET_ROLLBUFFCOSTS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_SelectFirstBuffTypeList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEFEELJELP_GET_SELECTFIRSTBUFFTYPELIST_OFFSET))(this);
		}

		::System::Void set_SelectFirstBuffTypeList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + IFEFEELJELP_SET_SELECTFIRSTBUFFTYPELIST_OFFSET))(this, a1);
		}

		::System::Void LPABCBDACCA(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + IFEFEELJELP_LPABCBDACCA_OFFSET))(this, a1);
		}

		::System::Void EHMICGCNEON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEFEELJELP_EHMICGCNEON_OFFSET))(this);
		}

		::System::UInt32 get_ForceSelectBuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEFEELJELP_GET_FORCESELECTBUFFID_OFFSET))(this);
		}

		::System::Void set_ForceSelectBuffID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IFEFEELJELP_SET_FORCESELECTBUFFID_OFFSET))(this, a1);
		}

		::System::Void HHIAKBHPPCE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IFEFEELJELP_HHIAKBHPPCE_OFFSET))(this, a1);
		}

		::System::Void FONKMGEJOAJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEFEELJELP_FONKMGEJOAJ_OFFSET))(this);
		}

	};
