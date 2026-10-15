#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::Prop { class DuelChimeraProxy; }
namespace RPG::GameCore { class ChimeraDuelLeaveNode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PNKJDAJGIGJ_KEIGMGEPHBD_BIGPENMGPNP_OFFSET UNITYSDK_OFFSET(0xC33E3F0)
#define PNKJDAJGIGJ_KEIGMGEPHBD_CTOR_OFFSET UNITYSDK_OFFSET(0xC33CEE0)
#define PNKJDAJGIGJ_KEIGMGEPHBD_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xC33E710)
#define PNKJDAJGIGJ_KEIGMGEPHBD_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xC33E7B0)
#define PNKJDAJGIGJ_KEIGMGEPHBD_LDABNPIKOIO_OFFSET UNITYSDK_OFFSET(0xC33E730)
#define PNKJDAJGIGJ_KEIGMGEPHBD_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xC33E720)

inline static constexpr unsigned int PNKJDAJGIGJ_KEIGMGEPHBD_TypeDefinitionIndex = 78247;

	class PNKJDAJGIGJ_KEIGMGEPHBD : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* KHOPAIPODLM; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* AICOBMHCHNE; // 0x18
		::RPG::GameCore::ChimeraDuelLeaveNode* JKLBAAHFJDJ; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::Prop::DuelChimeraProxy*>* HGCNLFIMDKL; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* FEKKPJMOLDJ; // 0x30
		::System::Single FOMCKBAHCFM; // 0x38
		::System::Boolean _IsFinished_k__BackingField; // 0x3C
		::System::Void _ctor(::RPG::GameCore::ChimeraDuelLeaveNode* a1, ::System::Collections::Generic::List_1<::RPG::Client::Prop::DuelChimeraProxy*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraDuelLeaveNode*, ::System::Collections::Generic::List_1<::RPG::Client::Prop::DuelChimeraProxy*>*))((::PBYTE)hIl2Cpp + PNKJDAJGIGJ_KEIGMGEPHBD_CTOR_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 BIGPENMGPNP(::RPG::Client::Prop::DuelChimeraProxy* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::Client::Prop::DuelChimeraProxy*))((::PBYTE)hIl2Cpp + PNKJDAJGIGJ_KEIGMGEPHBD_BIGPENMGPNP_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNKJDAJGIGJ_KEIGMGEPHBD_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Void set_IsFinished(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PNKJDAJGIGJ_KEIGMGEPHBD_SET_ISFINISHED_OFFSET))(this, a1);
		}

		::System::Single LDABNPIKOIO(::RPG::Client::Prop::DuelChimeraProxy* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::Prop::DuelChimeraProxy*))((::PBYTE)hIl2Cpp + PNKJDAJGIGJ_KEIGMGEPHBD_LDABNPIKOIO_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PNKJDAJGIGJ_KEIGMGEPHBD_JLANKNHFKCN_OFFSET))(this, a1);
		}

	};
