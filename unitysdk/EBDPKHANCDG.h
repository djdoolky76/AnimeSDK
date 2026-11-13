#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EBDPKHANCDG_BIOBBNGDGDF_OFFSET UNITYSDK_OFFSET(0x1C3B6370)
#define EBDPKHANCDG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C3B60F0)
#define EBDPKHANCDG_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0x1C3B6830)
#define EBDPKHANCDG_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x1C3B6AD0)
#define EBDPKHANCDG_LMGLHEKNHKD_OFFSET UNITYSDK_OFFSET(0x1C3B6930)
#define EBDPKHANCDG_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1C3B6530)
#define EBDPKHANCDG_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x1C3B6AE0)

inline static constexpr unsigned int EBDPKHANCDG_TypeDefinitionIndex = 81178;

	class EBDPKHANCDG : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* ECJADDMLLPJ; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* PNHFIJMPEKH; // 0x18
		::RPG::Client::Prop::ChimeraBattlePuzzleBoard* NHNHKBJJKPP; // 0x20
		::System::Action* MECKBKLEHAN; // 0x28
		::System::Single MFLNKDOADDG; // 0x30
		::System::Boolean _IsFinished_k__BackingField; // 0x34
		::System::Byte _padding0[0x3];
		::System::Single FOMCKBAHCFM; // 0x38
		::System::Void _ctor(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1, ::System::Action* a2, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::System::Action*, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::Single))((::PBYTE)hIl2Cpp + EBDPKHANCDG_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EBDPKHANCDG_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void DFFCHNLKELO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBDPKHANCDG_DFFCHNLKELO_OFFSET))(this);
		}

		::System::Void BIOBBNGDGDF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBDPKHANCDG_BIOBBNGDGDF_OFFSET))(this);
		}

		::System::Void LMGLHEKNHKD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBDPKHANCDG_LMGLHEKNHKD_OFFSET))(this);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EBDPKHANCDG_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Void set_IsFinished(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EBDPKHANCDG_SET_ISFINISHED_OFFSET))(this, a1);
		}

	};
