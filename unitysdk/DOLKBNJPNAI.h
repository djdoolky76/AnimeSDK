#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class ChenLingFesItemConfig; }
namespace RPG::GameCore { class ChenLingFesPosition; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DOLKBNJPNAI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB33A90)

inline static constexpr unsigned int DOLKBNJPNAI_TypeDefinitionIndex = 44792;

	class DOLKBNJPNAI : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* CHFEJBFFPLD; // 0x10
		::RPG::GameCore::ChenLingFesPosition* FOCNBOANONM; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* OJFFPIIKPDJ; // 0x20
		::System::Collections::Generic::List_1<::System::Int32>* KEMEPBIGIAE; // 0x28
		::RPG::GameCore::ChenLingFesItemConfig* EABKOHGCHFP; // 0x30
		::System::Collections::Generic::List_1<::System::Int32>* KNNMFKMCKBP; // 0x38
		::System::Collections::Generic::List_1<::System::Int32>* AJPFKOLEMOL; // 0x40
		::System::Collections::Generic::List_1<::System::Int32>* AACDGMCNIDL; // 0x48
		::System::Single EEGAODGBDJF; // 0x50
		::System::UInt32 PHFMCACHFIJ; // 0x54
		::System::Single IKFHADBJEOC; // 0x58
		::System::Single ICONGDFLKIP; // 0x5C
		::System::Single PLFMKDOCPLP; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOLKBNJPNAI_CTOR_OFFSET))(this);
		}

	};
