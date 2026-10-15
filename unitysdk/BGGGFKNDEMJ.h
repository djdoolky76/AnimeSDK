#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/TeamTowersCore/ModifyType.h"
#include "unitysdk/RPG/Client/LittleGameShare/TeamTowersCore/TeamTowersStatType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
class FKIAHEEJGKH;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }

#define BGGGFKNDEMJ_ABGJBFJCJPL_OFFSET UNITYSDK_OFFSET(0x1C5AAF10)
#define BGGGFKNDEMJ_ACDDHAFNNMF_OFFSET UNITYSDK_OFFSET(0x1C5BEE00)
#define BGGGFKNDEMJ_AGJBOFHGPDC_OFFSET UNITYSDK_OFFSET(0x1C5BECC0)
#define BGGGFKNDEMJ_BABIACIBEHA_OFFSET UNITYSDK_OFFSET(0x1C5BED80)
#define BGGGFKNDEMJ_BNLFIDPDBNC_OFFSET UNITYSDK_OFFSET(0x1C5AE080)
#define BGGGFKNDEMJ_CNDCBBJNFGJ_OFFSET UNITYSDK_OFFSET(0x1C5AE160)
#define BGGGFKNDEMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5BE320)
#define BGGGFKNDEMJ_DEBBAOLDJLM_OFFSET UNITYSDK_OFFSET(0x1C5BEA20)
#define BGGGFKNDEMJ_FNCGIJOMOMO_OFFSET UNITYSDK_OFFSET(0x1C5BE5F0)
#define BGGGFKNDEMJ_GAJENDFMONO_OFFSET UNITYSDK_OFFSET(0x1C5BE810)
#define BGGGFKNDEMJ_GET_PLAYERUID_OFFSET UNITYSDK_OFFSET(0x1C5BF1F0)
#define BGGGFKNDEMJ_HJIAPEGGBNP_OFFSET UNITYSDK_OFFSET(0x1C5BEB20)
#define BGGGFKNDEMJ_LHPAEHNOBCE_OFFSET UNITYSDK_OFFSET(0x1C5BEBF0)
#define BGGGFKNDEMJ_SET_PLAYERUID_OFFSET UNITYSDK_OFFSET(0x1C5BF200)

	class BGGGFKNDEMJ : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple, ::System::Int32>* FGFFMLILPLP; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple, ::System::Int32>* MCMPOKENOJC; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* COIAEELHCOJ; // 0x20
		::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersStatType, ::System::Int32>* DPHIHLJEBKF; // 0x28
		::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersStatType, ::System::Object*>* EIKFHBIHLON; // 0x30
		::System::UInt32 _PlayerUID_k__BackingField; // 0x38
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BGGGFKNDEMJ_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 BNLFIDPDBNC(::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersStatType a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersStatType))((::PBYTE)hIl2Cpp + BGGGFKNDEMJ_BNLFIDPDBNC_OFFSET))(this, a1);
		}

		::System::Boolean ABGJBFJCJPL(::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersStatType a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersStatType, ::System::Int32))((::PBYTE)hIl2Cpp + BGGGFKNDEMJ_ABGJBFJCJPL_OFFSET))(this, a1, a2);
		}

		::System::Void FNCGIJOMOMO(::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersStatType a1, ::RPG::Client::LittleGameShare::TeamTowersCore::ModifyType a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersStatType, ::RPG::Client::LittleGameShare::TeamTowersCore::ModifyType, ::System::Int32))((::PBYTE)hIl2Cpp + BGGGFKNDEMJ_FNCGIJOMOMO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GAJENDFMONO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BGGGFKNDEMJ_GAJENDFMONO_OFFSET))(this, a1);
		}

		::System::Void DEBBAOLDJLM(::System::UInt32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BGGGFKNDEMJ_DEBBAOLDJLM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void HJIAPEGGBNP(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BGGGFKNDEMJ_HJIAPEGGBNP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LHPAEHNOBCE(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BGGGFKNDEMJ_LHPAEHNOBCE_OFFSET))(this, a1);
		}

		::System::Void CNDCBBJNFGJ(::FKIAHEEJGKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKIAHEEJGKH*))((::PBYTE)hIl2Cpp + BGGGFKNDEMJ_CNDCBBJNFGJ_OFFSET))(this, a1);
		}

		::System::Int32 AGJBOFHGPDC(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BGGGFKNDEMJ_AGJBOFHGPDC_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::Int32>* BABIACIBEHA()
		{
			return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGGGFKNDEMJ_BABIACIBEHA_OFFSET))(this);
		}

		::System::String* ACDDHAFNNMF()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGGGFKNDEMJ_ACDDHAFNNMF_OFFSET))(this);
		}

		::System::UInt32 get_PlayerUID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGGGFKNDEMJ_GET_PLAYERUID_OFFSET))(this);
		}

		::System::Void set_PlayerUID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BGGGFKNDEMJ_SET_PLAYERUID_OFFSET))(this, a1);
		}

	};
