#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimGroupTransitState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FKMGOCGOCPO_BOIDHKJDFAJ.h"
class LDMKDJJLOIL;
class OBCBNMHLAJA;
namespace RPG::GameCore { class AnimGroupEventConfig; }
namespace RPG::GameCore { class AnimGroupEventEntry; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FKMGOCGOCPO_AKOGNNCLGFI_OFFSET UNITYSDK_OFFSET(0x1580FCF0)
#define FKMGOCGOCPO_CDBOHKLHKJN_OFFSET UNITYSDK_OFFSET(0x1580FC70)
#define FKMGOCGOCPO_CEEPEOCNBHO_OFFSET UNITYSDK_OFFSET(0x15810AA0)
#define FKMGOCGOCPO_CKFFKNIOCCO_OFFSET UNITYSDK_OFFSET(0x1580EAC0)
#define FKMGOCGOCPO_CTOR_OFFSET UNITYSDK_OFFSET(0x1580DFC0)
#define FKMGOCGOCPO_DAHOGGKFBEO_OFFSET UNITYSDK_OFFSET(0x1580EC60)
#define FKMGOCGOCPO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1580E060)
#define FKMGOCGOCPO_DLAILGNMFGI_OFFSET UNITYSDK_OFFSET(0x1580E2D0)
#define FKMGOCGOCPO_GGNBALFOIKJ_OFFSET UNITYSDK_OFFSET(0x1580FED0)
#define FKMGOCGOCPO_JAHFNGDEOOJ_OFFSET UNITYSDK_OFFSET(0x1580F450)
#define FKMGOCGOCPO_JFIJELGMJDC_OFFSET UNITYSDK_OFFSET(0x1580FF90)
#define FKMGOCGOCPO_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15810290)
#define FKMGOCGOCPO_JLCKBAFOGAL_OFFSET UNITYSDK_OFFSET(0x15810460)
#define FKMGOCGOCPO_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1580E170)
#define FKMGOCGOCPO_LOMALBDODND_OFFSET UNITYSDK_OFFSET(0x158105B0)
#define FKMGOCGOCPO_NNPMGJLGHKO_OFFSET UNITYSDK_OFFSET(0x1580FDD0)
#define FKMGOCGOCPO_OJPAPNHNCAB_OFFSET UNITYSDK_OFFSET(0x1580EDA0)

	class FKMGOCGOCPO : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::OBCBNMHLAJA*>* EPEIALPNBOG; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Object*>*>* IIIINOJFCJK; // 0x18
		::System::UInt64 EDKLKPCKJCL; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKMGOCGOCPO_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKMGOCGOCPO_DISPOSE_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKMGOCGOCPO_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void DLAILGNMFGI(::System::String* a1, ::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>* a2, ::RPG::GameCore::TaskContext* a3, ::LDMKDJJLOIL* a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>*, ::RPG::GameCore::TaskContext*, ::LDMKDJJLOIL*, ::System::Int32))((::PBYTE)hIl2Cpp + FKMGOCGOCPO_DLAILGNMFGI_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void OJPAPNHNCAB(::LDMKDJJLOIL* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::LDMKDJJLOIL*, ::System::Boolean))((::PBYTE)hIl2Cpp + FKMGOCGOCPO_OJPAPNHNCAB_OFFSET))(this, a1, a2);
		}

		::System::Void JAHFNGDEOOJ(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Boolean a5, ::System::Single a6, ::System::Single a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FKMGOCGOCPO_JAHFNGDEOOJ_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Func_2<::System::String*, ::System::String*>* CKFFKNIOCCO(::System::String* a1, ::Il2CppArray<::RPG::GameCore::AnimGroupEventEntry*>* a2)
		{
			return ((::System::Func_2<::System::String*, ::System::String*>*(*)(::PVOID, ::System::String*, ::Il2CppArray<::RPG::GameCore::AnimGroupEventEntry*>*))((::PBYTE)hIl2Cpp + FKMGOCGOCPO_CKFFKNIOCCO_OFFSET))(this, a1, a2);
		}

		::System::Void JLANKNHFKCN(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + FKMGOCGOCPO_JLANKNHFKCN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LOMALBDODND(::System::Boolean a1, ::System::Boolean a2, ::System::Single a3, ::System::Int32 a4, ::RPG::GameCore::AnimGroupTransitState a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Single, ::System::Int32, ::RPG::GameCore::AnimGroupTransitState))((::PBYTE)hIl2Cpp + FKMGOCGOCPO_LOMALBDODND_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Collections::Generic::List_1<::System::Object*>* CEEPEOCNBHO(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FKMGOCGOCPO_CEEPEOCNBHO_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Object*>* DAHOGGKFBEO(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FKMGOCGOCPO_DAHOGGKFBEO_OFFSET))(this, a1);
		}

		::System::UInt64 JLCKBAFOGAL(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + FKMGOCGOCPO_JLCKBAFOGAL_OFFSET))(this, a1, a2);
		}

		::System::UInt64 CDBOHKLHKJN(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + FKMGOCGOCPO_CDBOHKLHKJN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NNPMGJLGHKO(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + FKMGOCGOCPO_NNPMGJLGHKO_OFFSET))(this, a1);
		}

		::System::Void GGNBALFOIKJ(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + FKMGOCGOCPO_GGNBALFOIKJ_OFFSET))(this, a1);
		}

		::System::Void JFIJELGMJDC(::System::Int32 a1, ::System::Single a2, ::RPG::GameCore::AnimGroupTransitState a3, ::System::Collections::Generic::List_1<::System::Int32>* a4, ::System::UInt64 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::RPG::GameCore::AnimGroupTransitState, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::UInt64))((::PBYTE)hIl2Cpp + FKMGOCGOCPO_JFIJELGMJDC_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Boolean AKOGNNCLGFI(::FKMGOCGOCPO_BOIDHKJDFAJ a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
		{
			return ((::System::Boolean(*)(::FKMGOCGOCPO_BOIDHKJDFAJ, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + FKMGOCGOCPO_AKOGNNCLGFI_OFFSET))(a1, a2);
		}

	};
