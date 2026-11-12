#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }

#define GKLHNHFCDBL_AEGLMCLGDJA_CTOR_OFFSET UNITYSDK_OFFSET(0x169DE1B0)

inline static constexpr unsigned int GKLHNHFCDBL_AEGLMCLGDJA_TypeDefinitionIndex = 69726;

	class GKLHNHFCDBL_AEGLMCLGDJA : public ::System::Object
	{
	public:
		::System::String* Author; // 0x10
		::Il2CppArray<::System::UInt32>* EssentialHexMiracleIDs; // 0x18
		::System::String* BuildRefID; // 0x20
		::System::String* Title; // 0x28
		::Il2CppArray<::System::UInt32>* OptionalFormulaIDs; // 0x30
		::System::String* Language; // 0x38
		::Il2CppArray<::Il2CppArray<::System::Object*>*>* Teams; // 0x40
		::Il2CppArray<::System::UInt32>* OptionalHexMiracleIDs; // 0x48
		::Il2CppArray<::System::UInt32>* EssentialFormulaIDs; // 0x50
		::System::UInt32 GameVersion; // 0x58
		::System::Byte _padding0[0x4];
		::System::UInt64 LikeCountForSort; // 0x60
		::System::UInt64 FavoriteCountForSort; // 0x68
		::System::Double WeightForSort; // 0x70
		::System::UInt64 AppliedCountForSort; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKLHNHFCDBL_AEGLMCLGDJA_CTOR_OFFSET))(this);
		}

	};
