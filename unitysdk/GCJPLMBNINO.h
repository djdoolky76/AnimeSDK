#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
class EAKGBLEMBLN;
class OLABFALNLJM;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define GCJPLMBNINO_CTOR_OFFSET UNITYSDK_OFFSET(0x15976930)
#define GCJPLMBNINO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x159767C0)
#define GCJPLMBNINO_HLKLBEGECHP_OFFSET UNITYSDK_OFFSET(0x15976890)
#define GCJPLMBNINO_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0x15976680)

inline static constexpr unsigned int GCJPLMBNINO_TypeDefinitionIndex = 56959;

	class GCJPLMBNINO : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::EAKGBLEMBLN* IJNINGIFGIK; // 0x18
		::OLABFALNLJM* HMPMCDFCNLO; // 0x20
		// static const ::System::String* POPHIILFKAA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCJPLMBNINO_CTOR_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCJPLMBNINO_LMCEDCHJKFF_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCJPLMBNINO_DISPOSE_OFFSET))(this);
		}

		::System::Void HLKLBEGECHP(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + GCJPLMBNINO_HLKLBEGECHP_OFFSET))(this, a1, a2, a3);
		}

	};
