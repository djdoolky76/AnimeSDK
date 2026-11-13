#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJDCLALCDLJ;
class HLJNBBHKKMI;
class JMHHBMNIJJB;
class LPHINGPIEAJ;
namespace RPG::Client::LittleGame::ComicDessert { class ComicDessertDeviceView; }
namespace RPG::Client::LittleGame::ComicDessert { class ComicDessertSceneRoot; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JKKEKEDFAPG_CTOR_OFFSET UNITYSDK_OFFSET(0x17B254C0)
#define JKKEKEDFAPG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17B25A60)
#define JKKEKEDFAPG_FNLIECLOPKO_OFFSET UNITYSDK_OFFSET(0x17B25850)
#define JKKEKEDFAPG_IKPMMBEIGOE_OFFSET UNITYSDK_OFFSET(0x17B254D0)
#define JKKEKEDFAPG_JDEKJLHMPLG_OFFSET UNITYSDK_OFFSET(0x17B25660)
#define JKKEKEDFAPG_PJFIIACHCDC_OFFSET UNITYSDK_OFFSET(0x17B25940)

inline static constexpr unsigned int JKKEKEDFAPG_TypeDefinitionIndex = 79877;

	class JKKEKEDFAPG : public ::System::Object
	{
	public:
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x10
		::JMHHBMNIJJB* EEFMDEHLLFI; // 0x18
		::System::Void _ctor(::JMHHBMNIJJB* a1, ::HLJNBBHKKMI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JMHHBMNIJJB*, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + JKKEKEDFAPG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void IKPMMBEIGOE(::RPG::Client::LittleGame::ComicDessert::ComicDessertSceneRoot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ComicDessertSceneRoot*))((::PBYTE)hIl2Cpp + JKKEKEDFAPG_IKPMMBEIGOE_OFFSET))(this, a1);
		}

		::LPHINGPIEAJ* JDEKJLHMPLG(::RPG::Client::LittleGame::ComicDessert::ComicDessertDeviceView* a1)
		{
			return ((::LPHINGPIEAJ*(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ComicDessertDeviceView*))((::PBYTE)hIl2Cpp + JKKEKEDFAPG_JDEKJLHMPLG_OFFSET))(this, a1);
		}

		::System::Void FNLIECLOPKO(::LPHINGPIEAJ* a1, ::RPG::Client::LittleGame::ComicDessert::ComicDessertDeviceView* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LPHINGPIEAJ*, ::RPG::Client::LittleGame::ComicDessert::ComicDessertDeviceView*))((::PBYTE)hIl2Cpp + JKKEKEDFAPG_FNLIECLOPKO_OFFSET))(this, a1, a2);
		}

		static ::System::Void PJFIIACHCDC(::System::Collections::Generic::List_1<::AJDCLALCDLJ*>* a1, ::RPG::Client::LittleGame::ComicDessert::ComicDessertDeviceView* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::AJDCLALCDLJ*>*, ::RPG::Client::LittleGame::ComicDessert::ComicDessertDeviceView*))((::PBYTE)hIl2Cpp + JKKEKEDFAPG_PJFIIACHCDC_OFFSET))(a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKEKEDFAPG_DISPOSE_OFFSET))(this);
		}

	};
