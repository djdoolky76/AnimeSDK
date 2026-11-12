#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/PreValidationFailureReason.h"
#include "unitysdk/System/Object.h"
class FEFLMKBBDLO;
class HLJNBBHKKMI;
class JKOOAIOBGHP;
class LPHINGPIEAJ;
class MBJGGCCKIOC;
namespace System { class Object; }

#define KAFHPNECPHG_ALPMJKOKMHJ_OFFSET UNITYSDK_OFFSET(0xBB5A0A0)
#define KAFHPNECPHG_CTOR_OFFSET UNITYSDK_OFFSET(0xBB59A30)
#define KAFHPNECPHG_MJKLLABIFAI_OFFSET UNITYSDK_OFFSET(0xBB5A000)
#define KAFHPNECPHG_TRYGETCANDIDATES_OFFSET UNITYSDK_OFFSET(0xBB59A40)

inline static constexpr unsigned int KAFHPNECPHG_TypeDefinitionIndex = 80033;

	class KAFHPNECPHG : public ::System::Object
	{
	public:
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x10
		::System::Void _ctor(::HLJNBBHKKMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + KAFHPNECPHG_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean TryGetCandidates(::FEFLMKBBDLO* a1, ::JKOOAIOBGHP* a2, ::RPG::Client::LittleGame::ComicDessert::PreValidationFailureReason a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::FEFLMKBBDLO*, ::JKOOAIOBGHP*, ::RPG::Client::LittleGame::ComicDessert::PreValidationFailureReason))((::PBYTE)hIl2Cpp + KAFHPNECPHG_TRYGETCANDIDATES_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean MJKLLABIFAI(::FEFLMKBBDLO* a1, ::LPHINGPIEAJ* a2, ::System::Object* a3, ::RPG::Client::LittleGame::ComicDessert::PreValidationFailureReason a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::FEFLMKBBDLO*, ::LPHINGPIEAJ*, ::System::Object*, ::RPG::Client::LittleGame::ComicDessert::PreValidationFailureReason))((::PBYTE)hIl2Cpp + KAFHPNECPHG_MJKLLABIFAI_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 ALPMJKOKMHJ(::LPHINGPIEAJ* a1, ::MBJGGCCKIOC* a2, ::LPHINGPIEAJ* a3, ::MBJGGCCKIOC* a4)
		{
			return ((::System::Int32(*)(::PVOID, ::LPHINGPIEAJ*, ::MBJGGCCKIOC*, ::LPHINGPIEAJ*, ::MBJGGCCKIOC*))((::PBYTE)hIl2Cpp + KAFHPNECPHG_ALPMJKOKMHJ_OFFSET))(this, a1, a2, a3, a4);
		}

	};
