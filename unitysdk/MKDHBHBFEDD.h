#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BNBOAMEBAOE.h"
class BNBOAMEBAOE;
class GELIALJDFBL;
namespace RPG::GameCore { class SequenceConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MKDHBHBFEDD_CIADCOCBJDB_OFFSET UNITYSDK_OFFSET(0x1B8FC690)
#define MKDHBHBFEDD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B8FBA20)
#define MKDHBHBFEDD_CTOR_OFFSET UNITYSDK_OFFSET(0x1B8FB9C0)
#define MKDHBHBFEDD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B8FBBD0)
#define MKDHBHBFEDD_FADEIFNLDDM_OFFSET UNITYSDK_OFFSET(0x1B8FC780)
#define MKDHBHBFEDD_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x1B8FBAD0)
#define MKDHBHBFEDD_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0x1B8FBA70)
#define MKDHBHBFEDD_MABOIANGJIJ_OFFSET UNITYSDK_OFFSET(0x1B8FC6D0)
#define MKDHBHBFEDD_NALNPFBIDCL_OFFSET UNITYSDK_OFFSET(0x1B8FC0D0)
#define MKDHBHBFEDD_NOAEDJIMAEI_OFFSET UNITYSDK_OFFSET(0x1B8FBD50)
#define MKDHBHBFEDD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1B8FBFC0)
#define MKDHBHBFEDD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1B8FBB80)
#define MKDHBHBFEDD_TICK_OFFSET UNITYSDK_OFFSET(0x1B8FC600)

inline static constexpr unsigned int MKDHBHBFEDD_TypeDefinitionIndex = 57114;

	class MKDHBHBFEDD : public ::BNBOAMEBAOE
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::System::Collections::Generic::List_1<::GELIALJDFBL*>* ECMFFNPIHGD; // 0x20
		::BNBOAMEBAOE* DOCDBCNCFEB; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SequenceConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SequenceConfig*))((::PBYTE)hIl2Cpp + MKDHBHBFEDD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::TaskConfig*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + MKDHBHBFEDD_CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean LDAMHBBILAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MKDHBHBFEDD_LDAMHBBILAD_OFFSET))(this);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKDHBHBFEDD_HKKFFCBJOKM_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKDHBHBFEDD_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKDHBHBFEDD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKDHBHBFEDD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MKDHBHBFEDD_TICK_OFFSET))(this, a1);
		}

		::RPG::GameCore::TaskContext* CIADCOCBJDB()
		{
			return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKDHBHBFEDD_CIADCOCBJDB_OFFSET))(this);
		}

		::System::Void NOAEDJIMAEI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKDHBHBFEDD_NOAEDJIMAEI_OFFSET))(this);
		}

		::System::Void NALNPFBIDCL(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MKDHBHBFEDD_NALNPFBIDCL_OFFSET))(this, a1);
		}

		::System::Boolean MABOIANGJIJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MKDHBHBFEDD_MABOIANGJIJ_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::GELIALJDFBL*>* FADEIFNLDDM()
		{
			return ((::System::Collections::Generic::IList_1<::GELIALJDFBL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKDHBHBFEDD_FADEIFNLDDM_OFFSET))(this);
		}

	};
