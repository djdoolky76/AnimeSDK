#pragma once
#include "unitysdk/unitysdk.h"
class DMNLJJNBEJO;
class KFELGAIGHAP;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GOGMKAHGLAC_CTOR_OFFSET UNITYSDK_OFFSET(0x15B2F7C0)
#define GOGMKAHGLAC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15B2F950)
#define GOGMKAHGLAC_HFJOFENDOHE_OFFSET UNITYSDK_OFFSET(0x15B30590)
#define GOGMKAHGLAC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15B2FAF0)

inline static constexpr unsigned int GOGMKAHGLAC_TypeDefinitionIndex = 58738;

	class GOGMKAHGLAC
	{
	public:
		::KFELGAIGHAP* PPGCGPPDPGG; // 0x28
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* OAAMJPPKGJP; // 0x30
		::KFELGAIGHAP* FHABNNPBEIO; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::DMNLJJNBEJO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::DMNLJJNBEJO*))((::PBYTE)hIl2Cpp + GOGMKAHGLAC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOGMKAHGLAC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOGMKAHGLAC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void HFJOFENDOHE(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + GOGMKAHGLAC_HFJOFENDOHE_OFFSET))(this, a1);
		}

	};
