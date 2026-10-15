#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BNLHGENFEHG;
class FDPALAEIHPB;
class PGBLBOJBDGG;
namespace Entitas { class IGroup; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }

#define PEBLCBMLJDI_CTOR_OFFSET UNITYSDK_OFFSET(0xC032C80)
#define PEBLCBMLJDI_EXECUTE_OFFSET UNITYSDK_OFFSET(0xC032D50)

inline static constexpr unsigned int PEBLCBMLJDI_TypeDefinitionIndex = 77274;

	class PEBLCBMLJDI : public ::System::Object
	{
	public:
		::BNLHGENFEHG* PDENFEFCAGN; // 0x10
		::PGBLBOJBDGG* EEFMDEHLLFI; // 0x18
		::Entitas::IGroup* JPKEBGGDFPL; // 0x20
		::System::Void _ctor(::FDPALAEIHPB* a1, ::BNLHGENFEHG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*, ::BNLHGENFEHG*))((::PBYTE)hIl2Cpp + PEBLCBMLJDI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBLCBMLJDI_EXECUTE_OFFSET))(this);
		}

	};
