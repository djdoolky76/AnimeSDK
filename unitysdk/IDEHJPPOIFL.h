#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IDEHJPPOIFL_CTOR_OFFSET UNITYSDK_OFFSET(0x15EB8540)

inline static constexpr unsigned int IDEHJPPOIFL_TypeDefinitionIndex = 57629;

	class IDEHJPPOIFL : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* FFGNGFBJAAP; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* AFDIIDKAKEE; // 0x18
		::System::UInt32 OHIDKMKBIGJ; // 0x20
		::System::UInt32 DLOOMDHHNGC; // 0x24
		::RPG::GameCore::FixPoint IMKHIDEBGEB; // 0x28
		::RPG::GameCore::FixPoint OHBHPFKAFME; // 0x30
		::System::UInt32 ACCJKGEKHKP; // 0x38
		::System::UInt32 HADOLAHMBJE; // 0x3C
		::System::UInt32 BKKDEEMMBJI; // 0x40
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint EOMBCKAJDAK; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEHJPPOIFL_CTOR_OFFSET))(this);
		}

	};
