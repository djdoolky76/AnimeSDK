#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FMChannelSourceRequestPriority.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define LJGNPJOPBAE_CLEAR_OFFSET UNITYSDK_OFFSET(0xBFB4A90)
#define LJGNPJOPBAE_CTOR_OFFSET UNITYSDK_OFFSET(0xBFB4AF0)

inline static constexpr unsigned int LJGNPJOPBAE_TypeDefinitionIndex = 62278;

	class LJGNPJOPBAE : public ::System::Object
	{
	public:
		::System::String* ECCIPKNJJLH; // 0x10
		::System::Single GCJMFBKLGHI; // 0x18
		::System::Single IEHPFADHJFD; // 0x1C
		::RPG::Client::FMChannelSourceRequestPriority NALMBOOCCIN; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJGNPJOPBAE_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJGNPJOPBAE_CLEAR_OFFSET))(this);
		}

	};
