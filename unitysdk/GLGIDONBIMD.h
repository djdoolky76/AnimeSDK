#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ScenenLightManager/LightInstanceID.h"
class BHMLMOOOGLK;
class KPNFPHJPOMM_BNODLLNHEME;
class MEHINBDPFCF;
class MEIGMBOLDOF;
class NPAGGDLHIND;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GLGIDONBIMD_AABIJAPKCAH_OFFSET UNITYSDK_OFFSET(0x16C5DAC0)
#define GLGIDONBIMD_BIPDJOLFJNP_OFFSET UNITYSDK_OFFSET(0x16C5DF00)
#define GLGIDONBIMD_CTOR_OFFSET UNITYSDK_OFFSET(0x16C5D0B0)
#define GLGIDONBIMD_DMMPFMPNDOL_OFFSET UNITYSDK_OFFSET(0x16C5D390)
#define GLGIDONBIMD_DPLPFILPPKC_OFFSET UNITYSDK_OFFSET(0x16C5D790)
#define GLGIDONBIMD_GCMBHFDMLKF_OFFSET UNITYSDK_OFFSET(0x16C5D400)
#define GLGIDONBIMD_IOLGKDEMHJI_OFFSET UNITYSDK_OFFSET(0x16C5DA70)
#define GLGIDONBIMD_JPCABOBPAKJ_OFFSET UNITYSDK_OFFSET(0x16C5E000)
#define GLGIDONBIMD_LCEFDMEICIM_OFFSET UNITYSDK_OFFSET(0x16C5E160)
#define GLGIDONBIMD_LLHAEMNFAFB_OFFSET UNITYSDK_OFFSET(0x16C5E1B0)
#define GLGIDONBIMD_PBGHHIMGFDL_OFFSET UNITYSDK_OFFSET(0x16C5D520)

inline static constexpr unsigned int GLGIDONBIMD_TypeDefinitionIndex = 50163;

	class GLGIDONBIMD : public ::System::Object
	{
	public:
		::NPAGGDLHIND* NIJEOJCIINK; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MEIGMBOLDOF*>* AJMBJKAJEFB; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MEHINBDPFCF*>* OKCPFGNNJLC; // 0x20
		::BHMLMOOOGLK* JKJJEINDFMA; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* JGMIEFKNOIM; // 0x30
		::System::Void _ctor(::BHMLMOOOGLK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BHMLMOOOGLK*))((::PBYTE)hIl2Cpp + GLGIDONBIMD_CTOR_OFFSET))(this, a1);
		}

		::ScenenLightManager::LightInstanceID DMMPFMPNDOL(::System::Int32 a1)
		{
			return ((::ScenenLightManager::LightInstanceID(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GLGIDONBIMD_DMMPFMPNDOL_OFFSET))(this, a1);
		}

		::System::Void GCMBHFDMLKF(::System::Int32 a1, ::System::Int32 a2, ::KPNFPHJPOMM_BNODLLNHEME* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::KPNFPHJPOMM_BNODLLNHEME*, ::System::Boolean))((::PBYTE)hIl2Cpp + GLGIDONBIMD_GCMBHFDMLKF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void PBGHHIMGFDL(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + GLGIDONBIMD_PBGHHIMGFDL_OFFSET))(this, a1, a2);
		}

		::System::Void IOLGKDEMHJI(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + GLGIDONBIMD_IOLGKDEMHJI_OFFSET))(this, a1, a2);
		}

		::System::Int32 AABIJAPKCAH(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GLGIDONBIMD_AABIJAPKCAH_OFFSET))(this, a1);
		}

		::System::Void DPLPFILPPKC(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GLGIDONBIMD_DPLPFILPPKC_OFFSET))(this, a1);
		}

		::MEIGMBOLDOF* BIPDJOLFJNP(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::MEIGMBOLDOF*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + GLGIDONBIMD_BIPDJOLFJNP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JPCABOBPAKJ(::MEIGMBOLDOF* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::MEIGMBOLDOF*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + GLGIDONBIMD_JPCABOBPAKJ_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void LCEFDMEICIM(::MEIGMBOLDOF* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::MEIGMBOLDOF*, ::System::Boolean))((::PBYTE)hIl2Cpp + GLGIDONBIMD_LCEFDMEICIM_OFFSET))(a1, a2);
		}

		static ::System::Void LLHAEMNFAFB(::MEIGMBOLDOF* a1)
		{
			return ((::System::Void(*)(::MEIGMBOLDOF*))((::PBYTE)hIl2Cpp + GLGIDONBIMD_LLHAEMNFAFB_OFFSET))(a1);
		}

	};
