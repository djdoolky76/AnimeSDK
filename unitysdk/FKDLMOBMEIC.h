#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPhotoGraphConditionResult; }
namespace System { class Object; }

#define FKDLMOBMEIC_CTOR_OFFSET UNITYSDK_OFFSET(0x1AA94C40)
#define FKDLMOBMEIC_DIGNGPBHBEB_OFFSET UNITYSDK_OFFSET(0x1AA952A0)
#define FKDLMOBMEIC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AA94D30)
#define FKDLMOBMEIC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1AA950E0)
#define FKDLMOBMEIC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1AA95190)
#define FKDLMOBMEIC_OOJIFECGAGE_OFFSET UNITYSDK_OFFSET(0x1AA95000)
#define FKDLMOBMEIC_TICK_OFFSET UNITYSDK_OFFSET(0x1AA94F20)

inline static constexpr unsigned int FKDLMOBMEIC_TypeDefinitionIndex = 54645;

	class FKDLMOBMEIC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::WaitPhotoGraphConditionResult* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::KFELGAIGHAP* HPJPJBLFDGA; // 0x28
		::KFELGAIGHAP* CHOOMNGLJHI; // 0x30
		::KFELGAIGHAP* LNMOCNDILJN; // 0x38
		::System::Boolean MFGHMLJJNIG; // 0x40
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitPhotoGraphConditionResult* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitPhotoGraphConditionResult*))((::PBYTE)hIl2Cpp + FKDLMOBMEIC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDLMOBMEIC_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FKDLMOBMEIC_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDLMOBMEIC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDLMOBMEIC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void DIGNGPBHBEB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FKDLMOBMEIC_DIGNGPBHBEB_OFFSET))(this, a1);
		}

		::System::Void OOJIFECGAGE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDLMOBMEIC_OOJIFECGAGE_OFFSET))(this);
		}

	};
