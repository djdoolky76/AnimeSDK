#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/TacticsBuyResult.h"
#include "unitysdk/System/MulticastDelegate.h"
class EEKIILDAMOL;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define HENHIIJNLCK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C636900)
#define HENHIIJNLCK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C636860)
#define HENHIIJNLCK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C6369C0)
#define HENHIIJNLCK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C6368D0)

inline static constexpr unsigned int HENHIIJNLCK_TypeDefinitionIndex = 36258;

	class HENHIIJNLCK : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + HENHIIJNLCK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::UInt32 a1, ::System::Int32 a2, ::RPG::LittleGameShare::DiceCombatCore::TacticsBuyResult a3, ::EEKIILDAMOL* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::RPG::LittleGameShare::DiceCombatCore::TacticsBuyResult, ::EEKIILDAMOL*))((::PBYTE)hIl2Cpp + HENHIIJNLCK_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 a1, ::System::Int32 a2, ::RPG::LittleGameShare::DiceCombatCore::TacticsBuyResult a3, ::EEKIILDAMOL* a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::System::Int32, ::RPG::LittleGameShare::DiceCombatCore::TacticsBuyResult, ::EEKIILDAMOL*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + HENHIIJNLCK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + HENHIIJNLCK_ENDINVOKE_OFFSET))(this, a1);
		}

	};
