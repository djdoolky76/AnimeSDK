#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MusicRhythmGroup; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define INEKEGFOFFE_CTOR_OFFSET UNITYSDK_OFFSET(0xB818E80)
#define INEKEGFOFFE_HONPOEGJHFN_OFFSET UNITYSDK_OFFSET(0xB818880)

inline static constexpr unsigned int INEKEGFOFFE_TypeDefinitionIndex = 63213;

	class INEKEGFOFFE : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INEKEGFOFFE_CTOR_OFFSET))(this);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmGroup*>* HONPOEGJHFN(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmGroup*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + INEKEGFOFFE_HONPOEGJHFN_OFFSET))(a1);
		}

	};
