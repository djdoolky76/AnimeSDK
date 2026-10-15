#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceTriggerEventType.h"
#include "unitysdk/System/Object.h"
class DBEILICHGCG;
class HNDGFOMILAG;
class JBACCAGFHON;
class LAFPIMJLEGL;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LAFPIMJLEGL_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB5D94F0)
#define LAFPIMJLEGL_CTOR_OFFSET UNITYSDK_OFFSET(0xB5D95C0)
#define LAFPIMJLEGL_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0xB5D9620)
#define LAFPIMJLEGL_LOCHJCOFOFH_OFFSET UNITYSDK_OFFSET(0xB5D98C0)

inline static constexpr unsigned int LAFPIMJLEGL_TypeDefinitionIndex = 76406;

	class LAFPIMJLEGL : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::HNDGFOMILAG*>* FAINBBPOEDA; // 0x10
		::RPG::GameCore::CakeRaceTriggerEventType OBPOCFKOCFK; // 0x18
		::System::Void _ctor(::RPG::GameCore::CakeRaceTriggerEventType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceTriggerEventType))((::PBYTE)hIl2Cpp + LAFPIMJLEGL_CTOR_OFFSET))(this, a1);
		}

		static ::LAFPIMJLEGL* BPLPBPMEODA(::RPG::GameCore::CakeRaceTriggerEventType a1)
		{
			return ((::LAFPIMJLEGL*(*)(::RPG::GameCore::CakeRaceTriggerEventType))((::PBYTE)hIl2Cpp + LAFPIMJLEGL_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAFPIMJLEGL_DIOEAJEHHND_OFFSET))(this);
		}

		::System::Void LOCHJCOFOFH(::JBACCAGFHON* a1, ::DBEILICHGCG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JBACCAGFHON*, ::DBEILICHGCG*))((::PBYTE)hIl2Cpp + LAFPIMJLEGL_LOCHJCOFOFH_OFFSET))(this, a1, a2);
		}

	};
