#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPGTools::AudioRecordingAnnotator { class AudioNode; }
namespace RPGTools::AudioRecordingAnnotator { class Segment; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AKJDELLNPBK_CTOR_OFFSET UNITYSDK_OFFSET(0x19D5DE40)

inline static constexpr unsigned int AKJDELLNPBK_TypeDefinitionIndex = 50041;

	class AKJDELLNPBK : public ::System::Object
	{
	public:
		::System::String* DFDECMOCBHM; // 0x10
		::System::String* IGEKBHHGDPP; // 0x18
		::System::Collections::Generic::List_1<::RPGTools::AudioRecordingAnnotator::AudioNode*>* LLOLJCGMLAE; // 0x20
		::System::Collections::Generic::List_1<::RPGTools::AudioRecordingAnnotator::Segment*>* HIMDGIKDMHP; // 0x28
		::System::Double IAMCIOFMEKK; // 0x30
		::System::UInt32 EBIIKKFIHNG; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKJDELLNPBK_CTOR_OFFSET))(this);
		}

	};
