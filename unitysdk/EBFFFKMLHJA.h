#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBFFFKMLHJA;
namespace RPG::Client::FateRin::Battle { class IFateRinBattleStatusViewModel; }

#define EBFFFKMLHJA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C3B8070)
#define EBFFFKMLHJA_COMPARE_OFFSET UNITYSDK_OFFSET(0x1C3B7EA0)
#define EBFFFKMLHJA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C3B8060)

inline static constexpr unsigned int EBFFFKMLHJA_TypeDefinitionIndex = 83767;

	class EBFFFKMLHJA : public ::System::Object
	{
	public:
		static ::EBFFFKMLHJA** StaticGet_FMJPMFEDIJL()
		{
			return (::EBFFFKMLHJA**)UnitySDK::FromName("", "EBFFFKMLHJA")->GetStaticField(0x5BB90);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBFFFKMLHJA_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBFFFKMLHJA_CCTOR_OFFSET))();
		}

		::System::Int32 Compare(::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel* a1, ::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*, ::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*))((::PBYTE)hIl2Cpp + EBFFFKMLHJA_COMPARE_OFFSET))(this, a1, a2);
		}

	};
