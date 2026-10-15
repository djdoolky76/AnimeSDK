#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class FIIFBBCPKAL;
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define KJICHABELAK_CCTOR_OFFSET UNITYSDK_OFFSET(0xB4589F0)
#define KJICHABELAK_CTOR_OFFSET UNITYSDK_OFFSET(0xB4589C0)
#define KJICHABELAK_ILMJEDIEECG_OFFSET UNITYSDK_OFFSET(0xB458880)
#define KJICHABELAK_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xB4586B0)
#define KJICHABELAK_OPFCNGLLCJO_OFFSET UNITYSDK_OFFSET(0xB458920)
#define KJICHABELAK__ONBIND_OFFSET UNITYSDK_OFFSET(0xB458530)

inline static constexpr unsigned int KJICHABELAK_TypeDefinitionIndex = 71564;

	class KJICHABELAK : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Text* NPLDBMIFBOF; // 0x60
		::UnityEngine::UI::Text* BDEECCDMIAG; // 0x68
		::UnityEngine::UI::Text* GBFKFBCCLKK; // 0x70
		::UnityEngine::Transform* MADHMFCPODL; // 0x78
		::UnityEngine::UI::Text* MHFPCIJLJOJ; // 0x80
		::UnityEngine::UI::Text* FMHBPPEKCBG; // 0x88
		::UnityEngine::Animator* APPGGMLEPLN; // 0x90
		::System::UInt32 EJNMGLJJEOO; // 0x98
		static ::System::Int32* StaticGet_PLGAAIAIPGD()
		{
			return (::System::Int32*)UnitySDK::FromName("", "KJICHABELAK")->GetStaticField(0x13880);
		}

		static ::System::Int32* StaticGet_DPJINPBAFEE()
		{
			return (::System::Int32*)UnitySDK::FromName("", "KJICHABELAK")->GetStaticField(0x13884);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJICHABELAK_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJICHABELAK_CCTOR_OFFSET))();
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJICHABELAK__ONBIND_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::FIIFBBCPKAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FIIFBBCPKAL*))((::PBYTE)hIl2Cpp + KJICHABELAK_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void ILMJEDIEECG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJICHABELAK_ILMJEDIEECG_OFFSET))(this);
		}

		::System::Void OPFCNGLLCJO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJICHABELAK_OPFCNGLLCJO_OFFSET))(this);
		}

	};
