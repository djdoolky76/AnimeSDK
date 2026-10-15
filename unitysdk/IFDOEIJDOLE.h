#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/TacticsDiscardResult.h"
#include "unitysdk/System/MulticastDelegate.h"
class EEKIILDAMOL;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define IFDOEIJDOLE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C66BBD0)
#define IFDOEIJDOLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C66BB30)
#define IFDOEIJDOLE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C66BC90)
#define IFDOEIJDOLE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C66BBA0)

inline static constexpr unsigned int IFDOEIJDOLE_TypeDefinitionIndex = 36260;

	class IFDOEIJDOLE : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + IFDOEIJDOLE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::UInt32 a1, ::System::Int32 a2, ::RPG::LittleGameShare::DiceCombatCore::TacticsDiscardResult a3, ::EEKIILDAMOL* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::RPG::LittleGameShare::DiceCombatCore::TacticsDiscardResult, ::EEKIILDAMOL*))((::PBYTE)hIl2Cpp + IFDOEIJDOLE_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 a1, ::System::Int32 a2, ::RPG::LittleGameShare::DiceCombatCore::TacticsDiscardResult a3, ::EEKIILDAMOL* a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::System::Int32, ::RPG::LittleGameShare::DiceCombatCore::TacticsDiscardResult, ::EEKIILDAMOL*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + IFDOEIJDOLE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + IFDOEIJDOLE_ENDINVOKE_OFFSET))(this, a1);
		}

	};
