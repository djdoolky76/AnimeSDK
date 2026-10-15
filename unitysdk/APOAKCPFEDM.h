#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace System { class Action; }

#define APOAKCPFEDM_CTOR_OFFSET UNITYSDK_OFFSET(0x15BB38D0)
#define APOAKCPFEDM_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0x15BB4590)
#define APOAKCPFEDM_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x15BB4600)
#define APOAKCPFEDM_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x15BB3900)
#define APOAKCPFEDM_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x15BB4610)

inline static constexpr unsigned int APOAKCPFEDM_TypeDefinitionIndex = 78439;

	class APOAKCPFEDM : public ::System::Object
	{
	public:
		::System::Action* MECKBKLEHAN; // 0x10
		::RPG::Client::Prop::ChimeraBattlePuzzleBoard* NHNHKBJJKPP; // 0x18
		::System::Int32 KFCHGADJONG; // 0x20
		::System::Single MFLNKDOADDG; // 0x24
		::System::Single FOMCKBAHCFM; // 0x28
		::System::Int32 CPLLDEHNOHK; // 0x2C
		::System::Boolean _IsFinished_k__BackingField; // 0x30
		::System::Void _ctor(::System::Single a1, ::System::Int32 a2, ::System::Int32 a3, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a4, ::System::Action* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Int32, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::Action*))((::PBYTE)hIl2Cpp + APOAKCPFEDM_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + APOAKCPFEDM_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void DFFCHNLKELO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APOAKCPFEDM_DFFCHNLKELO_OFFSET))(this);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + APOAKCPFEDM_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Void set_IsFinished(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + APOAKCPFEDM_SET_ISFINISHED_OFFSET))(this, a1);
		}

	};
