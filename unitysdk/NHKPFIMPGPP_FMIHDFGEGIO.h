#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NHKPFIMPGPP_FMIHDFGEGIO_CTOR_OFFSET UNITYSDK_OFFSET(0xBBD4720)
#define NHKPFIMPGPP_FMIHDFGEGIO_GET_BUBBLETEXT_OFFSET UNITYSDK_OFFSET(0xBBD48D0)
#define NHKPFIMPGPP_FMIHDFGEGIO_GET_PROBABILITY_OFFSET UNITYSDK_OFFSET(0xBBD48B0)
#define NHKPFIMPGPP_FMIHDFGEGIO_GET_STATETOPLAY_OFFSET UNITYSDK_OFFSET(0xBBD48C0)

	class NHKPFIMPGPP_FMIHDFGEGIO : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* _StateToPlay_k__BackingField; // 0x10
		::RPG::Client::TextID _BubbleText_k__BackingField; // 0x18
		::System::Single _Probability_k__BackingField; // 0x28
		::System::Void _ctor(::System::Single a1, ::System::Collections::Generic::List_1<::System::String*>* a2, ::RPG::Client::TextID a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Collections::Generic::List_1<::System::String*>*, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + NHKPFIMPGPP_FMIHDFGEGIO_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Single get_Probability()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NHKPFIMPGPP_FMIHDFGEGIO_GET_PROBABILITY_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_StateToPlay()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHKPFIMPGPP_FMIHDFGEGIO_GET_STATETOPLAY_OFFSET))(this);
		}

		::RPG::Client::TextID get_BubbleText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + NHKPFIMPGPP_FMIHDFGEGIO_GET_BUBBLETEXT_OFFSET))(this);
		}

	};
