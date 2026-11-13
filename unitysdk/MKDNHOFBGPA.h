#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class MKDNHOFBGPA;
namespace System { class String; }

#define MKDNHOFBGPA_CTOR_OFFSET UNITYSDK_OFFSET(0x1F590B70)
#define MKDNHOFBGPA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F590790)

inline static constexpr unsigned int MKDNHOFBGPA_TypeDefinitionIndex = 12560;

	class MKDNHOFBGPA : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* GFLGOBHOKHI; // 0x10
		::System::String* KKJHBCAHFAO; // 0x18
		::System::String* BDACPPLKLGL; // 0x20
		::Il2CppArray<::System::UInt32>* CBBDEODGNDG; // 0x28
		::System::String* FBKAMIHGLFK; // 0x30
		::RPG::Client::TextID NMAHGFAPENI; // 0x38
		::RPG::Client::TextID OENAMINOLLF; // 0x48
		::System::UInt32 PHFMCACHFIJ; // 0x58
		::System::UInt32 HAEDMJHMJHC; // 0x5C
		::System::UInt32 DBIHGLJEGPO; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKDNHOFBGPA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MKDNHOFBGPA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MKDNHOFBGPA*))((::PBYTE)hIl2Cpp + MKDNHOFBGPA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
