#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"
class BNBNHLHIJAJ;
class CLPGGJNLFPL;
class ENEIHJJPNPI;
class KFELGAIGHAP;
class MEALFBJIJGC;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class ParallelConfigForTaskListTemplate; }
namespace RPG::GameCore { class SequenceConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OAPPKGLPNHA_AOFOHLJACCJ_OFFSET UNITYSDK_OFFSET(0xBD29070)
#define OAPPKGLPNHA_CGNJAJMEKOI_OFFSET UNITYSDK_OFFSET(0xBD28300)
#define OAPPKGLPNHA_CPBNNPDAKCO_OFFSET UNITYSDK_OFFSET(0xBD28D70)
#define OAPPKGLPNHA_CTOR_OFFSET UNITYSDK_OFFSET(0xBD28220)
#define OAPPKGLPNHA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBD28720)
#define OAPPKGLPNHA_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xBD294F0)
#define OAPPKGLPNHA_GET_LASTTICKCOUNT_OFFSET UNITYSDK_OFFSET(0xBD294C0)
#define OAPPKGLPNHA_GET_PARALLELDELAYTIME_OFFSET UNITYSDK_OFFSET(0xBD29460)
#define OAPPKGLPNHA_GET_PARALLELLOCALTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xBD29440)
#define OAPPKGLPNHA_GET_PARALLELROOT_OFFSET UNITYSDK_OFFSET(0xBD294A0)
#define OAPPKGLPNHA_GET_PARENTPARALLELTASKLIST_OFFSET UNITYSDK_OFFSET(0xBD29480)
#define OAPPKGLPNHA_GET_SUBINDEX_OFFSET UNITYSDK_OFFSET(0xBD29510)
#define OAPPKGLPNHA_GET_TARGETTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xBD293D0)
#define OAPPKGLPNHA_IGHNLNEHFOI_OFFSET UNITYSDK_OFFSET(0xBD282C0)
#define OAPPKGLPNHA_IMHAOAICOPP_OFFSET UNITYSDK_OFFSET(0xBD28340)
#define OAPPKGLPNHA_JHMKDOKAGBA_OFFSET UNITYSDK_OFFSET(0xBD294E0)
#define OAPPKGLPNHA_KAGICIAJEEA_OFFSET UNITYSDK_OFFSET(0xBD28FB0)
#define OAPPKGLPNHA_KHFHNDEBGDH_OFFSET UNITYSDK_OFFSET(0xBD28820)
#define OAPPKGLPNHA_KPGKHDDJDHI_OFFSET UNITYSDK_OFFSET(0xBD293F0)
#define OAPPKGLPNHA_NBHCPBBGAKA_OFFSET UNITYSDK_OFFSET(0xBD284A0)
#define OAPPKGLPNHA_NCMDGGHBPFD_OFFSET UNITYSDK_OFFSET(0xBD28280)
#define OAPPKGLPNHA_NGOMDIMOIEH_OFFSET UNITYSDK_OFFSET(0xBD28CE0)
#define OAPPKGLPNHA_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xBD29500)
#define OAPPKGLPNHA_SET_LASTTICKCOUNT_OFFSET UNITYSDK_OFFSET(0xBD294D0)
#define OAPPKGLPNHA_SET_PARALLELDELAYTIME_OFFSET UNITYSDK_OFFSET(0xBD29470)
#define OAPPKGLPNHA_SET_PARALLELLOCALTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xBD29450)
#define OAPPKGLPNHA_SET_PARALLELROOT_OFFSET UNITYSDK_OFFSET(0xBD294B0)
#define OAPPKGLPNHA_SET_PARENTPARALLELTASKLIST_OFFSET UNITYSDK_OFFSET(0xBD29490)
#define OAPPKGLPNHA_SET_SUBINDEX_OFFSET UNITYSDK_OFFSET(0xBD29520)
#define OAPPKGLPNHA_SET_TARGETTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xBD293E0)

inline static constexpr unsigned int OAPPKGLPNHA_TypeDefinitionIndex = 55758;

