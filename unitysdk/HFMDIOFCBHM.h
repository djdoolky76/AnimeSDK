#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class HFMDIOFCBHM;
namespace System { class String; }

#define HFMDIOFCBHM_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE74600)
#define HFMDIOFCBHM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE74450)

inline static constexpr unsigned int HFMDIOFCBHM_TypeDefinitionIndex = 13075;

	class HFMDIOFCBHM : public ::System::Object
	{
	public:
		::System::String* CEGADPFLPGM; // 0x10
		::RPG::GameCore::FixPoint AALPICLABCO; // 0x18
		::System::UInt32 DPPCACLHEIL; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFMDIOFCBHM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::HFMDIOFCBHM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HFMDIOFCBHM*))((::PBYTE)hIl2Cpp + HFMDIOFCBHM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
