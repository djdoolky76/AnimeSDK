#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class BCLNOMLHKEI;
namespace RPG::Client { class RPGAnimationEvent; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }

#define FJJDEHFCIIL_BCBKCCIEEGK_OFFSET UNITYSDK_OFFSET(0x157D2240)
#define FJJDEHFCIIL_CTOR_OFFSET UNITYSDK_OFFSET(0x157D23A0)
#define FJJDEHFCIIL_HDPGCOKHMDC_OFFSET UNITYSDK_OFFSET(0x157D2290)
#define FJJDEHFCIIL__ONBIND_OFFSET UNITYSDK_OFFSET(0x157D20B0)

inline static constexpr unsigned int FJJDEHFCIIL_TypeDefinitionIndex = 71447;

	class FJJDEHFCIIL : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x60
		::RPG::Client::RPGAnimationEvent* MEDGLNFKGDC; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJJDEHFCIIL_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJJDEHFCIIL__ONBIND_OFFSET))(this);
		}

		::System::Void BCBKCCIEEGK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJJDEHFCIIL_BCBKCCIEEGK_OFFSET))(this);
		}

		::System::Void HDPGCOKHMDC(::System::Collections::Generic::List_1<::BCLNOMLHKEI*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::BCLNOMLHKEI*>*))((::PBYTE)hIl2Cpp + FJJDEHFCIIL_HDPGCOKHMDC_OFFSET))(this, a1);
		}

	};
