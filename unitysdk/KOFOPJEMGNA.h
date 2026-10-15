#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBCMHADMLOP.h"
class JEONKPEGKLC;
class NNKDKMBKFHC;
class PELKNPKGJJN;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGraph; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KOFOPJEMGNA_ANMCBCPBOKC_OFFSET UNITYSDK_OFFSET(0xB58F7B0)
#define KOFOPJEMGNA_CCCKDFBJMLF_OFFSET UNITYSDK_OFFSET(0xB58EA50)
#define KOFOPJEMGNA_CTOR_OFFSET UNITYSDK_OFFSET(0xB58FE40)
#define KOFOPJEMGNA_DPMBCNEIAFA_OFFSET UNITYSDK_OFFSET(0xB58E890)
#define KOFOPJEMGNA_GET_NEEDTICK_OFFSET UNITYSDK_OFFSET(0xB58E880)
#define KOFOPJEMGNA_JMCECMKDFLJ_OFFSET UNITYSDK_OFFSET(0xB58EBF0)
#define KOFOPJEMGNA_KCNHBHLJPHE_OFFSET UNITYSDK_OFFSET(0xB58EAB0)
#define KOFOPJEMGNA_NKIEMMJNPPC_OFFSET UNITYSDK_OFFSET(0xB58F080)
#define KOFOPJEMGNA_NPHLPHKDJMB_OFFSET UNITYSDK_OFFSET(0xB58FCF0)
#define KOFOPJEMGNA_ONUNINIT_OFFSET UNITYSDK_OFFSET(0xB58FA20)
#define KOFOPJEMGNA_PPOMJHNLJFM_OFFSET UNITYSDK_OFFSET(0xB58F200)
#define KOFOPJEMGNA_TICK_OFFSET UNITYSDK_OFFSET(0xB58F5A0)

inline static constexpr unsigned int KOFOPJEMGNA_TypeDefinitionIndex = 53541;

	class KOFOPJEMGNA : public ::HBCMHADMLOP
	{
	public:
		::System::Collections::Generic::HashSet_1<::RPG::GameCore::LevelGraph*>* MOFIJIONIPJ; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::NNKDKMBKFHC*>* HAKIAADFKCA; // 0x28
		::System::Collections::Generic::List_1<::JEONKPEGKLC*>* DIOPDHFCLAL; // 0x30
		::System::Collections::Generic::List_1<::System::String*>* OKDHBEOMKDE; // 0x38
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::JEONKPEGKLC*>* KCJEFLOKKBN; // 0x40
		// static const ::System::String* JDMIDKBOFBJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOFOPJEMGNA_CTOR_OFFSET))(this);
		}

		::System::Boolean get_NeedTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KOFOPJEMGNA_GET_NEEDTICK_OFFSET))(this);
		}

		::NNKDKMBKFHC* DPMBCNEIAFA(::System::String* a1)
		{
			return ((::NNKDKMBKFHC*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KOFOPJEMGNA_DPMBCNEIAFA_OFFSET))(this, a1);
		}

		::NNKDKMBKFHC* KCNHBHLJPHE(::System::String* a1)
		{
			return ((::NNKDKMBKFHC*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KOFOPJEMGNA_KCNHBHLJPHE_OFFSET))(this, a1);
		}

		::System::Boolean JMCECMKDFLJ(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::PELKNPKGJJN* a3, ::NNKDKMBKFHC* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::PELKNPKGJJN*, ::NNKDKMBKFHC*))((::PBYTE)hIl2Cpp + KOFOPJEMGNA_JMCECMKDFLJ_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void NKIEMMJNPPC(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KOFOPJEMGNA_NKIEMMJNPPC_OFFSET))(this, a1);
		}

		::System::Void PPOMJHNLJFM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOFOPJEMGNA_PPOMJHNLJFM_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KOFOPJEMGNA_TICK_OFFSET))(this, a1);
		}

		::System::Void OnUninit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOFOPJEMGNA_ONUNINIT_OFFSET))(this);
		}

		::System::Void NPHLPHKDJMB(::RPG::GameCore::LevelGraph* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGraph*))((::PBYTE)hIl2Cpp + KOFOPJEMGNA_NPHLPHKDJMB_OFFSET))(this, a1);
		}

		::System::Void ANMCBCPBOKC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOFOPJEMGNA_ANMCBCPBOKC_OFFSET))(this);
		}

		static ::System::String* CCCKDFBJMLF(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + KOFOPJEMGNA_CCCKDFBJMLF_OFFSET))(a1);
		}

	};
