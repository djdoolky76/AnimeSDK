#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EOCNNALBNJD.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class OGODLCGIBNC;

#define OGODLCGIBNC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D273F10)
#define OGODLCGIBNC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D273C40)

inline static constexpr unsigned int OGODLCGIBNC_TypeDefinitionIndex = 14397;

	class OGODLCGIBNC : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* KHDOMCOJDMI; // 0x10
		::System::UInt32 AOBEAMFDGGC; // 0x18
		::EOCNNALBNJD GMPGDEINODK; // 0x1C
		::System::Boolean IFHBHIHHFBM; // 0x20
		::System::Byte _padding0[0x3];
		::System::Int32 GBANBJFKIJL; // 0x24
		::RPG::Client::TextID OENAMINOLLF; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGODLCGIBNC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::OGODLCGIBNC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OGODLCGIBNC*))((::PBYTE)hIl2Cpp + OGODLCGIBNC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
