#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"
#include "unitysdk/UnityEngine/TextAsset_E1AC6D7DBFECF523.h"

namespace System { class String; }

#define UNITYENGINE_TEXTASSET_AE11053E5D892357_OFFSET UNITYSDK_OFFSET(0x4173B60)
#define UNITYENGINE_TEXTASSET_B1D26649F5FAACFC_OFFSET UNITYSDK_OFFSET(0x4173BF0)
#define UNITYENGINE_TEXTASSET_B34B6A5CB93C695B_OFFSET UNITYSDK_OFFSET(0x4173B20)
#define UNITYENGINE_TEXTASSET_B8F9C42C4CC4B544_OFFSET UNITYSDK_OFFSET(0x41738A0)
#define UNITYENGINE_TEXTASSET_E80B9F472EEFDF74_OFFSET UNITYSDK_OFFSET(0x4173BF0)
#define UNITYENGINE_TEXTASSET_FA9E7A603A102570_OFFSET UNITYSDK_OFFSET(0x4173D70)
#define UNITYENGINE_TEXTASSET_FC21B283FF2F9249_OFFSET UNITYSDK_OFFSET(0x4173BA0)
#define UNITYENGINE_TEXTASSET__CTOR_1_OFFSET UNITYSDK_OFFSET(0x4173CE0)
#define UNITYENGINE_TEXTASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x4173C70)

namespace UnityEngine
{
	inline static constexpr unsigned int TextAsset_TypeDefinitionIndex = 17571;

	class TextAsset : public ::UnityEngine::Object
	{
	public:
		static ::System::Void FC21B283FF2F9249(::UnityEngine::TextAsset* BD8273AB04C4B760, ::System::String* E97E8D008427A296)
		{
			return ((::System::Void(*)(::UnityEngine::TextAsset*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTASSET_FC21B283FF2F9249_OFFSET))(BD8273AB04C4B760, E97E8D008427A296);
		}

		::System::String* B1D26649F5FAACFC()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTASSET_B1D26649F5FAACFC_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* FA9E7A603A102570()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTASSET_FA9E7A603A102570_OFFSET))(this);
		}

		::System::Int64 AE11053E5D892357()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTASSET_AE11053E5D892357_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTASSET__CTOR_OFFSET))(this);
		}

		static ::System::String* B8F9C42C4CC4B544(::Il2CppArray<::System::Byte>* E83E519C5C42896F)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTASSET_B8F9C42C4CC4B544_OFFSET))(E83E519C5C42896F);
		}

		::System::Void _ctor_1(::UnityEngine::TextAsset_E1AC6D7DBFECF523 FADED64AD3E99C03, ::System::String* E97E8D008427A296)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextAsset_E1AC6D7DBFECF523, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTASSET__CTOR_1_OFFSET))(this, FADED64AD3E99C03, E97E8D008427A296);
		}

		::System::IntPtr B34B6A5CB93C695B()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTASSET_B34B6A5CB93C695B_OFFSET))(this);
		}

		::System::String* E80B9F472EEFDF74()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTASSET_E80B9F472EEFDF74_OFFSET))(this);
		}
	};
}