	class OAPPKGLPNHA : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* PLDMPCFJCJE; // 0x10
		::RPG::GameCore::ParallelConfigForTaskListTemplate* OFKGLJOAMLD; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>* BPGGBFAHLHM; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::SequenceConfig*>* BJIILHDACAA; // 0x28
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
		::MEALFBJIJGC* _ParentParallelTaskList_k__BackingField; // 0x38
		::BNBNHLHIJAJ* _ParallelRoot_k__BackingField; // 0x40
		::ENEIHJJPNPI* PNGPEKDABLL; // 0x48
		::KFELGAIGHAP* HFOFIODMFGB; // 0x50
		::RPG::GameCore::FixPoint _ParallelDelayTime_k__BackingField; // 0x58
		::System::UInt32 _LastTickCount_k__BackingField; // 0x60
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint _TargetTimeStamp_k__BackingField; // 0x68
		::System::Int32 _SubIndex_k__BackingField; // 0x70
		::System::Int32 _Index_k__BackingField; // 0x74
		::RPG::GameCore::FixPoint _ParallelLocalTimeStamp_k__BackingField; // 0x78
		::System::Void _ctor(::RPG::GameCore::ParallelConfigForTaskListTemplate* a1, ::System::Int32 a2, ::ENEIHJJPNPI* a3, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>* a4, ::KFELGAIGHAP* a5, ::System::Int32 a6, ::RPG::GameCore::GameEntity* a7, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::SequenceConfig*>* a8)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ParallelConfigForTaskListTemplate*, ::System::Int32, ::ENEIHJJPNPI*, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>*, ::KFELGAIGHAP*, ::System::Int32, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::SequenceConfig*>*))((::PBYTE)hIl2Cpp + OAPPKGLPNHA_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::ENEIHJJPNPI* NCMDGGHBPFD()
		{
			return ((::ENEIHJJPNPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAPPKGLPNHA_NCMDGGHBPFD_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>* IGHNLNEHFOI()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAPPKGLPNHA_IGHNLNEHFOI_OFFSET))(this);
		}

		::RPG::GameCore::GameEntityList* CGNJAJMEKOI()
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAPPKGLPNHA_CGNJAJMEKOI_OFFSET))(this);
		}

		::KFELGAIGHAP* IMHAOAICOPP(::System::String* a1)
		{
			return ((::KFELGAIGHAP*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OAPPKGLPNHA_IMHAOAICOPP_OFFSET))(this, a1);
		}

		::CLPGGJNLFPL* NBHCPBBGAKA()
		{
			return ((::CLPGGJNLFPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAPPKGLPNHA_NBHCPBBGAKA_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAPPKGLPNHA_DISPOSE_OFFSET))(this);
		}

		::System::Void KHFHNDEBGDH(::System::Single a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + OAPPKGLPNHA_KHFHNDEBGDH_OFFSET))(this, a1, a2);
		}

		::System::Boolean KAGICIAJEEA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OAPPKGLPNHA_KAGICIAJEEA_OFFSET))(this);
		}

		::System::Void CPBNNPDAKCO(::MEALFBJIJGC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MEALFBJIJGC*))((::PBYTE)hIl2Cpp + OAPPKGLPNHA_CPBNNPDAKCO_OFFSET))(this, a1);
		}

		::System::Void NGOMDIMOIEH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OAPPKGLPNHA_NGOMDIMOIEH_OFFSET))(this, a1);
		}

		::System::String* AOFOHLJACCJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAPPKGLPNHA_AOFOHLJACCJ_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_TargetTimeStamp()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + OAPPKGLPNHA_GET_TARGETTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_TargetTimeStamp(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + OAPPKGLPNHA_SET_TARGETTIMESTAMP_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint KPGKHDDJDHI()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + OAPPKGLPNHA_KPGKHDDJDHI_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_ParallelLocalTimeStamp()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + OAPPKGLPNHA_GET_PARALLELLOCALTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_ParallelLocalTimeStamp(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + OAPPKGLPNHA_SET_PARALLELLOCALTIMESTAMP_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_ParallelDelayTime()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + OAPPKGLPNHA_GET_PARALLELDELAYTIME_OFFSET))(this);
		}

		::System::Void set_ParallelDelayTime(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + OAPPKGLPNHA_SET_PARALLELDELAYTIME_OFFSET))(this, a1);
		}

		::MEALFBJIJGC* get_ParentParallelTaskList()
		{
			return ((::MEALFBJIJGC*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAPPKGLPNHA_GET_PARENTPARALLELTASKLIST_OFFSET))(this);
		}

		::System::Void set_ParentParallelTaskList(::MEALFBJIJGC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MEALFBJIJGC*))((::PBYTE)hIl2Cpp + OAPPKGLPNHA_SET_PARENTPARALLELTASKLIST_OFFSET))(this, a1);
		}

		::BNBNHLHIJAJ* get_ParallelRoot()
		{
			return ((::BNBNHLHIJAJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAPPKGLPNHA_GET_PARALLELROOT_OFFSET))(this);
		}

		::System::Void set_ParallelRoot(::BNBNHLHIJAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNBNHLHIJAJ*))((::PBYTE)hIl2Cpp + OAPPKGLPNHA_SET_PARALLELROOT_OFFSET))(this, a1);
		}

		::System::UInt32 get_LastTickCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OAPPKGLPNHA_GET_LASTTICKCOUNT_OFFSET))(this);
		}

		::System::Void set_LastTickCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OAPPKGLPNHA_SET_LASTTICKCOUNT_OFFSET))(this, a1);
		}

		::KFELGAIGHAP* JHMKDOKAGBA()
		{
			return ((::KFELGAIGHAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAPPKGLPNHA_JHMKDOKAGBA_OFFSET))(this);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OAPPKGLPNHA_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OAPPKGLPNHA_SET_INDEX_OFFSET))(this, a1);
		}

		::System::Int32 get_SubIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OAPPKGLPNHA_GET_SUBINDEX_OFFSET))(this);
		}

		::System::Void set_SubIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OAPPKGLPNHA_SET_SUBINDEX_OFFSET))(this, a1);
		}

	};
