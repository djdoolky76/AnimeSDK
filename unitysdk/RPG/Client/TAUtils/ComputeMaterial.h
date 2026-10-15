#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/RenderTextureSubElement.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture; }

#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_AIJNIKOCOPJ_1_OFFSET UNITYSDK_OFFSET(0xE181F80)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_AIJNIKOCOPJ_OFFSET UNITYSDK_OFFSET(0xE181900)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_BEFODDDHPAL_OFFSET UNITYSDK_OFFSET(0xE181BF0)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_COFNEAPPCOA_1_OFFSET UNITYSDK_OFFSET(0xE182100)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_COFNEAPPCOA_OFFSET UNITYSDK_OFFSET(0xE182080)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_CTOR_OFFSET UNITYSDK_OFFSET(0xE182860)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_DLFKFJOLDCF_1_OFFSET UNITYSDK_OFFSET(0xE182350)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_DLFKFJOLDCF_2_OFFSET UNITYSDK_OFFSET(0xE1823D0)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_DLFKFJOLDCF_3_OFFSET UNITYSDK_OFFSET(0xE182460)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_DLFKFJOLDCF_4_OFFSET UNITYSDK_OFFSET(0xE182500)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_DLFKFJOLDCF_5_OFFSET UNITYSDK_OFFSET(0xE1825A0)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_DLFKFJOLDCF_OFFSET UNITYSDK_OFFSET(0xE1819E0)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_EEOKJIPJLEL_OFFSET UNITYSDK_OFFSET(0xE181610)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_EOBLBCJCCKL_OFFSET UNITYSDK_OFFSET(0xE181670)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_IEILKHEEJCH_1_OFFSET UNITYSDK_OFFSET(0xE181E20)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_IEILKHEEJCH_OFFSET UNITYSDK_OFFSET(0xE1817C0)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_IKAHNBNDHDL_OFFSET UNITYSDK_OFFSET(0xE181C80)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_IKMEMLEJMBL_1_OFFSET UNITYSDK_OFFSET(0xE181DA0)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_IKMEMLEJMBL_OFFSET UNITYSDK_OFFSET(0xE181750)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_JFFKOEGJODH_1_OFFSET UNITYSDK_OFFSET(0xE1821F0)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_JFFKOEGJODH_OFFSET UNITYSDK_OFFSET(0xE182170)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_JNJJHKDKCHJ_1_OFFSET UNITYSDK_OFFSET(0xE181D10)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_JNJJHKDKCHJ_OFFSET UNITYSDK_OFFSET(0xE1816D0)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_JNMJCAECKEK_OFFSET UNITYSDK_OFFSET(0xE181B70)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_KAFOBHKNMBE_1_OFFSET UNITYSDK_OFFSET(0xE1827F0)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_KAFOBHKNMBE_OFFSET UNITYSDK_OFFSET(0xE182770)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_KFCHBNAJAJI_OFFSET UNITYSDK_OFFSET(0xE1815C0)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_LEONKJJGOGI_1_OFFSET UNITYSDK_OFFSET(0xE181EB0)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_LEONKJJGOGI_OFFSET UNITYSDK_OFFSET(0xE181840)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_LNFAEJEDBDD_1_OFFSET UNITYSDK_OFFSET(0xE182000)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_LNFAEJEDBDD_OFFSET UNITYSDK_OFFSET(0xE181970)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_NOOIPOGAGMG_1_OFFSET UNITYSDK_OFFSET(0xE1826E0)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_NOOIPOGAGMG_OFFSET UNITYSDK_OFFSET(0xE181AF0)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0xE1812F0)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xE180EA0)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_PCKMCKBKKFF_1_OFFSET UNITYSDK_OFFSET(0xE1822E0)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_PCKMCKBKKFF_OFFSET UNITYSDK_OFFSET(0xE182260)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_POBLKHLHAKG_1_OFFSET UNITYSDK_OFFSET(0xE182650)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_POBLKHLHAKG_OFFSET UNITYSDK_OFFSET(0xE181A70)

namespace RPG::Client::TAUtils
{
	inline static constexpr unsigned int ComputeMaterial_TypeDefinitionIndex = 73609;

