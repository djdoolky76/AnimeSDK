#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelEventType.h"
#include "unitysdk/System/Object.h"
class MGEHMMODJHE;
namespace System { class Object; }

#define MGEHMMODJHE_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB918170)
#define MGEHMMODJHE_CLEAR_OFFSET UNITYSDK_OFFSET(0xB918200)
#define MGEHMMODJHE_CTOR_OFFSET UNITYSDK_OFFSET(0xB918250)

inline static constexpr unsigned int MGEHMMODJHE_TypeDefinitionIndex = 77551;

	class MGEHMMODJHE : public ::System::Object
	{
	public:
		::System::Object* LBJJPCCEHLF; // 0x10
		::RPG::GameCore::ChimeraDuelEventType GMPGDEINODK; // 0x18
		::System::Int32 MMAMPEKECPI; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGEHMMODJHE_CTOR_OFFSET))(this);
		}

		static ::MGEHMMODJHE* BPLPBPMEODA(::System::Int32 a1, ::RPG::GameCore::ChimeraDuelEventType a2, ::System::Object* a3)
		{
			return ((::MGEHMMODJHE*(*)(::System::Int32, ::RPG::GameCore::ChimeraDuelEventType, ::System::Object*))((::PBYTE)hIl2Cpp + MGEHMMODJHE_BPLPBPMEODA_OFFSET))(a1, a2, a3);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGEHMMODJHE_CLEAR_OFFSET))(this);
		}

	};
