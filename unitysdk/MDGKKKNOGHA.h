#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IAPOIJDMPJC;
class NEOCEOCDEAF;
namespace RPG::Client { class BaseShaderPropertyTransition; }
namespace System { class String; }

#define MDGKKKNOGHA_CTOR_OFFSET UNITYSDK_OFFSET(0xB89CC20)
#define MDGKKKNOGHA_EKGFNODICMF_OFFSET UNITYSDK_OFFSET(0xB89D0E0)
#define MDGKKKNOGHA_GET_RENDERERNAME_OFFSET UNITYSDK_OFFSET(0xB89CC00)
#define MDGKKKNOGHA_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xB89CE10)
#define MDGKKKNOGHA_LMNDPDPGJFB_OFFSET UNITYSDK_OFFSET(0xB89CF90)
#define MDGKKKNOGHA_LNGDBLEKGHG_OFFSET UNITYSDK_OFFSET(0xB89D1F0)
#define MDGKKKNOGHA_NIKJNOFELGN_OFFSET UNITYSDK_OFFSET(0xB89CE60)
#define MDGKKKNOGHA_NOFHFKNDBAO_OFFSET UNITYSDK_OFFSET(0xB89D070)
#define MDGKKKNOGHA_SET_RENDERERNAME_OFFSET UNITYSDK_OFFSET(0xB89CC10)

inline static constexpr unsigned int MDGKKKNOGHA_TypeDefinitionIndex = 57348;

	class MDGKKKNOGHA : public ::System::Object
	{
	public:
		::System::String* _RendererName_k__BackingField; // 0x10
		::RPG::Client::BaseShaderPropertyTransition* KNBIKJLEHMH; // 0x18
		::NEOCEOCDEAF* INDMABDHFDH; // 0x20
		::System::Void _ctor(::IAPOIJDMPJC* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IAPOIJDMPJC*, ::System::String*))((::PBYTE)hIl2Cpp + MDGKKKNOGHA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* get_RendererName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDGKKKNOGHA_GET_RENDERERNAME_OFFSET))(this);
		}

		::System::Void set_RendererName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MDGKKKNOGHA_SET_RENDERERNAME_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDGKKKNOGHA_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void NIKJNOFELGN(::System::Single a1, ::System::Boolean a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MDGKKKNOGHA_NIKJNOFELGN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NOFHFKNDBAO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MDGKKKNOGHA_NOFHFKNDBAO_OFFSET))(this, a1);
		}

		::System::Void LNGDBLEKGHG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MDGKKKNOGHA_LNGDBLEKGHG_OFFSET))(this, a1);
		}

		::System::Void EKGFNODICMF(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MDGKKKNOGHA_EKGFNODICMF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LMNDPDPGJFB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MDGKKKNOGHA_LMNDPDPGJFB_OFFSET))(this, a1);
		}

	};