	class ComputeMaterial : public ::UnityEngine::ScriptableObject
	{
	public:
		::UnityEngine::ComputeShader* ComputeShader; // 0x18
		::System::Collections::Generic::List_1<::System::Object*>* FloatProperties; // 0x20
		::System::Collections::Generic::List_1<::System::Object*>* VectorProperties; // 0x28
		::System::Collections::Generic::List_1<::System::Object*>* TextureProperties; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_CTOR_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_PAGKOAEOLKA_OFFSET))(this);
		}

		::System::Void OINBDMGFFJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_OINBDMGFFJL_OFFSET))(this);
		}

		::System::Void KFCHBNAJAJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_KFCHBNAJAJI_OFFSET))(this);
		}

		::System::Int32 EEOKJIPJLEL(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_EEOKJIPJLEL_OFFSET))(this, a1);
		}

		::System::Boolean EOBLBCJCCKL(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_EOBLBCJCCKL_OFFSET))(this, a1);
		}

		::System::Void JNJJHKDKCHJ(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_JNJJHKDKCHJ_OFFSET))(this, a1, a2);
		}

		::System::Void IKMEMLEJMBL(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_IKMEMLEJMBL_OFFSET))(this, a1, a2);
		}

		::System::Void IEILKHEEJCH(::System::Int32 a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_IEILKHEEJCH_OFFSET))(this, a1, a2);
		}

		::System::Void LEONKJJGOGI(::System::Int32 a1, ::UnityEngine::Matrix4x4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_LEONKJJGOGI_OFFSET))(this, a1, a2);
		}

		::System::Void AIJNIKOCOPJ(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Vector4>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_AIJNIKOCOPJ_OFFSET))(this, a1, a2);
		}

		::System::Void LNFAEJEDBDD(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Matrix4x4>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_LNFAEJEDBDD_OFFSET))(this, a1, a2);
		}

		::System::Void DLFKFJOLDCF(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Texture* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Texture*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_DLFKFJOLDCF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void POBLKHLHAKG(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_POBLKHLHAKG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NOOIPOGAGMG(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::ComputeBuffer* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_NOOIPOGAGMG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JNMJCAECKEK(::System::Int32 a1, ::System::Int32 a2, ::System::UInt64 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_JNMJCAECKEK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BEFODDDHPAL(::System::Int32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_BEFODDDHPAL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void IKAHNBNDHDL(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_IKAHNBNDHDL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void JNJJHKDKCHJ_1(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_JNJJHKDKCHJ_1_OFFSET))(this, a1, a2);
		}

		::System::Void IKMEMLEJMBL_1(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_IKMEMLEJMBL_1_OFFSET))(this, a1, a2);
		}

		::System::Void IEILKHEEJCH_1(::System::String* a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_IEILKHEEJCH_1_OFFSET))(this, a1, a2);
		}

		::System::Void LEONKJJGOGI_1(::System::String* a1, ::UnityEngine::Matrix4x4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_LEONKJJGOGI_1_OFFSET))(this, a1, a2);
		}

		::System::Void AIJNIKOCOPJ_1(::System::String* a1, ::Il2CppArray<::UnityEngine::Vector4>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_AIJNIKOCOPJ_1_OFFSET))(this, a1, a2);
		}

		::System::Void LNFAEJEDBDD_1(::System::String* a1, ::Il2CppArray<::UnityEngine::Matrix4x4>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_LNFAEJEDBDD_1_OFFSET))(this, a1, a2);
		}

		::System::Void COFNEAPPCOA(::System::String* a1, ::Il2CppArray<::System::Single>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_COFNEAPPCOA_OFFSET))(this, a1, a2);
		}

		::System::Void COFNEAPPCOA_1(::System::Int32 a1, ::Il2CppArray<::System::Single>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_COFNEAPPCOA_1_OFFSET))(this, a1, a2);
		}

		::System::Void JFFKOEGJODH(::System::String* a1, ::Il2CppArray<::System::Int32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_JFFKOEGJODH_OFFSET))(this, a1, a2);
		}

		::System::Void JFFKOEGJODH_1(::System::Int32 a1, ::Il2CppArray<::System::Int32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_JFFKOEGJODH_1_OFFSET))(this, a1, a2);
		}

		::System::Void PCKMCKBKKFF(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_PCKMCKBKKFF_OFFSET))(this, a1, a2);
		}

		::System::Void PCKMCKBKKFF_1(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_PCKMCKBKKFF_1_OFFSET))(this, a1, a2);
		}

		::System::Void DLFKFJOLDCF_1(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Texture* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_DLFKFJOLDCF_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DLFKFJOLDCF_2(::System::Int32 a1, ::System::String* a2, ::UnityEngine::Texture* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_DLFKFJOLDCF_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DLFKFJOLDCF_3(::System::Int32 a1, ::System::String* a2, ::UnityEngine::Texture* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::UnityEngine::Texture*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_DLFKFJOLDCF_3_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DLFKFJOLDCF_4(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::RenderTexture* a3, ::System::Int32 a4, ::UnityEngine::Rendering::RenderTextureSubElement a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTexture*, ::System::Int32, ::UnityEngine::Rendering::RenderTextureSubElement))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_DLFKFJOLDCF_4_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void DLFKFJOLDCF_5(::System::Int32 a1, ::System::String* a2, ::UnityEngine::RenderTexture* a3, ::System::Int32 a4, ::UnityEngine::Rendering::RenderTextureSubElement a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::UnityEngine::RenderTexture*, ::System::Int32, ::UnityEngine::Rendering::RenderTextureSubElement))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_DLFKFJOLDCF_5_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void POBLKHLHAKG_1(::System::Int32 a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_POBLKHLHAKG_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NOOIPOGAGMG_1(::System::Int32 a1, ::System::String* a2, ::UnityEngine::ComputeBuffer* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_NOOIPOGAGMG_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KAFOBHKNMBE(::System::Int32 a1, ::UnityEngine::ComputeBuffer* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ComputeBuffer*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_KAFOBHKNMBE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KAFOBHKNMBE_1(::System::Int32 a1, ::UnityEngine::ComputeBuffer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_KAFOBHKNMBE_1_OFFSET))(this, a1, a2);
		}

	};
}
