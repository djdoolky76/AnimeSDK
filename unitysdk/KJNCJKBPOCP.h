#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/AlchemyChangeHeightRetCode.h"
#include "unitysdk/RPG/Client/Prop/AlchemyLogicType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Prop { class AlchemyItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KJNCJKBPOCP_BHFPNFDCFML_OFFSET UNITYSDK_OFFSET(0xB45CBB0)
#define KJNCJKBPOCP_CTOR_OFFSET UNITYSDK_OFFSET(0xB45C8F0)
#define KJNCJKBPOCP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB45C8A0)
#define KJNCJKBPOCP_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xB45C970)
#define KJNCJKBPOCP_LMKANOGIGIC_OFFSET UNITYSDK_OFFSET(0xB45CA90)
#define KJNCJKBPOCP_MOOHPGOJJNA_OFFSET UNITYSDK_OFFSET(0xB45CCE0)
#define KJNCJKBPOCP_PKJHOCOCGPO_OFFSET UNITYSDK_OFFSET(0xB45CD50)

inline static constexpr unsigned int KJNCJKBPOCP_TypeDefinitionIndex = 78205;

	class KJNCJKBPOCP : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* DENCGKDEAHM; // 0x10
		::Il2CppArray<::RPG::Client::Prop::AlchemyLogicType>* EANPEMBGMNC; // 0x18
		::Il2CppArray<::System::Int32>* ICGHDHFLAKH; // 0x20
		::System::Void _ctor(::System::Collections::Generic::List_1<::RPG::Client::Prop::AlchemyItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Prop::AlchemyItem*>*))((::PBYTE)hIl2Cpp + KJNCJKBPOCP_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJNCJKBPOCP_DISPOSE_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB(::System::Collections::Generic::List_1<::RPG::Client::Prop::AlchemyItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Prop::AlchemyItem*>*))((::PBYTE)hIl2Cpp + KJNCJKBPOCP_KHGIKBFDLFB_OFFSET))(this, a1);
		}

		::RPG::Client::Prop::AlchemyChangeHeightRetCode LMKANOGIGIC(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::Prop::AlchemyChangeHeightRetCode(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KJNCJKBPOCP_LMKANOGIGIC_OFFSET))(this, a1, a2);
		}

		::System::Void BHFPNFDCFML(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KJNCJKBPOCP_BHFPNFDCFML_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Prop::AlchemyLogicType MOOHPGOJJNA(::System::Int32 a1)
		{
			return ((::RPG::Client::Prop::AlchemyLogicType(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KJNCJKBPOCP_MOOHPGOJJNA_OFFSET))(this, a1);
		}

		::System::Int32 PKJHOCOCGPO(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KJNCJKBPOCP_PKJHOCOCGPO_OFFSET))(this, a1);
		}

	};
