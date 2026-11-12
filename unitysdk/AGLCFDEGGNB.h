#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CKFDNGOHNPC.h"
#include "unitysdk/UnityEngine/Vector3.h"
class DLHKOOMNNOK;
namespace System { class Random; }

#define AGLCFDEGGNB_APMBMIKDAFJ_OFFSET UNITYSDK_OFFSET(0x1DA0EB30)
#define AGLCFDEGGNB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA0CBD0)
#define AGLCFDEGGNB_DHBBKLGDCPB_OFFSET UNITYSDK_OFFSET(0x1DA0EC70)
#define AGLCFDEGGNB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DA0CBE0)
#define AGLCFDEGGNB_INMPBKNGAPC_OFFSET UNITYSDK_OFFSET(0x1DA0D800)
#define AGLCFDEGGNB_NNGCPGHKGIG_OFFSET UNITYSDK_OFFSET(0x1DA0D3F0)
#define AGLCFDEGGNB_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x1DA0CCF0)
#define AGLCFDEGGNB_OEDHIHFFFLK_OFFSET UNITYSDK_OFFSET(0x1DA0CEE0)
#define AGLCFDEGGNB_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1DA0E2A0)

inline static constexpr unsigned int AGLCFDEGGNB_TypeDefinitionIndex = 43178;

	class AGLCFDEGGNB : public ::CKFDNGOHNPC
	{
	public:
		::System::Random* OLEEIPHBJKB; // 0x18
		::Il2CppArray<::DLHKOOMNNOK*>* LALOEKFAGKC; // 0x20
		::System::Single PGMIOKKLHIE; // 0x28
		::System::Void _ctor(::Il2CppArray<::DLHKOOMNNOK*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::DLHKOOMNNOK*>*))((::PBYTE)hIl2Cpp + AGLCFDEGGNB_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGLCFDEGGNB_DISPOSE_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGLCFDEGGNB_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void OEDHIHFFFLK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGLCFDEGGNB_OEDHIHFFFLK_OFFSET))(this);
		}

		::System::Boolean NNGCPGHKGIG(::DLHKOOMNNOK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DLHKOOMNNOK*))((::PBYTE)hIl2Cpp + AGLCFDEGGNB_NNGCPGHKGIG_OFFSET))(this, a1);
		}

		::System::Void INMPBKNGAPC(::DLHKOOMNNOK* a1, ::DLHKOOMNNOK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::DLHKOOMNNOK*, ::DLHKOOMNNOK*))((::PBYTE)hIl2Cpp + AGLCFDEGGNB_INMPBKNGAPC_OFFSET))(this, a1, a2);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AGLCFDEGGNB_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Boolean APMBMIKDAFJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AGLCFDEGGNB_APMBMIKDAFJ_OFFSET))(this);
		}

		static ::UnityEngine::Vector3 DHBBKLGDCPB(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + AGLCFDEGGNB_DHBBKLGDCPB_OFFSET))(a1, a2, a3, a4);
		}

	};
