#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GIOEJLBCJIE;
namespace RPG::Client::Prop { class ChimeraEvaluationSlotConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define OIOBCPKMFAK_AJCFBEEKBLC_OFFSET UNITYSDK_OFFSET(0xBEA3000)
#define OIOBCPKMFAK_BDKHLAJBBOI_OFFSET UNITYSDK_OFFSET(0xBEA3160)
#define OIOBCPKMFAK_CTOR_OFFSET UNITYSDK_OFFSET(0xBEA2A30)
#define OIOBCPKMFAK_HFGFGHJLKPE_OFFSET UNITYSDK_OFFSET(0xBEA2EA0)
#define OIOBCPKMFAK_JJCMLFADNMA_OFFSET UNITYSDK_OFFSET(0xBEA2DA0)
#define OIOBCPKMFAK_MKFALKGJGFC_OFFSET UNITYSDK_OFFSET(0xBEA2A40)
#define OIOBCPKMFAK_PAFCMAMJENB_OFFSET UNITYSDK_OFFSET(0xBEA3280)
#define OIOBCPKMFAK_PEMLPLGBPCL_OFFSET UNITYSDK_OFFSET(0xBEA2CA0)

inline static constexpr unsigned int OIOBCPKMFAK_TypeDefinitionIndex = 78448;

	class OIOBCPKMFAK : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::GIOEJLBCJIE*>* FOIDAODJFKF; // 0x10
		::System::Void _ctor(::UnityEngine::Transform* a1, ::System::Collections::Generic::List_1<::RPG::Client::Prop::ChimeraEvaluationSlotConfig*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Collections::Generic::List_1<::RPG::Client::Prop::ChimeraEvaluationSlotConfig*>*))((::PBYTE)hIl2Cpp + OIOBCPKMFAK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void PEMLPLGBPCL(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + OIOBCPKMFAK_PEMLPLGBPCL_OFFSET))(this, a1);
		}

		::System::Void JJCMLFADNMA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIOBCPKMFAK_JJCMLFADNMA_OFFSET))(this);
		}

		::System::Void HFGFGHJLKPE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OIOBCPKMFAK_HFGFGHJLKPE_OFFSET))(this, a1);
		}

		::System::Void AJCFBEEKBLC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OIOBCPKMFAK_AJCFBEEKBLC_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* BDKHLAJBBOI(::System::UInt32 a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OIOBCPKMFAK_BDKHLAJBBOI_OFFSET))(this, a1);
		}

		::System::Void PAFCMAMJENB(::System::Collections::Generic::List_1<::RPG::Client::Prop::ChimeraEvaluationSlotConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Prop::ChimeraEvaluationSlotConfig*>*))((::PBYTE)hIl2Cpp + OIOBCPKMFAK_PAFCMAMJENB_OFFSET))(this, a1);
		}

		::System::Void MKFALKGJGFC(::UnityEngine::Transform* a1, ::System::Collections::Generic::List_1<::RPG::Client::Prop::ChimeraEvaluationSlotConfig*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Collections::Generic::List_1<::RPG::Client::Prop::ChimeraEvaluationSlotConfig*>*))((::PBYTE)hIl2Cpp + OIOBCPKMFAK_MKFALKGJGFC_OFFSET))(this, a1, a2);
		}

	};
