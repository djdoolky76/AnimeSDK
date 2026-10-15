#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class EntityEraFlipperShowListener; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define ADIIBONIINP_CTOR_OFFSET UNITYSDK_OFFSET(0xB13F590)
#define ADIIBONIINP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB13F9E0)
#define ADIIBONIINP_NCKOLDFHEAL_OFFSET UNITYSDK_OFFSET(0xB13FC10)
#define ADIIBONIINP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB13F680)
#define ADIIBONIINP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB13F840)
#define ADIIBONIINP_TICK_OFFSET UNITYSDK_OFFSET(0xB13FF30)

inline static constexpr unsigned int ADIIBONIINP_TypeDefinitionIndex = 52761;

	class ADIIBONIINP : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* OAMDJNHMPBK; // 0x18
		::KFELGAIGHAP* IICKDKCCNPE; // 0x20
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x28
		::RPG::GameCore::EntityEraFlipperShowListener* IGHAHBNLIJA; // 0x30
		::System::Boolean HPPIMDBIDKA; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EntityEraFlipperShowListener* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EntityEraFlipperShowListener*))((::PBYTE)hIl2Cpp + ADIIBONIINP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADIIBONIINP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADIIBONIINP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADIIBONIINP_DISPOSE_OFFSET))(this);
		}

		::System::Void NCKOLDFHEAL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ADIIBONIINP_NCKOLDFHEAL_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ADIIBONIINP_TICK_OFFSET))(this, a1);
		}

	};
