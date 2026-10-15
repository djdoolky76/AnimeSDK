#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateClazzType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class JBLFDPLFIFH;
namespace System { class String; }

#define JBLFDPLFIFH_CTOR_OFFSET UNITYSDK_OFFSET(0x1CFE70F0)
#define JBLFDPLFIFH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CFE6CE0)

inline static constexpr unsigned int JBLFDPLFIFH_TypeDefinitionIndex = 11500;

	class JBLFDPLFIFH : public ::System::Object
	{
	public:
		::System::String* BELPGNDDELK; // 0x10
		::System::String* DMMLHHHPBMO; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* MDEBFIFOKHH; // 0x20
		::RPG::GameCore::FateClazzType LEKEEONHDLP; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID LAFABGLMPIA; // 0x30
		::RPG::Client::TextID KBNHPKIOGLH; // 0x40
		::System::UInt32 LKFAGDDOFED; // 0x50
		::System::UInt32 ACCJKGEKHKP; // 0x54
		::RPG::Client::TextID OHGFMOPCOKM; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBLFDPLFIFH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JBLFDPLFIFH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JBLFDPLFIFH*))((::PBYTE)hIl2Cpp + JBLFDPLFIFH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
