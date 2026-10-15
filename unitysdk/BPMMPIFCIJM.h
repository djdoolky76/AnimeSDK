#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MissionBeginType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BPMMPIFCIJM_CTOR_OFFSET UNITYSDK_OFFSET(0xC1AACD0)
#define BPMMPIFCIJM_TOSTRING_OFFSET UNITYSDK_OFFSET(0xC1AAC20)

inline static constexpr unsigned int BPMMPIFCIJM_TypeDefinitionIndex = 52010;

	class BPMMPIFCIJM : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* IIFKLLFEIDE; // 0x10
		::RPG::GameCore::MissionBeginType DJMOAEIBFDK; // 0x18
		::System::Boolean DNOONKNLGBD; // 0x1C
		::System::Byte _padding0[0x3];
		::System::UInt32 PHFMCACHFIJ; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPMMPIFCIJM_CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPMMPIFCIJM_TOSTRING_OFFSET))(this);
		}

	};
