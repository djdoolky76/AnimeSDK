#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenEffectType.h"
#include "unitysdk/System/Object.h"
class AENHJIPFJPA;
class AOIOJIPNOAL;
class FCOEMCEDLNL;
namespace System { class String; }

#define AENHJIPFJPA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC853C0)
#define AENHJIPFJPA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CC851F0)

inline static constexpr unsigned int AENHJIPFJPA_TypeDefinitionIndex = 11665;

	class AENHJIPFJPA : public ::System::Object
	{
	public:
		::System::String* EJHODPJIFIN; // 0x10
		::Il2CppArray<::AOIOJIPNOAL*>* AAIAEKDKMMK; // 0x18
		::RPG::GameCore::HipplenEffectType GMPGDEINODK; // 0x20
		::System::UInt32 PHFMCACHFIJ; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AENHJIPFJPA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::AENHJIPFJPA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AENHJIPFJPA*))((::PBYTE)hIl2Cpp + AENHJIPFJPA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
