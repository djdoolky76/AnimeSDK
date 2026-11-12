#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KAFHPNECPHG.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/PreValidationFailureReason.h"
class FEFLMKBBDLO;
class HLJNBBHKKMI;
class LPHINGPIEAJ;
class MBJGGCCKIOC;
namespace System { class Object; }

#define DFMNDHILMIK_ALPMJKOKMHJ_OFFSET UNITYSDK_OFFSET(0xF19B890)
#define DFMNDHILMIK_CTOR_OFFSET UNITYSDK_OFFSET(0xF19B3B0)
#define DFMNDHILMIK_MJKLLABIFAI_OFFSET UNITYSDK_OFFSET(0xF19B3C0)
#define DFMNDHILMIK_NCENHLFGJJC_OFFSET UNITYSDK_OFFSET(0xF19B910)

inline static constexpr unsigned int DFMNDHILMIK_TypeDefinitionIndex = 80034;

	class DFMNDHILMIK : public ::KAFHPNECPHG
	{
	public:
		// static const ::System::Object GGIOLHOAIOB; // 0x0
		::System::Void _ctor(::HLJNBBHKKMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + DFMNDHILMIK_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean MJKLLABIFAI(::FEFLMKBBDLO* a1, ::LPHINGPIEAJ* a2, ::System::Object* a3, ::RPG::Client::LittleGame::ComicDessert::PreValidationFailureReason a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::FEFLMKBBDLO*, ::LPHINGPIEAJ*, ::System::Object*, ::RPG::Client::LittleGame::ComicDessert::PreValidationFailureReason))((::PBYTE)hIl2Cpp + DFMNDHILMIK_MJKLLABIFAI_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 ALPMJKOKMHJ(::LPHINGPIEAJ* a1, ::MBJGGCCKIOC* a2, ::LPHINGPIEAJ* a3, ::MBJGGCCKIOC* a4)
		{
			return ((::System::Int32(*)(::PVOID, ::LPHINGPIEAJ*, ::MBJGGCCKIOC*, ::LPHINGPIEAJ*, ::MBJGGCCKIOC*))((::PBYTE)hIl2Cpp + DFMNDHILMIK_ALPMJKOKMHJ_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Int32 NCENHLFGJJC(::HLJNBBHKKMI* a1, ::LPHINGPIEAJ* a2)
		{
			return ((::System::Int32(*)(::HLJNBBHKKMI*, ::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + DFMNDHILMIK_NCENHLFGJJC_OFFSET))(a1, a2);
		}

	};
