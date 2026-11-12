#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BNLHGENFEHG;
class FDPALAEIHPB;
class PGBLBOJBDGG;
namespace Entitas { template <typename T> class IGroup_1; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }

#define PEBLCBMLJDI_CTOR_OFFSET UNITYSDK_OFFSET(0xC939120)
#define PEBLCBMLJDI_EXECUTE_OFFSET UNITYSDK_OFFSET(0xC9391F0)

inline static constexpr unsigned int PEBLCBMLJDI_TypeDefinitionIndex = 79608;

	class PEBLCBMLJDI : public ::System::Object
	{
	public:
		::Entitas::IGroup_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* JPKEBGGDFPL; // 0x10
		::PGBLBOJBDGG* EEFMDEHLLFI; // 0x18
		::BNLHGENFEHG* PDENFEFCAGN; // 0x20
		::System::Void _ctor(::FDPALAEIHPB* a1, ::BNLHGENFEHG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*, ::BNLHGENFEHG*))((::PBYTE)hIl2Cpp + PEBLCBMLJDI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBLCBMLJDI_EXECUTE_OFFSET))(this);
		}

	};
