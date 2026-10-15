#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJIACBNKCCJ;
class JIJBCGDANLJ;
class KPDKCEAFBHI;
namespace Collections::Pooled { template <typename T1, typename T2> class PooledDictionary_2; }
namespace RPG::Client::RoadRash { class MonoRoadRashGameRoad; }
namespace RPG::Client::RoadRash { class MonoRoadRashGameSettings; }

#define HHDFHOBABCB_CTOR_OFFSET UNITYSDK_OFFSET(0x15CBBB00)
#define HHDFHOBABCB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15CBBB10)
#define HHDFHOBABCB_LCFPAEEFIGA_OFFSET UNITYSDK_OFFSET(0x15CBDC50)
#define HHDFHOBABCB_NLGNOELNBJM_OFFSET UNITYSDK_OFFSET(0x15CBBF00)
#define HHDFHOBABCB_OALFGPELIFF_OFFSET UNITYSDK_OFFSET(0x15CBD710)

inline static constexpr unsigned int HHDFHOBABCB_TypeDefinitionIndex = 75923;

	class HHDFHOBABCB : public ::System::Object
	{
	public:
		::JIJBCGDANLJ* FKINCGODJEP; // 0x10
		::KPDKCEAFBHI* ADJNOFMEIKM; // 0x18
		::System::Void _ctor(::JIJBCGDANLJ* a1, ::KPDKCEAFBHI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JIJBCGDANLJ*, ::KPDKCEAFBHI*))((::PBYTE)hIl2Cpp + HHDFHOBABCB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHDFHOBABCB_DISPOSE_OFFSET))(this);
		}

		::System::Void NLGNOELNBJM(::RPG::Client::RoadRash::MonoRoadRashGameSettings* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RoadRash::MonoRoadRashGameSettings*))((::PBYTE)hIl2Cpp + HHDFHOBABCB_NLGNOELNBJM_OFFSET))(this, a1);
		}

		static ::System::Void LCFPAEEFIGA(::Il2CppArray<::RPG::Client::RoadRash::MonoRoadRashGameRoad*>* a1, ::Il2CppArray<::BJIACBNKCCJ*>* a2, ::RPG::Client::RoadRash::MonoRoadRashGameRoad* a3, ::System::Single a4, ::BJIACBNKCCJ* a5, ::System::Single a6)
		{
			return ((::System::Void(*)(::Il2CppArray<::RPG::Client::RoadRash::MonoRoadRashGameRoad*>*, ::Il2CppArray<::BJIACBNKCCJ*>*, ::RPG::Client::RoadRash::MonoRoadRashGameRoad*, ::System::Single, ::BJIACBNKCCJ*, ::System::Single))((::PBYTE)hIl2Cpp + HHDFHOBABCB_LCFPAEEFIGA_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void OALFGPELIFF(::RPG::Client::RoadRash::MonoRoadRashGameSettings* a1, ::Collections::Pooled::PooledDictionary_2<::RPG::Client::RoadRash::MonoRoadRashGameRoad*, ::BJIACBNKCCJ*>* a2)
		{
			return ((::System::Void(*)(::RPG::Client::RoadRash::MonoRoadRashGameSettings*, ::Collections::Pooled::PooledDictionary_2<::RPG::Client::RoadRash::MonoRoadRashGameRoad*, ::BJIACBNKCCJ*>*))((::PBYTE)hIl2Cpp + HHDFHOBABCB_OALFGPELIFF_OFFSET))(a1, a2);
		}

	};
