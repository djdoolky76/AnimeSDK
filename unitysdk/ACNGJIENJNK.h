#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ACNGJIENJNK;
class GDBLNLCEGHC;
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ACNGJIENJNK_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB126AD0)
#define ACNGJIENJNK_CTOR_OFFSET UNITYSDK_OFFSET(0xB126B50)
#define ACNGJIENJNK_GET_BUFFVIEWDATAS_OFFSET UNITYSDK_OFFSET(0xB126D70)
#define ACNGJIENJNK_SET_BUFFVIEWDATAS_OFFSET UNITYSDK_OFFSET(0xB126D80)

inline static constexpr unsigned int ACNGJIENJNK_TypeDefinitionIndex = 71514;

	class ACNGJIENJNK : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::GDBLNLCEGHC*>* _BuffViewDatas_k__BackingField; // 0x10
		::System::Void _ctor(::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>*))((::PBYTE)hIl2Cpp + ACNGJIENJNK_CTOR_OFFSET))(this, a1);
		}

		static ::ACNGJIENJNK* BPLPBPMEODA(::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* a1)
		{
			return ((::ACNGJIENJNK*(*)(::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>*))((::PBYTE)hIl2Cpp + ACNGJIENJNK_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Collections::Generic::List_1<::GDBLNLCEGHC*>* get_BuffViewDatas()
		{
			return ((::System::Collections::Generic::List_1<::GDBLNLCEGHC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACNGJIENJNK_GET_BUFFVIEWDATAS_OFFSET))(this);
		}

		::System::Void set_BuffViewDatas(::System::Collections::Generic::List_1<::GDBLNLCEGHC*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::GDBLNLCEGHC*>*))((::PBYTE)hIl2Cpp + ACNGJIENJNK_SET_BUFFVIEWDATAS_OFFSET))(this, a1);
		}

	};
