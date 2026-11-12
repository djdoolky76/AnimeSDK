#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateClazzType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class JBLFDPLFIFH;
namespace System { class String; }

#define JBLFDPLFIFH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E202400)
#define JBLFDPLFIFH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E201FF0)

inline static constexpr unsigned int JBLFDPLFIFH_TypeDefinitionIndex = 11551;

	class JBLFDPLFIFH : public ::System::Object
	{
	public:
		::System::String* DMMLHHHPBMO; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* MDEBFIFOKHH; // 0x18
		::System::String* BELPGNDDELK; // 0x20
		::System::UInt32 LKFAGDDOFED; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID LAFABGLMPIA; // 0x30
		::RPG::Client::TextID KBNHPKIOGLH; // 0x40
		::RPG::Client::TextID OHGFMOPCOKM; // 0x50
		::System::UInt32 ACCJKGEKHKP; // 0x60
		::RPG::GameCore::FateClazzType LEKEEONHDLP; // 0x64
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBLFDPLFIFH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JBLFDPLFIFH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JBLFDPLFIFH*))((::PBYTE)hIl2Cpp + JBLFDPLFIFH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
