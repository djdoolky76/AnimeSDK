#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OGANCPOAIIP.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class JBAPFPNFAIE;

#define JBAPFPNFAIE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CFE4200)
#define JBAPFPNFAIE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CFE4080)

inline static constexpr unsigned int JBAPFPNFAIE_TypeDefinitionIndex = 11976;

	class JBAPFPNFAIE : public ::System::Object
	{
	public:
		::RPG::Client::TextID NMAHGFAPENI; // 0x10
		::OGANCPOAIIP GMPGDEINODK; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBAPFPNFAIE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JBAPFPNFAIE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JBAPFPNFAIE*))((::PBYTE)hIl2Cpp + JBAPFPNFAIE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
