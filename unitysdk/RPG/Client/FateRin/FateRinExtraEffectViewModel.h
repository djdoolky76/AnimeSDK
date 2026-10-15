#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
#include "unitysdk/RPG/Client/TextID.h"
class KJCEAHCIHIG;
namespace System { class String; }

#define RPG_CLIENT_FATERIN_FATERINEXTRAEFFECTVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xCF99C30)
#define RPG_CLIENT_FATERIN_FATERINEXTRAEFFECTVIEWMODEL_GET_DESC_OFFSET UNITYSDK_OFFSET(0xCF99D10)
#define RPG_CLIENT_FATERIN_FATERINEXTRAEFFECTVIEWMODEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0xCF99CB0)

namespace RPG::Client::FateRin
{
	inline static constexpr unsigned int FateRinExtraEffectViewModel_TypeDefinitionIndex = 80626;

	class FateRinExtraEffectViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::KJCEAHCIHIG* _Model; // 0x20
		::System::Void _ctor(::KJCEAHCIHIG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJCEAHCIHIG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINEXTRAEFFECTVIEWMODEL_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINEXTRAEFFECTVIEWMODEL_GET_NAME_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINEXTRAEFFECTVIEWMODEL_GET_DESC_OFFSET))(this);
		}

	};
}
