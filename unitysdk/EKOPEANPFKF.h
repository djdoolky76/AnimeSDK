#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define EKOPEANPFKF_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC8F710)
#define EKOPEANPFKF_DCADIANHPFD_OFFSET UNITYSDK_OFFSET(0x1CC8F700)
#define EKOPEANPFKF_FMODFGHBEBK_OFFSET UNITYSDK_OFFSET(0x1CC8F6E0)
#define EKOPEANPFKF_LFKJJELMNPK_OFFSET UNITYSDK_OFFSET(0x1CC8F6F0)

inline static constexpr unsigned int EKOPEANPFKF_TypeDefinitionIndex = 43889;

	class EKOPEANPFKF : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKOPEANPFKF_CTOR_OFFSET))(this);
		}

		::System::Void FMODFGHBEBK(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EKOPEANPFKF_FMODFGHBEBK_OFFSET))(this, a1);
		}

		::System::Void LFKJJELMNPK(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EKOPEANPFKF_LFKJJELMNPK_OFFSET))(this, a1);
		}

		::System::Void DCADIANHPFD(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EKOPEANPFKF_DCADIANHPFD_OFFSET))(this, a1);
		}

	};
