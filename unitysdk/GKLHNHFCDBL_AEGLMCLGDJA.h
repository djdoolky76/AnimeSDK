#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }

#define GKLHNHFCDBL_AEGLMCLGDJA_CTOR_OFFSET UNITYSDK_OFFSET(0x15AA14A0)

	class GKLHNHFCDBL_AEGLMCLGDJA : public ::System::Object
	{
	public:
		::System::String* BuildRefID; // 0x10
		::Il2CppArray<::System::UInt32>* OptionalFormulaIDs; // 0x18
		::System::String* Language; // 0x20
		::Il2CppArray<::System::UInt32>* EssentialFormulaIDs; // 0x28
		::System::String* Title; // 0x30
		::Il2CppArray<::System::UInt32>* EssentialHexMiracleIDs; // 0x38
		::Il2CppArray<::System::UInt32>* OptionalHexMiracleIDs; // 0x40
		::System::String* Author; // 0x48
		::Il2CppArray<::Il2CppArray<::System::Object*>*>* Teams; // 0x50
		::System::Double WeightForSort; // 0x58
		::System::UInt32 GameVersion; // 0x60
		::System::Byte _padding0[0x4];
		::System::UInt64 AppliedCountForSort; // 0x68
		::System::UInt64 LikeCountForSort; // 0x70
		::System::UInt64 FavoriteCountForSort; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKLHNHFCDBL_AEGLMCLGDJA_CTOR_OFFSET))(this);
		}

	};
