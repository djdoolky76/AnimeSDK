#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class DLECIKAMKEG;
namespace RPG::Client::Prop { class DuelChimeraProxy; }
namespace RPG::GameCore { class ChimeraDuelLeaveNode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PNKJDAJGIGJ_CAHAODODOLL_CTOR_OFFSET UNITYSDK_OFFSET(0xC33D980)
#define PNKJDAJGIGJ_CAHAODODOLL_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xC33DBD0)
#define PNKJDAJGIGJ_CAHAODODOLL_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xC33DBF0)
#define PNKJDAJGIGJ_CAHAODODOLL_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xC33DBE0)

inline static constexpr unsigned int PNKJDAJGIGJ_CAHAODODOLL_TypeDefinitionIndex = 78248;

	class PNKJDAJGIGJ_CAHAODODOLL : public ::System::Object
	{
	public:
		::DLECIKAMKEG* EEFMDEHLLFI; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::Prop::DuelChimeraProxy*>* HGCNLFIMDKL; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* KHOPAIPODLM; // 0x20
		::RPG::GameCore::ChimeraDuelLeaveNode* JKLBAAHFJDJ; // 0x28
		::System::Boolean _IsFinished_k__BackingField; // 0x30
		::System::Byte _padding0[0x3];
		::System::Single FOMCKBAHCFM; // 0x34
		::System::Void _ctor(::RPG::GameCore::ChimeraDuelLeaveNode* a1, ::System::Collections::Generic::List_1<::RPG::Client::Prop::DuelChimeraProxy*>* a2, ::DLECIKAMKEG* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraDuelLeaveNode*, ::System::Collections::Generic::List_1<::RPG::Client::Prop::DuelChimeraProxy*>*, ::DLECIKAMKEG*))((::PBYTE)hIl2Cpp + PNKJDAJGIGJ_CAHAODODOLL_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNKJDAJGIGJ_CAHAODODOLL_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Void set_IsFinished(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PNKJDAJGIGJ_CAHAODODOLL_SET_ISFINISHED_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PNKJDAJGIGJ_CAHAODODOLL_JLANKNHFKCN_OFFSET))(this, a1);
		}

	};
