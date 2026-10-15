#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/TacticsBuyFinishResult.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define FFBJIOJPKIL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C6158A0)
#define FFBJIOJPKIL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C615830)
#define FFBJIOJPKIL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C615910)
#define FFBJIOJPKIL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C60F650)

inline static constexpr unsigned int FFBJIOJPKIL_TypeDefinitionIndex = 36261;

	class FFBJIOJPKIL : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + FFBJIOJPKIL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::RPG::LittleGameShare::DiceCombatCore::TacticsBuyFinishResult a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::LittleGameShare::DiceCombatCore::TacticsBuyFinishResult))((::PBYTE)hIl2Cpp + FFBJIOJPKIL_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::LittleGameShare::DiceCombatCore::TacticsBuyFinishResult a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::LittleGameShare::DiceCombatCore::TacticsBuyFinishResult, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + FFBJIOJPKIL_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + FFBJIOJPKIL_ENDINVOKE_OFFSET))(this, a1);
		}

	};
