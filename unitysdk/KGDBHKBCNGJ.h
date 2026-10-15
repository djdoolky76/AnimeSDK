#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace RPG::Client { class MonoInControlTip; }
namespace System { class Object; }
namespace UnityEngine::UI { class Button; }

#define KGDBHKBCNGJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB3DD5A0)
#define KGDBHKBCNGJ_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0xB3DD1D0)
#define KGDBHKBCNGJ_EDFDIAKEGIK_OFFSET UNITYSDK_OFFSET(0xB3DD3D0)
#define KGDBHKBCNGJ_MBMEKCOIPOI_OFFSET UNITYSDK_OFFSET(0xB3DD310)
#define KGDBHKBCNGJ_MGGKNIEMCHM_OFFSET UNITYSDK_OFFSET(0xB3DD4B0)
#define KGDBHKBCNGJ_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xB3DD270)
#define KGDBHKBCNGJ__ONBIND_OFFSET UNITYSDK_OFFSET(0xB3DD150)
#define KGDBHKBCNGJ__ONTICK_OFFSET UNITYSDK_OFFSET(0xB3DD2B0)

inline static constexpr unsigned int KGDBHKBCNGJ_TypeDefinitionIndex = 71484;

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

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDBHKBCNGJ_NIJJPBOIGBI_OFFSET))(this);
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
