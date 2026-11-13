#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MBDKDGKIFFB.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class MDFIHKILAPL;
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define FDIJNCADAHJ_BKKIJJJOGBH_OFFSET UNITYSDK_OFFSET(0x1C035B80)
#define FDIJNCADAHJ_CFPOLHDHFIB_OFFSET UNITYSDK_OFFSET(0x1C035F60)
#define FDIJNCADAHJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C036440)
#define FDIJNCADAHJ_GNDFNHNEDAH_OFFSET UNITYSDK_OFFSET(0x1C0363B0)
#define FDIJNCADAHJ_HABFIFCKMKG_OFFSET UNITYSDK_OFFSET(0x1C035C60)
#define FDIJNCADAHJ_HOBKJMHIJHC_OFFSET UNITYSDK_OFFSET(0x1C035BF0)
#define FDIJNCADAHJ_JNALIOAGNFC_OFFSET UNITYSDK_OFFSET(0x1C036320)
#define FDIJNCADAHJ_KFMJPMPNBAP_OFFSET UNITYSDK_OFFSET(0x1C035E50)
#define FDIJNCADAHJ_LFPNIPDMOOM_OFFSET UNITYSDK_OFFSET(0x1C035B10)
#define FDIJNCADAHJ_MJAANHKEDFA_OFFSET UNITYSDK_OFFSET(0x1C036060)
#define FDIJNCADAHJ_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x1C035DC0)
#define FDIJNCADAHJ_NPJMIGLKIHF_OFFSET UNITYSDK_OFFSET(0x1C035CE0)
#define FDIJNCADAHJ__ONBIND_OFFSET UNITYSDK_OFFSET(0x1C035910)

inline static constexpr unsigned int FDIJNCADAHJ_TypeDefinitionIndex = 74309;

	class FDIJNCADAHJ : public ::MBDKDGKIFFB
	{
	public:
		::UnityEngine::UI::Text* GOGNOECLBFD; // 0x80
		::UnityEngine::GameObject* NENPNKMPAAC; // 0x88
		::UnityEngine::Animation* OGFNFANKEKD; // 0x90
		::RPG::Client::PrefabLoadMeta* OPJNPDLLGED; // 0x98
		::UnityEngine::UI::Image* AFJIGEDHIPO; // 0xA0
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::String* OOPEGOAHGDF; // 0x0
		// static const ::System::String* JMFOMPCOHFE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIJNCADAHJ_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIJNCADAHJ__ONBIND_OFFSET))(this);
		}

		::System::String* LFPNIPDMOOM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIJNCADAHJ_LFPNIPDMOOM_OFFSET))(this);
		}

		::System::String* BKKIJJJOGBH()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIJNCADAHJ_BKKIJJJOGBH_OFFSET))(this);
		}

		::System::String* HOBKJMHIJHC()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIJNCADAHJ_HOBKJMHIJHC_OFFSET))(this);
		}

		::System::Void HABFIFCKMKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIJNCADAHJ_HABFIFCKMKG_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::MDFIHKILAPL* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MDFIHKILAPL*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FDIJNCADAHJ_NKPPGDENJAE_OFFSET))(this, a1, a2);
		}

		::System::Void KFMJPMPNBAP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FDIJNCADAHJ_KFMJPMPNBAP_OFFSET))(this, a1);
		}

		::System::Void CFPOLHDHFIB(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + FDIJNCADAHJ_CFPOLHDHFIB_OFFSET))(this, a1);
		}

		::System::Void MJAANHKEDFA(::MDFIHKILAPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MDFIHKILAPL*))((::PBYTE)hIl2Cpp + FDIJNCADAHJ_MJAANHKEDFA_OFFSET))(this, a1);
		}

		::System::Void NPJMIGLKIHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIJNCADAHJ_NPJMIGLKIHF_OFFSET))(this);
		}

		::System::Void JNALIOAGNFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIJNCADAHJ_JNALIOAGNFC_OFFSET))(this);
		}

		::System::Void GNDFNHNEDAH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIJNCADAHJ_GNDFNHNEDAH_OFFSET))(this);
		}

	};
