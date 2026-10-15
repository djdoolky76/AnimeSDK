#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingLightEnum.h"
#include "unitysdk/ScenenLightManager/FadingState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1_075EFA8CFBE0DE9A.h"
class BNIEAMHOKJE;
class IEJMFJKDEHJ;
class KLEFGGIHGMI;
class PFJNGFLBJFO;
namespace RPG::GameCore { class BlockNodeConfig; }
namespace System { class String; }
namespace System::Text::RegularExpressions { class Regex; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define IEJMFJKDEHJ_APPLY_OFFSET UNITYSDK_OFFSET(0x15F00210)
#define IEJMFJKDEHJ_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15EFEEE0)
#define IEJMFJKDEHJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x15F00360)
#define IEJMFJKDEHJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15EFF040)
#define IEJMFJKDEHJ_EAKLHNOJDDF_OFFSET UNITYSDK_OFFSET(0x15EFF320)
#define IEJMFJKDEHJ_ECHDCKOGDLO_OFFSET UNITYSDK_OFFSET(0x15EFFC90)
#define IEJMFJKDEHJ_EFNAHOPHHPK_OFFSET UNITYSDK_OFFSET(0x15EFF120)
#define IEJMFJKDEHJ_GBCLJNKHHAA_OFFSET UNITYSDK_OFFSET(0x15EFF5C0)
#define IEJMFJKDEHJ_GJDHAFEIHMA_OFFSET UNITYSDK_OFFSET(0x15EFFD60)
#define IEJMFJKDEHJ_HIPJKDILKKJ_OFFSET UNITYSDK_OFFSET(0x15EFEEC0)
#define IEJMFJKDEHJ_HKHBDCIBAMF_OFFSET UNITYSDK_OFFSET(0x15EFF410)
#define IEJMFJKDEHJ_HLDBHMJLLGA_OFFSET UNITYSDK_OFFSET(0x15EFEED0)
#define IEJMFJKDEHJ_IFMHINIHKMO_OFFSET UNITYSDK_OFFSET(0x15EFF670)
#define IEJMFJKDEHJ_INIT_OFFSET UNITYSDK_OFFSET(0x15EFFFB0)
#define IEJMFJKDEHJ_INMBNELCDDL_OFFSET UNITYSDK_OFFSET(0x15EFF060)
#define IEJMFJKDEHJ_MFJHFCKDKBO_OFFSET UNITYSDK_OFFSET(0x15EFFC30)
#define IEJMFJKDEHJ_OIEFNJAFDLK_OFFSET UNITYSDK_OFFSET(0x15EFFE30)
#define IEJMFJKDEHJ_ONENVOBJENABLE_OFFSET UNITYSDK_OFFSET(0x15F00000)
#define IEJMFJKDEHJ_ONFADINGBEGIN_OFFSET UNITYSDK_OFFSET(0x15F00260)
#define IEJMFJKDEHJ_ONFADINGEND_OFFSET UNITYSDK_OFFSET(0x15F00310)
#define IEJMFJKDEHJ_ONFADING_OFFSET UNITYSDK_OFFSET(0x15F002B0)
#define IEJMFJKDEHJ_RELEASE_OFFSET UNITYSDK_OFFSET(0x15EFFEF0)
#define IEJMFJKDEHJ_TICK_OFFSET UNITYSDK_OFFSET(0x15F001B0)

inline static constexpr unsigned int IEJMFJKDEHJ_TypeDefinitionIndex = 49338;

	class IEJMFJKDEHJ : public ::System::Object
	{
	public:
		::BNIEAMHOKJE* LEFHPGFJJCD; // 0x10
		::System::String* GCPJMGNCMEE; // 0x18
		::System::Boolean OJIMILLNLNJ; // 0x20
		::System::Boolean CMAKJFGCOAH; // 0x21
		::System::Boolean ECLOLHLBILM; // 0x22
		::System::Byte _padding0[0x1];
		::System::Int32 JHBAAEHHPDE; // 0x24
		static ::System::Text::RegularExpressions::Regex** StaticGet_BACJHKNKAKO()
		{
			return (::System::Text::RegularExpressions::Regex**)UnitySDK::FromName("", "IEJMFJKDEHJ")->GetStaticField(0x56440);
		}

