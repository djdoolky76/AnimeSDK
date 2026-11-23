#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Font_F93EB759F2BAECC8; }
namespace UnityEngine { class Material; }

#define UNITYENGINE_FONT_AA6C68E5A06C4FC1_OFFSET UNITYSDK_OFFSET(0x42115E0)
#define UNITYENGINE_FONT_AD4974E7994D2BF1_OFFSET UNITYSDK_OFFSET(0x4211660)
#define UNITYENGINE_FONT_AF4AA5E3D9717E4A_OFFSET UNITYSDK_OFFSET(0x4211620)
#define UNITYENGINE_FONT_B0448CA688DC9C89_1_OFFSET UNITYSDK_OFFSET(0x4211300)
#define UNITYENGINE_FONT_B0448CA688DC9C89_OFFSET UNITYSDK_OFFSET(0x4211350)
#define UNITYENGINE_FONT_BC7D2DF714ADEC1D_OFFSET UNITYSDK_OFFSET(0x42113E0)
#define UNITYENGINE_FONT_E4DB6AA82FDDAFA1_OFFSET UNITYSDK_OFFSET(0x42115A0)
#define UNITYENGINE_FONT_F7694242609E5B30_OFFSET UNITYSDK_OFFSET(0x4211390)
#define UNITYENGINE_FONT_F915CD02491BB3A2_OFFSET UNITYSDK_OFFSET(0x42114D0)
#define UNITYENGINE_FONT__CTOR_OFFSET UNITYSDK_OFFSET(0x4211460)

namespace UnityEngine
{
	inline static constexpr unsigned int Font_TypeDefinitionIndex = 21345;

	class Font : public ::UnityEngine::Object
	{
	public:
		static ::System::Action_1<::UnityEngine::Font*>** StaticGet_ED56FDE0BC709711()
		{
			return (::System::Action_1<::UnityEngine::Font*>**)Il2CppClass::FromTypeDefinitionIndex(Font_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::UnityEngine::Font_F93EB759F2BAECC8* AA2E2673FAFE5CC0; // 0x18

		::System::Boolean E4DB6AA82FDDAFA1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_E4DB6AA82FDDAFA1_OFFSET))(this);
		}

		static ::System::Void F915CD02491BB3A2(::System::Action_1<::UnityEngine::Font*>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::System::Action_1<::UnityEngine::Font*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_F915CD02491BB3A2_OFFSET))(E937D4885DAA1AE8);
		}

		static ::System::Void F7694242609E5B30(::UnityEngine::Font* BD8273AB04C4B760, ::System::String* F79B4D487F303AB2)
		{
			return ((::System::Void(*)(::UnityEngine::Font*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_F7694242609E5B30_OFFSET))(BD8273AB04C4B760, F79B4D487F303AB2);
		}

		::System::Boolean B0448CA688DC9C89(::System::Int32 A97F5B807CC19082)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_B0448CA688DC9C89_OFFSET))(this, A97F5B807CC19082);
		}

		::UnityEngine::Material* AF4AA5E3D9717E4A()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_AF4AA5E3D9717E4A_OFFSET))(this);
		}

		::System::Boolean B0448CA688DC9C89_1(::System::Char A97F5B807CC19082)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_B0448CA688DC9C89_1_OFFSET))(this, A97F5B807CC19082);
		}

		static ::System::Void BC7D2DF714ADEC1D(::UnityEngine::Font* B1DC954065577781)
		{
			return ((::System::Void(*)(::UnityEngine::Font*))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_BC7D2DF714ADEC1D_OFFSET))(B1DC954065577781);
		}

		static ::System::Void AD4974E7994D2BF1(::System::Action_1<::UnityEngine::Font*>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::System::Action_1<::UnityEngine::Font*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_AD4974E7994D2BF1_OFFSET))(E937D4885DAA1AE8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT__CTOR_OFFSET))(this);
		}

		::System::Int32 AA6C68E5A06C4FC1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_AA6C68E5A06C4FC1_OFFSET))(this);
		}
	};
}
