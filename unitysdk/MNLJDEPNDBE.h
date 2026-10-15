#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/TacticsRefreshResult.h"
#include "unitysdk/System/MulticastDelegate.h"
class EEKIILDAMOL;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MNLJDEPNDBE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C74FF10)
#define MNLJDEPNDBE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C74FE80)
#define MNLJDEPNDBE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C74FFB0)
#define MNLJDEPNDBE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C74FEF0)

inline static constexpr unsigned int MNLJDEPNDBE_TypeDefinitionIndex = 36259;

	class MNLJDEPNDBE : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MNLJDEPNDBE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::UInt32 a1, ::RPG::LittleGameShare::DiceCombatCore::TacticsRefreshResult a2, ::EEKIILDAMOL* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::LittleGameShare::DiceCombatCore::TacticsRefreshResult, ::EEKIILDAMOL*))((::PBYTE)hIl2Cpp + MNLJDEPNDBE_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 a1, ::RPG::LittleGameShare::DiceCombatCore::TacticsRefreshResult a2, ::EEKIILDAMOL* a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::RPG::LittleGameShare::DiceCombatCore::TacticsRefreshResult, ::EEKIILDAMOL*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MNLJDEPNDBE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MNLJDEPNDBE_ENDINVOKE_OFFSET))(this, a1);
		}

	};