		::System::Void _ctor(::System::String* a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + IEJMFJKDEHJ_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IEJMFJKDEHJ_CCTOR_OFFSET))();
		}

		::System::Boolean HIPJKDILKKJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IEJMFJKDEHJ_HIPJKDILKKJ_OFFSET))(this);
		}

		::BNIEAMHOKJE* HLDBHMJLLGA()
		{
			return ((::BNIEAMHOKJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEJMFJKDEHJ_HLDBHMJLLGA_OFFSET))(this);
		}

		static ::IEJMFJKDEHJ* BPLPBPMEODA(::System::String* a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6, ::RPG::GameCore::BlockNodeConfig* a7, ::KLEFGGIHGMI* a8)
		{
			return ((::IEJMFJKDEHJ*(*)(::System::String*, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::RPG::GameCore::BlockNodeConfig*, ::KLEFGGIHGMI*))((::PBYTE)hIl2Cpp + IEJMFJKDEHJ_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::String* INMBNELCDDL(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + IEJMFJKDEHJ_INMBNELCDDL_OFFSET))(a1);
		}

		static ::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Char> EFNAHOPHHPK(::System::String* a1)
		{
			return ((::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Char>(*)(::System::String*))((::PBYTE)hIl2Cpp + IEJMFJKDEHJ_EFNAHOPHHPK_OFFSET))(a1);
		}

		static ::System::String* EAKLHNOJDDF(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + IEJMFJKDEHJ_EAKLHNOJDDF_OFFSET))(a1);
		}

		static ::System::String* HKHBDCIBAMF(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + IEJMFJKDEHJ_HKHBDCIBAMF_OFFSET))(a1);
		}

		static ::System::String* GBCLJNKHHAA(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + IEJMFJKDEHJ_GBCLJNKHHAA_OFFSET))(a1);
		}

		static ::BNIEAMHOKJE* IFMHINIHKMO(::System::String* a1, ::RPG::GameCore::BlockNodeConfig* a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Int32 a5, ::KLEFGGIHGMI* a6)
		{
			return ((::BNIEAMHOKJE*(*)(::System::String*, ::RPG::GameCore::BlockNodeConfig*, ::System::Boolean, ::System::Boolean, ::System::Int32, ::KLEFGGIHGMI*))((::PBYTE)hIl2Cpp + IEJMFJKDEHJ_IFMHINIHKMO_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		::System::Void MFJHFCKDKBO(::PFJNGFLBJFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFJNGFLBJFO*))((::PBYTE)hIl2Cpp + IEJMFJKDEHJ_MFJHFCKDKBO_OFFSET))(this, a1);
		}

		::System::Void ECHDCKOGDLO(::RPG::Client::OpenWorld::StreamingLightEnum a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLightEnum))((::PBYTE)hIl2Cpp + IEJMFJKDEHJ_ECHDCKOGDLO_OFFSET))(this, a1);
		}

		::System::Void GJDHAFEIHMA(::RPG::Client::OpenWorld::StreamingLightEnum a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLightEnum))((::PBYTE)hIl2Cpp + IEJMFJKDEHJ_GJDHAFEIHMA_OFFSET))(this, a1);
		}

		::System::Void OIEFNJAFDLK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEJMFJKDEHJ_OIEFNJAFDLK_OFFSET))(this);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEJMFJKDEHJ_RELEASE_OFFSET))(this);
		}

		::System::Void Init(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + IEJMFJKDEHJ_INIT_OFFSET))(this, a1);
		}

		::System::Void OnEnvObjEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IEJMFJKDEHJ_ONENVOBJENABLE_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IEJMFJKDEHJ_TICK_OFFSET))(this, a1);
		}

		::System::Void Apply(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + IEJMFJKDEHJ_APPLY_OFFSET))(this, a1);
		}

		::System::Void OnFadingBegin(::ScenenLightManager::FadingState a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + IEJMFJKDEHJ_ONFADINGBEGIN_OFFSET))(this, a1);
		}

		::System::Void OnFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + IEJMFJKDEHJ_ONFADING_OFFSET))(this, a1, a2);
		}

		::System::Void OnFadingEnd(::ScenenLightManager::FadingState a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + IEJMFJKDEHJ_ONFADINGEND_OFFSET))(this, a1);
		}

	};
