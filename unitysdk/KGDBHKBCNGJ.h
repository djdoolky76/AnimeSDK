#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace RPG::Client { class MonoInControlTip; }
namespace System { class Object; }
namespace UnityEngine::UI { class Button; }

#define KGDBHKBCNGJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBC6E100)
#define KGDBHKBCNGJ_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0xBC6DD30)
#define KGDBHKBCNGJ_EDFDIAKEGIK_OFFSET UNITYSDK_OFFSET(0xBC6DF30)
#define KGDBHKBCNGJ_MBMEKCOIPOI_OFFSET UNITYSDK_OFFSET(0xBC6DE70)
#define KGDBHKBCNGJ_MGGKNIEMCHM_OFFSET UNITYSDK_OFFSET(0xBC6E010)
#define KGDBHKBCNGJ__INITVARONCE_OFFSET UNITYSDK_OFFSET(0xBC6DDD0)
#define KGDBHKBCNGJ__ONBIND_OFFSET UNITYSDK_OFFSET(0xBC6DC00)
#define KGDBHKBCNGJ__ONTICK_OFFSET UNITYSDK_OFFSET(0xBC6DE10)

inline static constexpr unsigned int KGDBHKBCNGJ_TypeDefinitionIndex = 73469;

	class KGDBHKBCNGJ : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::MonoInControlTip* OOBBOFLHLDH; // 0x60
		::UnityEngine::UI::Button* KJIOINOOIHP; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDBHKBCNGJ_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDBHKBCNGJ__ONBIND_OFFSET))(this);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDBHKBCNGJ_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDBHKBCNGJ__INITVARONCE_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KGDBHKBCNGJ__ONTICK_OFFSET))(this, a1);
		}

		::System::Void EDFDIAKEGIK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KGDBHKBCNGJ_EDFDIAKEGIK_OFFSET))(this, a1);
		}

		::System::Void MBMEKCOIPOI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDBHKBCNGJ_MBMEKCOIPOI_OFFSET))(this);
		}

		::System::Void MGGKNIEMCHM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KGDBHKBCNGJ_MGGKNIEMCHM_OFFSET))(this, a1);
		}

	};
