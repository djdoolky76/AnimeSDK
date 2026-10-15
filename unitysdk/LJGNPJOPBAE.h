#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FMChannelSourceRequestPriority.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define LJGNPJOPBAE_CLEAR_OFFSET UNITYSDK_OFFSET(0xB7185F0)
#define LJGNPJOPBAE_CTOR_OFFSET UNITYSDK_OFFSET(0xB718650)

inline static constexpr unsigned int LJGNPJOPBAE_TypeDefinitionIndex = 60902;

	class LJGNPJOPBAE : public ::System::Object
	{
	public:
		::System::String* ECCIPKNJJLH; // 0x10
		::System::Single IEHPFADHJFD; // 0x18
		::RPG::Client::FMChannelSourceRequestPriority NALMBOOCCIN; // 0x1C
		::System::Single GCJMFBKLGHI; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJGNPJOPBAE_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJGNPJOPBAE_CLEAR_OFFSET))(this);
		}

	};
