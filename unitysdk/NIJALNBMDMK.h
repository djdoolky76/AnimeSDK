#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPhotoGraphResult; }
namespace System { class Object; }

#define NIJALNBMDMK_CTOR_OFFSET UNITYSDK_OFFSET(0x148C5A00)
#define NIJALNBMDMK_DIGNGPBHBEB_OFFSET UNITYSDK_OFFSET(0x148C6060)
#define NIJALNBMDMK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x148C5AF0)
#define NIJALNBMDMK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x148C5EA0)
#define NIJALNBMDMK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x148C5F50)
#define NIJALNBMDMK_OOJIFECGAGE_OFFSET UNITYSDK_OFFSET(0x148C5DC0)
#define NIJALNBMDMK_TICK_OFFSET UNITYSDK_OFFSET(0x148C5CE0)

inline static constexpr unsigned int NIJALNBMDMK_TypeDefinitionIndex = 54646;

	class NIJALNBMDMK : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::WaitPhotoGraphResult* OFKGLJOAMLD; // 0x18
		::KFELGAIGHAP* CHOOMNGLJHI; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::KFELGAIGHAP* LNMOCNDILJN; // 0x30
		::KFELGAIGHAP* HPJPJBLFDGA; // 0x38
		::System::Boolean MFGHMLJJNIG; // 0x40
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitPhotoGraphResult* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitPhotoGraphResult*))((::PBYTE)hIl2Cpp + NIJALNBMDMK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIJALNBMDMK_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NIJALNBMDMK_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIJALNBMDMK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIJALNBMDMK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void DIGNGPBHBEB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NIJALNBMDMK_DIGNGPBHBEB_OFFSET))(this, a1);
		}

		::System::Void OOJIFECGAGE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIJALNBMDMK_OOJIFECGAGE_OFFSET))(this);
		}

	};
