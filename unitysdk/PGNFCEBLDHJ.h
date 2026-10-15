#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LogTag.h"
#include "unitysdk/System/Object.h"
class POEELJNJAAO;
namespace System { class Exception; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PGNFCEBLDHJ_AEOJHLNBLDO_OFFSET UNITYSDK_OFFSET(0xC22A200)
#define PGNFCEBLDHJ_AHGECLOADDM_OFFSET UNITYSDK_OFFSET(0xC22A0B0)
#define PGNFCEBLDHJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC22A030)
#define PGNFCEBLDHJ_DAINANEFMCH_OFFSET UNITYSDK_OFFSET(0xC22A4A0)
#define PGNFCEBLDHJ_GFEDFLDPPEC_OFFSET UNITYSDK_OFFSET(0xC22A140)
#define PGNFCEBLDHJ_IFCJLAGMDAI_OFFSET UNITYSDK_OFFSET(0xC22A100)

	class PGNFCEBLDHJ : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::POEELJNJAAO*>* NBLMOBNAOJE; // 0x10
		::RPG::LogTag IOOEMMBEKPM; // 0x18
		::System::Void _ctor(::RPG::LogTag a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::LogTag))((::PBYTE)hIl2Cpp + PGNFCEBLDHJ_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 AHGECLOADDM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGNFCEBLDHJ_AHGECLOADDM_OFFSET))(this);
		}

		::RPG::LogTag IFCJLAGMDAI()
		{
			return ((::RPG::LogTag(*)(::PVOID))((::PBYTE)hIl2Cpp + PGNFCEBLDHJ_IFCJLAGMDAI_OFFSET))(this);
		}

		::System::Boolean GFEDFLDPPEC(::System::UInt32 a1, ::POEELJNJAAO* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::POEELJNJAAO*))((::PBYTE)hIl2Cpp + PGNFCEBLDHJ_GFEDFLDPPEC_OFFSET))(this, a1, a2);
		}

		::System::Boolean AEOJHLNBLDO(::System::UInt32 a1, ::System::UInt32 a2, ::System::Object* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Object*))((::PBYTE)hIl2Cpp + PGNFCEBLDHJ_AEOJHLNBLDO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DAINANEFMCH(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + PGNFCEBLDHJ_DAINANEFMCH_OFFSET))(this, a1);
		}

	};
