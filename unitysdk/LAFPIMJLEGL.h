#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceTriggerEventType.h"
#include "unitysdk/System/Object.h"
class DBEILICHGCG;
class HNDGFOMILAG;
class JBACCAGFHON;
class LAFPIMJLEGL;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LAFPIMJLEGL_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB5DFE50)
#define LAFPIMJLEGL_CTOR_OFFSET UNITYSDK_OFFSET(0xB5DFF20)
#define LAFPIMJLEGL_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0xB5DFF80)
#define LAFPIMJLEGL_LOCHJCOFOFH_OFFSET UNITYSDK_OFFSET(0xB5E0220)

inline static constexpr unsigned int LAFPIMJLEGL_TypeDefinitionIndex = 76407;

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
