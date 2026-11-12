#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EOCNNALBNJD.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class OGODLCGIBNC;

#define OGODLCGIBNC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E47A230)
#define OGODLCGIBNC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E479F10)

inline static constexpr unsigned int OGODLCGIBNC_TypeDefinitionIndex = 14554;

	class OGODLCGIBNC : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* KHDOMCOJDMI; // 0x10
		::Il2CppArray<::System::Single>* KBHANONLIKP; // 0x18
		::RPG::Client::TextID OENAMINOLLF; // 0x20
		::System::Boolean IFHBHIHHFBM; // 0x30
		::System::Byte _padding0[0x3];
		::EOCNNALBNJD GMPGDEINODK; // 0x34
		::System::Int32 GBANBJFKIJL; // 0x38
		::System::UInt32 AOBEAMFDGGC; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGODLCGIBNC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::OGODLCGIBNC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OGODLCGIBNC*))((::PBYTE)hIl2Cpp + OGODLCGIBNC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
