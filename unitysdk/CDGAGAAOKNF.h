#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MusicRhythmLevel; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CDGAGAAOKNF_CTOR_OFFSET UNITYSDK_OFFSET(0xC767240)
#define CDGAGAAOKNF_KLNGAANDOIM_OFFSET UNITYSDK_OFFSET(0xC766D90)

inline static constexpr unsigned int CDGAGAAOKNF_TypeDefinitionIndex = 61808;

	class CDGAGAAOKNF : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDGAGAAOKNF_CTOR_OFFSET))(this);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmLevel*>* KLNGAANDOIM(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmLevel*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CDGAGAAOKNF_KLNGAANDOIM_OFFSET))(a1);
		}

	};
