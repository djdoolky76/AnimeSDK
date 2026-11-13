#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/IGKFNIEJGLM.h"
class LNGGBHCLAIG;
namespace RPG::Client { class LocalizedText; }
namespace UnityEngine { class Animation; }

#define EMCHOHGMEME_CTOR_OFFSET UNITYSDK_OFFSET(0x187CB260)
#define EMCHOHGMEME_GODAOOHPEHM_OFFSET UNITYSDK_OFFSET(0x187CB1A0)
#define EMCHOHGMEME_JANCLFNGMHJ_OFFSET UNITYSDK_OFFSET(0x187CB110)
#define EMCHOHGMEME_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0x187CB0C0)
#define EMCHOHGMEME__ONBIND_OFFSET UNITYSDK_OFFSET(0x187CAF30)
#define EMCHOHGMEME__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x187CB060)

inline static constexpr unsigned int EMCHOHGMEME_TypeDefinitionIndex = 74266;

	class EMCHOHGMEME : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::LocalizedText* GEPFFDDHPAI; // 0x60
		::UnityEngine::Animation* KCOAILOHDND; // 0x68
		::LNGGBHCLAIG* APPIHABBCGK; // 0x70
		::System::Nullable_1<::System::Int32> IKIIIHNECLG; // 0x78
		// static const ::System::String* ILKFAAGCMHG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMCHOHGMEME_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMCHOHGMEME__ONBIND_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + EMCHOHGMEME__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void LJBCDJNNBJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMCHOHGMEME_LJBCDJNNBJH_OFFSET))(this);
		}

		::System::Void GODAOOHPEHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMCHOHGMEME_GODAOOHPEHM_OFFSET))(this);
		}

		::System::Void JANCLFNGMHJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMCHOHGMEME_JANCLFNGMHJ_OFFSET))(this);
		}

	};
