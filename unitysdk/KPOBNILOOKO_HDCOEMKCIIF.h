#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPOBNILOOKO_HDCOEMKCIIF;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KPOBNILOOKO_HDCOEMKCIIF_CLEAR_OFFSET UNITYSDK_OFFSET(0xB5C9370)
#define KPOBNILOOKO_HDCOEMKCIIF_COMPARETO_OFFSET UNITYSDK_OFFSET(0xB5C9420)
#define KPOBNILOOKO_HDCOEMKCIIF_CTOR_OFFSET UNITYSDK_OFFSET(0xB5C94D0)

inline static constexpr unsigned int KPOBNILOOKO_HDCOEMKCIIF_TypeDefinitionIndex = 73338;

	class KPOBNILOOKO_HDCOEMKCIIF : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* FOMONIPLALG; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* CPKHMNHOAGJ; // 0x18
		::System::String* OENAMINOLLF; // 0x20
		::System::Int32 NALMBOOCCIN; // 0x28
		::System::Single IEHPFADHJFD; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPOBNILOOKO_HDCOEMKCIIF_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPOBNILOOKO_HDCOEMKCIIF_CLEAR_OFFSET))(this);
		}

		::System::Int32 CompareTo(::KPOBNILOOKO_HDCOEMKCIIF* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::KPOBNILOOKO_HDCOEMKCIIF*))((::PBYTE)hIl2Cpp + KPOBNILOOKO_HDCOEMKCIIF_COMPARETO_OFFSET))(this, a1);
		}

	};
