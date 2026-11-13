#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EIAFNKBEHBA_EADMIIGLDHK;
class EOGPBKGBNHG;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class String; }

#define EOGPBKGBNHG_AKPKOGDGKEN_OFFSET UNITYSDK_OFFSET(0x16B230D0)
#define EOGPBKGBNHG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x16B22D10)
#define EOGPBKGBNHG_CBFBHLACLPC_OFFSET UNITYSDK_OFFSET(0x16B22DA0)
#define EOGPBKGBNHG_CTOR_OFFSET UNITYSDK_OFFSET(0x16B22D90)
#define EOGPBKGBNHG_EECBOHAFLAP_OFFSET UNITYSDK_OFFSET(0x16B23150)
#define EOGPBKGBNHG_GJADDMAOFHC_OFFSET UNITYSDK_OFFSET(0x16B22FA0)
#define EOGPBKGBNHG_HNPOGLCAHPK_OFFSET UNITYSDK_OFFSET(0x16B22ED0)
#define EOGPBKGBNHG_IAMCNOAAALI_OFFSET UNITYSDK_OFFSET(0x16B23020)
#define EOGPBKGBNHG_LHGFDOFLLBM_OFFSET UNITYSDK_OFFSET(0x16B22E70)
#define EOGPBKGBNHG_MBMFEMBBCJE_OFFSET UNITYSDK_OFFSET(0x16B22FE0)
#define EOGPBKGBNHG_NHOCLKNNDIJ_OFFSET UNITYSDK_OFFSET(0x16B23110)
#define EOGPBKGBNHG_OHHJCALLOEA_OFFSET UNITYSDK_OFFSET(0x16B23090)

inline static constexpr unsigned int EOGPBKGBNHG_TypeDefinitionIndex = 74413;

	class EOGPBKGBNHG : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* DABEHBNAKIM; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOGPBKGBNHG_CTOR_OFFSET))(this);
		}

		static ::EOGPBKGBNHG* BPLPBPMEODA(::RPG::GameCore::GameEntity* a1)
		{
			return ((::EOGPBKGBNHG*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EOGPBKGBNHG_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Boolean CBFBHLACLPC(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EOGPBKGBNHG_CBFBHLACLPC_OFFSET))(this, a1);
		}

		::System::Boolean LHGFDOFLLBM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EOGPBKGBNHG_LHGFDOFLLBM_OFFSET))(this);
		}

		::EIAFNKBEHBA_EADMIIGLDHK* HNPOGLCAHPK()
		{
			return ((::EIAFNKBEHBA_EADMIIGLDHK*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOGPBKGBNHG_HNPOGLCAHPK_OFFSET))(this);
		}

		::System::Boolean GJADDMAOFHC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EOGPBKGBNHG_GJADDMAOFHC_OFFSET))(this);
		}

		::System::Boolean MBMFEMBBCJE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EOGPBKGBNHG_MBMFEMBBCJE_OFFSET))(this);
		}

		::System::String* IAMCNOAAALI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOGPBKGBNHG_IAMCNOAAALI_OFFSET))(this);
		}

		::System::String* OHHJCALLOEA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOGPBKGBNHG_OHHJCALLOEA_OFFSET))(this);
		}

		::System::String* AKPKOGDGKEN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOGPBKGBNHG_AKPKOGDGKEN_OFFSET))(this);
		}

		::System::Int32 NHOCLKNNDIJ()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOGPBKGBNHG_NHOCLKNNDIJ_OFFSET))(this);
		}

		::RPG::GameCore::TurnBasedModifierInstance* EECBOHAFLAP()
		{
			return ((::RPG::GameCore::TurnBasedModifierInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOGPBKGBNHG_EECBOHAFLAP_OFFSET))(this);
		}

	};
