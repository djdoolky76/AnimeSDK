#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateClazzType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class JBLFDPLFIFH;
namespace System { class String; }

#define JBLFDPLFIFH_CTOR_OFFSET UNITYSDK_OFFSET(0xCA93BB0)
#define JBLFDPLFIFH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0xCA937A0)

inline static constexpr unsigned int JBLFDPLFIFH_TypeDefinitionIndex = 11551;

	class JBLFDPLFIFH : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* MDEBFIFOKHH; // 0x10
		::System::String* BELPGNDDELK; // 0x18
		::System::String* DMMLHHHPBMO; // 0x20
		::RPG::Client::TextID LAFABGLMPIA; // 0x28
		::RPG::Client::TextID KBNHPKIOGLH; // 0x38
		::System::UInt32 ACCJKGEKHKP; // 0x48
		::System::UInt32 LKFAGDDOFED; // 0x4C
		::RPG::Client::TextID OHGFMOPCOKM; // 0x50
		::RPG::GameCore::FateClazzType LEKEEONHDLP; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBLFDPLFIFH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JBLFDPLFIFH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JBLFDPLFIFH*))((::PBYTE)hIl2Cpp + JBLFDPLFIFH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
