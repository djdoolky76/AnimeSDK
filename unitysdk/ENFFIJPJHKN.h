#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class BEGLIKEGPOC;
class KCFOLLEKPGG;
class LAEINKGACID;
namespace RPG::Client::BlindBox::Pool { class BlindBoxPool; }
namespace System { class String; }

#define ENFFIJPJHKN_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1559EF10)
#define ENFFIJPJHKN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1559F820)
#define ENFFIJPJHKN_CTOR_OFFSET UNITYSDK_OFFSET(0x1559EE80)
#define ENFFIJPJHKN_EHECHGPMPHM_OFFSET UNITYSDK_OFFSET(0x1559F6B0)

inline static constexpr unsigned int ENFFIJPJHKN_TypeDefinitionIndex = 74909;

	class ENFFIJPJHKN : public ::System::Object
	{
	public:
		::LAEINKGACID* KHNOPFEHCBP; // 0x10
		::KCFOLLEKPGG* POKJONGDBGC; // 0x18
		::System::UInt32 LOHKJHKONCO; // 0x20
		::System::UInt32 KCBFECAKIFD; // 0x24
		::System::UInt32 NFMDGJAEEFD; // 0x28
		static ::RPG::Client::TextID* StaticGet_FDKPMNKMEBE()
		{
			return (::RPG::Client::TextID*)UnitySDK::FromName("", "ENFFIJPJHKN")->GetStaticField(0xF470);
		}

		static ::RPG::Client::TextID* StaticGet_FLAIOKFKFEJ()
		{
			return (::RPG::Client::TextID*)UnitySDK::FromName("", "ENFFIJPJHKN")->GetStaticField(0xF480);
		}

		static ::RPG::Client::TextID* StaticGet_HCINJBEFNIA()
		{
			return (::RPG::Client::TextID*)UnitySDK::FromName("", "ENFFIJPJHKN")->GetStaticField(0xF490);
		}

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::KCFOLLEKPGG* a4, ::LAEINKGACID* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::KCFOLLEKPGG*, ::LAEINKGACID*))((::PBYTE)hIl2Cpp + ENFFIJPJHKN_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENFFIJPJHKN_CCTOR_OFFSET))();
		}

		::RPG::Client::BlindBox::Pool::BlindBoxPool* BPLPBPMEODA(::System::UInt32 a1, ::System::String* a2, ::System::Int64 a3, ::System::Int64 a4)
		{
			return ((::RPG::Client::BlindBox::Pool::BlindBoxPool*(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + ENFFIJPJHKN_BPLPBPMEODA_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::BEGLIKEGPOC* EHECHGPMPHM(::System::UInt32 a1)
		{
			return ((::BEGLIKEGPOC*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ENFFIJPJHKN_EHECHGPMPHM_OFFSET))(a1);
		}

	};
