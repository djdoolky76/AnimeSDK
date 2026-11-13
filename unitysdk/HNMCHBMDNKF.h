#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define HNMCHBMDNKF_CTOR_OFFSET UNITYSDK_OFFSET(0x1A378370)

inline static constexpr unsigned int HNMCHBMDNKF_TypeDefinitionIndex = 50031;

	class HNMCHBMDNKF : public ::System::Object
	{
	public:
		::System::String* FLNEHHAEINF; // 0x10
		::System::String* NCJBHLEKMIE; // 0x18
		::System::Int32 MCCNAJOKJPO; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNMCHBMDNKF_CTOR_OFFSET))(this);
		}

	};
