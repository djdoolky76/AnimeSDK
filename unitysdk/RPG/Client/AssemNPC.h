#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class AssemNPC; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ASSEMNPC_CTOR_OFFSET UNITYSDK_OFFSET(0xC69A6B0)
#define RPG_CLIENT_ASSEMNPC_GMBIJPEBGKB_OFFSET UNITYSDK_OFFSET(0xC69A2B0)
#define RPG_CLIENT_ASSEMNPC_LOKHNOJCFIJ_OFFSET UNITYSDK_OFFSET(0xC69A470)
#define RPG_CLIENT_ASSEMNPC_NLMEOBGFJBM_OFFSET UNITYSDK_OFFSET(0xC69A610)
#define RPG_CLIENT_ASSEMNPC_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0xC69A800)
#define RPG_CLIENT_ASSEMNPC_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0xC69A7C0)
#define RPG_CLIENT_ASSEMNPC_TOSTRING_OFFSET UNITYSDK_OFFSET(0xC69A6F0)

namespace RPG::Client
{
	class AssemNPC : public ::System::Object
	{
	public:
		::System::String* AssemNPCID; // 0x10
		::System::String* WorldOverride; // 0x18
		::System::String* Face; // 0x20
		::System::String* FaceMat; // 0x28
		::System::String* Body; // 0x30
		::System::String* BodyMat; // 0x38
		::System::String* Hair; // 0x40
		::System::String* HairMat; // 0x48
		::System::String* Item; // 0x50
		::System::String* ItemMat; // 0x58
		::System::Collections::Generic::List_1<::System::String*>* MatVariantKeys; // 0x60
		::System::String* AnimatorPath; // 0x68
		::System::Int32 BodySizeInt; // 0x70
		::System::Byte _padding0[0x4];
		::System::String* FreeStyleCharacterID; // 0x78
		::System::String* FreeStyleCharacterConfigPath; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSEMNPC_CTOR_OFFSET))(this);
		}

		::System::Boolean GMBIJPEBGKB(::RPG::Client::AssemNPC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AssemNPC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSEMNPC_GMBIJPEBGKB_OFFSET))(this, a1);
		}

		static ::System::Boolean LOKHNOJCFIJ(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Collections::Generic::List_1<::System::String*>* a2)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSEMNPC_LOKHNOJCFIJ_OFFSET))(a1, a2);
		}

		::RPG::Client::AssemNPC* NLMEOBGFJBM()
		{
			return ((::RPG::Client::AssemNPC*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSEMNPC_NLMEOBGFJBM_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSEMNPC_TOSTRING_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSEMNPC_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSEMNPC_ONAFTERDESERIALIZE_OFFSET))(this);
		}

	};
}
