#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CNADKCFAIEB_LFLEPFGFFOO_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xE389150)
#define CNADKCFAIEB_LFLEPFGFFOO_CTOR_OFFSET UNITYSDK_OFFSET(0xE389060)
#define CNADKCFAIEB_LFLEPFGFFOO_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xE3891F0)
#define CNADKCFAIEB_LFLEPFGFFOO_INVOKE_OFFSET UNITYSDK_OFFSET(0xE388870)

inline static constexpr unsigned int CNADKCFAIEB_LFLEPFGFFOO_TypeDefinitionIndex = 73550;

	class CNADKCFAIEB_LFLEPFGFFOO : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CNADKCFAIEB_LFLEPFGFFOO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CNADKCFAIEB_LFLEPFGFFOO_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2, ::System::Single a3, ::System::Single a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::System::Single, ::System::Single, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CNADKCFAIEB_LFLEPFGFFOO_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void EndInvoke(::System::Single a1, ::System::Single a2, ::System::IAsyncResult* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CNADKCFAIEB_LFLEPFGFFOO_ENDINVOKE_OFFSET))(this, a1, a2, a3);
		}

	};
