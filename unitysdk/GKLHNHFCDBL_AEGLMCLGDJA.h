#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }

#define GKLHNHFCDBL_AEGLMCLGDJA_CTOR_OFFSET UNITYSDK_OFFSET(0x15A95930)

inline static constexpr unsigned int GKLHNHFCDBL_AEGLMCLGDJA_TypeDefinitionIndex = 67781;

	class GKLHNHFCDBL_AEGLMCLGDJA : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* EssentialHexMiracleIDs; // 0x10
		::System::String* Title; // 0x18
		::System::String* Language; // 0x20
		::Il2CppArray<::Il2CppArray<::System::Object*>*>* Teams; // 0x28
		::Il2CppArray<::System::UInt32>* OptionalHexMiracleIDs; // 0x30
		::Il2CppArray<::System::UInt32>* OptionalFormulaIDs; // 0x38
		::System::String* Author; // 0x40
		::System::String* BuildRefID; // 0x48
		::Il2CppArray<::System::UInt32>* EssentialFormulaIDs; // 0x50
		::System::UInt64 LikeCountForSort; // 0x58
		::System::UInt32 GameVersion; // 0x60
		::System::Byte _padding0[0x4];
		::System::UInt64 FavoriteCountForSort; // 0x68
		::System::Double WeightForSort; // 0x70
		::System::UInt64 AppliedCountForSort; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKLHNHFCDBL_AEGLMCLGDJA_CTOR_OFFSET))(this);
		}

	};
