#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class MKDNHOFBGPA;
namespace System { class String; }

#define MKDNHOFBGPA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1B9D00)
#define MKDNHOFBGPA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1B9920)

inline static constexpr unsigned int MKDNHOFBGPA_TypeDefinitionIndex = 12493;

	class MKDNHOFBGPA : public ::System::Object
	{
	public:
		::System::String* BDACPPLKLGL; // 0x10
		::System::String* FBKAMIHGLFK; // 0x18
		::Il2CppArray<::System::UInt32>* CBBDEODGNDG; // 0x20
		::Il2CppArray<::System::UInt32>* GFLGOBHOKHI; // 0x28
		::System::String* KKJHBCAHFAO; // 0x30
		::System::UInt32 DBIHGLJEGPO; // 0x38
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID NMAHGFAPENI; // 0x40
		::RPG::Client::TextID OENAMINOLLF; // 0x50
		::System::UInt32 HAEDMJHMJHC; // 0x60
		::System::UInt32 PHFMCACHFIJ; // 0x64
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKDNHOFBGPA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MKDNHOFBGPA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MKDNHOFBGPA*))((::PBYTE)hIl2Cpp + MKDNHOFBGPA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
