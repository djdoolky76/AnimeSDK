#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HMOLKGEPDDC;
class HNLKNLJBHDD;
class OBPMHOLHOHG;
class ODCELNBAEIB;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NDNOFFMAMFJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBB4F320)
#define NDNOFFMAMFJ_EPEJMFLBOKA_OFFSET UNITYSDK_OFFSET(0xBB4F270)
#define NDNOFFMAMFJ_GMPJKHKAGDB_OFFSET UNITYSDK_OFFSET(0xBB4EBE0)
#define NDNOFFMAMFJ_IDBMKFOANNN_OFFSET UNITYSDK_OFFSET(0xBB4F1C0)
#define NDNOFFMAMFJ_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xBB4E420)
#define NDNOFFMAMFJ_KGLALFINBMC_OFFSET UNITYSDK_OFFSET(0xBB4E1D0)
#define NDNOFFMAMFJ_KJKFCILCKHE_OFFSET UNITYSDK_OFFSET(0xBB4F110)
#define NDNOFFMAMFJ_KNIIFOACLPH_OFFSET UNITYSDK_OFFSET(0xBB4E790)
#define NDNOFFMAMFJ_LFDLKILDBOC_OFFSET UNITYSDK_OFFSET(0xBB4EF90)
#define NDNOFFMAMFJ_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xBB4E140)

inline static constexpr unsigned int NDNOFFMAMFJ_TypeDefinitionIndex = 79110;

	class NDNOFFMAMFJ : public ::System::Object
	{
	public:
		::OBPMHOLHOHG* MPAMGPLFJMN; // 0x10
		::OBPMHOLHOHG* ILDCCGLMMLC; // 0x18
		::OBPMHOLHOHG* FCPCBHMLCMF; // 0x20
		::System::Collections::Generic::List_1<::HMOLKGEPDDC*>* KAIBLMKINBP; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDNOFFMAMFJ_CTOR_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDNOFFMAMFJ_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void KGLALFINBMC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDNOFFMAMFJ_KGLALFINBMC_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NDNOFFMAMFJ_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void GMPJKHKAGDB(::ODCELNBAEIB* a1, ::HMOLKGEPDDC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ODCELNBAEIB*, ::HMOLKGEPDDC*))((::PBYTE)hIl2Cpp + NDNOFFMAMFJ_GMPJKHKAGDB_OFFSET))(this, a1, a2);
		}

		::System::Void LFDLKILDBOC(::HMOLKGEPDDC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HMOLKGEPDDC*))((::PBYTE)hIl2Cpp + NDNOFFMAMFJ_LFDLKILDBOC_OFFSET))(this, a1);
		}

		::System::Void KJKFCILCKHE(::RPG::GameCore::GameEntity* a1, ::HNLKNLJBHDD* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::HNLKNLJBHDD*, ::System::String*))((::PBYTE)hIl2Cpp + NDNOFFMAMFJ_KJKFCILCKHE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IDBMKFOANNN(::RPG::GameCore::GameEntity* a1, ::HNLKNLJBHDD* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::HNLKNLJBHDD*, ::System::String*))((::PBYTE)hIl2Cpp + NDNOFFMAMFJ_IDBMKFOANNN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EPEJMFLBOKA(::RPG::GameCore::GameEntity* a1, ::HNLKNLJBHDD* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::HNLKNLJBHDD*, ::System::String*))((::PBYTE)hIl2Cpp + NDNOFFMAMFJ_EPEJMFLBOKA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KNIIFOACLPH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NDNOFFMAMFJ_KNIIFOACLPH_OFFSET))(this, a1);
		}

	};
