#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IGPLAOOIBCO;
namespace RPG::Client { class GridFightEquipItemData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IGPLAOOIBCO_CCTOR_OFFSET UNITYSDK_OFFSET(0x19F67000)
#define IGPLAOOIBCO_CTOR_OFFSET UNITYSDK_OFFSET(0x19F66EB0)
#define IGPLAOOIBCO_NLEDGAMJKMG_OFFSET UNITYSDK_OFFSET(0x19F66EC0)

inline static constexpr unsigned int IGPLAOOIBCO_TypeDefinitionIndex = 66568;

	class IGPLAOOIBCO : public ::System::Object
	{
	public:
		static ::IGPLAOOIBCO** StaticGet_FMJPMFEDIJL()
		{
			return (::IGPLAOOIBCO**)UnitySDK::FromName("", "IGPLAOOIBCO")->GetStaticField(0x13940);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGPLAOOIBCO_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGPLAOOIBCO_CCTOR_OFFSET))();
		}

		::System::Collections::Generic::List_1<::System::String*>* NLEDGAMJKMG(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + IGPLAOOIBCO_NLEDGAMJKMG_OFFSET))(this, a1);
		}

	};
