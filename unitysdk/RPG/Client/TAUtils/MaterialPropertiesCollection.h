#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture; }

#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_AALCFBOGFKP_1_OFFSET UNITYSDK_OFFSET(0xE182DA0)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_AALCFBOGFKP_OFFSET UNITYSDK_OFFSET(0xE182CA0)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xE182A40)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_CTOR_OFFSET UNITYSDK_OFFSET(0xE182930)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_EGFCFCBHJJP_10_OFFSET UNITYSDK_OFFSET(0xE183CC0)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_EGFCFCBHJJP_11_OFFSET UNITYSDK_OFFSET(0xE183E20)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_EGFCFCBHJJP_12_OFFSET UNITYSDK_OFFSET(0xE183F80)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_EGFCFCBHJJP_13_OFFSET UNITYSDK_OFFSET(0xE1840D0)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_EGFCFCBHJJP_14_OFFSET UNITYSDK_OFFSET(0xE184210)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_EGFCFCBHJJP_15_OFFSET UNITYSDK_OFFSET(0xE184360)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_EGFCFCBHJJP_16_OFFSET UNITYSDK_OFFSET(0xE1844B0)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_EGFCFCBHJJP_17_OFFSET UNITYSDK_OFFSET(0xE184640)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_EGFCFCBHJJP_18_OFFSET UNITYSDK_OFFSET(0xE184780)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_EGFCFCBHJJP_19_OFFSET UNITYSDK_OFFSET(0xE1848C0)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_EGFCFCBHJJP_1_OFFSET UNITYSDK_OFFSET(0xE183020)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_EGFCFCBHJJP_20_OFFSET UNITYSDK_OFFSET(0xE184A00)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_EGFCFCBHJJP_21_OFFSET UNITYSDK_OFFSET(0xE184B40)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_EGFCFCBHJJP_22_OFFSET UNITYSDK_OFFSET(0xE184C80)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_EGFCFCBHJJP_23_OFFSET UNITYSDK_OFFSET(0xE184DC0)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_EGFCFCBHJJP_2_OFFSET UNITYSDK_OFFSET(0xE183180)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_EGFCFCBHJJP_3_OFFSET UNITYSDK_OFFSET(0xE1832E0)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_EGFCFCBHJJP_4_OFFSET UNITYSDK_OFFSET(0xE183440)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_EGFCFCBHJJP_5_OFFSET UNITYSDK_OFFSET(0xE1835E0)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_EGFCFCBHJJP_6_OFFSET UNITYSDK_OFFSET(0xE183740)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_EGFCFCBHJJP_7_OFFSET UNITYSDK_OFFSET(0xE1838A0)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_EGFCFCBHJJP_8_OFFSET UNITYSDK_OFFSET(0xE183A00)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_EGFCFCBHJJP_9_OFFSET UNITYSDK_OFFSET(0xE183B60)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_EGFCFCBHJJP_OFFSET UNITYSDK_OFFSET(0xE182EB0)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_KMFNLBBPOKK_10_OFFSET UNITYSDK_OFFSET(0xE1853D0)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_KMFNLBBPOKK_11_OFFSET UNITYSDK_OFFSET(0xE185440)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_KMFNLBBPOKK_12_OFFSET UNITYSDK_OFFSET(0xE1854B0)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_KMFNLBBPOKK_13_OFFSET UNITYSDK_OFFSET(0xE185530)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_KMFNLBBPOKK_14_OFFSET UNITYSDK_OFFSET(0xE1855A0)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_KMFNLBBPOKK_15_OFFSET UNITYSDK_OFFSET(0xE185620)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_KMFNLBBPOKK_16_OFFSET UNITYSDK_OFFSET(0xE1856A0)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_KMFNLBBPOKK_17_OFFSET UNITYSDK_OFFSET(0xE185770)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_KMFNLBBPOKK_18_OFFSET UNITYSDK_OFFSET(0xE1857E0)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_KMFNLBBPOKK_19_OFFSET UNITYSDK_OFFSET(0xE185850)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_KMFNLBBPOKK_1_OFFSET UNITYSDK_OFFSET(0xE184F70)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_KMFNLBBPOKK_20_OFFSET UNITYSDK_OFFSET(0xE1858C0)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_KMFNLBBPOKK_21_OFFSET UNITYSDK_OFFSET(0xE185930)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_KMFNLBBPOKK_22_OFFSET UNITYSDK_OFFSET(0xE1859A0)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_KMFNLBBPOKK_23_OFFSET UNITYSDK_OFFSET(0xE185A10)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_KMFNLBBPOKK_2_OFFSET UNITYSDK_OFFSET(0xE184FE0)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_KMFNLBBPOKK_3_OFFSET UNITYSDK_OFFSET(0xE185060)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_KMFNLBBPOKK_4_OFFSET UNITYSDK_OFFSET(0xE1850E0)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_KMFNLBBPOKK_5_OFFSET UNITYSDK_OFFSET(0xE1851A0)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_KMFNLBBPOKK_6_OFFSET UNITYSDK_OFFSET(0xE185210)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_KMFNLBBPOKK_7_OFFSET UNITYSDK_OFFSET(0xE185280)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_KMFNLBBPOKK_8_OFFSET UNITYSDK_OFFSET(0xE1852F0)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_KMFNLBBPOKK_9_OFFSET UNITYSDK_OFFSET(0xE185360)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_KMFNLBBPOKK_OFFSET UNITYSDK_OFFSET(0xE184F00)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0xE182990)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0xE182AD0)

namespace RPG::Client::TAUtils
{
	inline static constexpr unsigned int MaterialPropertiesCollection_TypeDefinitionIndex = 73613;

	class MaterialPropertiesCollection : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* properties; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_CTOR_OFFSET))(this);
		}

		::System::Void OINBDMGFFJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_OINBDMGFFJL_OFFSET))(this);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_ABKBOGIGAEH_OFFSET))(this);
		}

		::System::Void PKADDEPKJFN(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_PKADDEPKJFN_OFFSET))(this, a1);
		}

		::System::Void AALCFBOGFKP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_AALCFBOGFKP_OFFSET))(this, a1);
		}

		::System::Void AALCFBOGFKP_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_AALCFBOGFKP_1_OFFSET))(this, a1);
		}

		::System::Void EGFCFCBHJJP(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_EGFCFCBHJJP_OFFSET))(this, a1, a2);
		}

		::System::Void EGFCFCBHJJP_1(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_EGFCFCBHJJP_1_OFFSET))(this, a1, a2);
		}

		::System::Void EGFCFCBHJJP_2(::System::Int32 a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_EGFCFCBHJJP_2_OFFSET))(this, a1, a2);
		}

		::System::Void EGFCFCBHJJP_3(::System::Int32 a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_EGFCFCBHJJP_3_OFFSET))(this, a1, a2);
		}

		::System::Void EGFCFCBHJJP_4(::System::Int32 a1, ::UnityEngine::Matrix4x4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_EGFCFCBHJJP_4_OFFSET))(this, a1, a2);
		}

		::System::Void EGFCFCBHJJP_5(::System::Int32 a1, ::UnityEngine::Texture* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_EGFCFCBHJJP_5_OFFSET))(this, a1, a2);
		}

		::System::Void EGFCFCBHJJP_6(::System::Int32 a1, ::UnityEngine::ComputeBuffer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_EGFCFCBHJJP_6_OFFSET))(this, a1, a2);
		}

		::System::Void EGFCFCBHJJP_7(::System::Int32 a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_EGFCFCBHJJP_7_OFFSET))(this, a1, a2);
		}

		::System::Void EGFCFCBHJJP_8(::System::Int32 a1, ::Il2CppArray<::System::Single>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_EGFCFCBHJJP_8_OFFSET))(this, a1, a2);
		}

		::System::Void EGFCFCBHJJP_9(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Vector4>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_EGFCFCBHJJP_9_OFFSET))(this, a1, a2);
		}

		::System::Void EGFCFCBHJJP_10(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Color>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_EGFCFCBHJJP_10_OFFSET))(this, a1, a2);
		}

		::System::Void EGFCFCBHJJP_11(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Matrix4x4>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_EGFCFCBHJJP_11_OFFSET))(this, a1, a2);
		}

		::System::Void EGFCFCBHJJP_12(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_EGFCFCBHJJP_12_OFFSET))(this, a1, a2);
		}

		::System::Void EGFCFCBHJJP_13(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_EGFCFCBHJJP_13_OFFSET))(this, a1, a2);
		}

		::System::Void EGFCFCBHJJP_14(::System::String* a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_EGFCFCBHJJP_14_OFFSET))(this, a1, a2);
		}

		::System::Void EGFCFCBHJJP_15(::System::String* a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_EGFCFCBHJJP_15_OFFSET))(this, a1, a2);
		}

		::System::Void EGFCFCBHJJP_16(::System::String* a1, ::UnityEngine::Matrix4x4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_EGFCFCBHJJP_16_OFFSET))(this, a1, a2);
		}

		::System::Void EGFCFCBHJJP_17(::System::String* a1, ::UnityEngine::Texture* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_EGFCFCBHJJP_17_OFFSET))(this, a1, a2);
		}

		::System::Void EGFCFCBHJJP_18(::System::String* a1, ::UnityEngine::ComputeBuffer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_EGFCFCBHJJP_18_OFFSET))(this, a1, a2);
		}

		::System::Void EGFCFCBHJJP_19(::System::String* a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_EGFCFCBHJJP_19_OFFSET))(this, a1, a2);
		}

		::System::Void EGFCFCBHJJP_20(::System::String* a1, ::Il2CppArray<::System::Single>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_EGFCFCBHJJP_20_OFFSET))(this, a1, a2);
		}

		::System::Void EGFCFCBHJJP_21(::System::String* a1, ::Il2CppArray<::UnityEngine::Vector4>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_EGFCFCBHJJP_21_OFFSET))(this, a1, a2);
		}

		::System::Void EGFCFCBHJJP_22(::System::String* a1, ::Il2CppArray<::UnityEngine::Color>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_EGFCFCBHJJP_22_OFFSET))(this, a1, a2);
		}

		::System::Void EGFCFCBHJJP_23(::System::String* a1, ::Il2CppArray<::UnityEngine::Matrix4x4>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_EGFCFCBHJJP_23_OFFSET))(this, a1, a2);
		}

		::System::Void KMFNLBBPOKK(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_KMFNLBBPOKK_OFFSET))(this, a1, a2);
		}

		::System::Void KMFNLBBPOKK_1(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_KMFNLBBPOKK_1_OFFSET))(this, a1, a2);
		}

		::System::Void KMFNLBBPOKK_2(::System::Int32 a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_KMFNLBBPOKK_2_OFFSET))(this, a1, a2);
		}

		::System::Void KMFNLBBPOKK_3(::System::Int32 a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_KMFNLBBPOKK_3_OFFSET))(this, a1, a2);
		}

		::System::Void KMFNLBBPOKK_4(::System::Int32 a1, ::UnityEngine::Matrix4x4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_KMFNLBBPOKK_4_OFFSET))(this, a1, a2);
		}

		::System::Void KMFNLBBPOKK_5(::System::Int32 a1, ::UnityEngine::Texture* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_KMFNLBBPOKK_5_OFFSET))(this, a1, a2);
		}

		::System::Void KMFNLBBPOKK_6(::System::Int32 a1, ::UnityEngine::ComputeBuffer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_KMFNLBBPOKK_6_OFFSET))(this, a1, a2);
		}

		::System::Void KMFNLBBPOKK_7(::System::Int32 a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_KMFNLBBPOKK_7_OFFSET))(this, a1, a2);
		}

		::System::Void KMFNLBBPOKK_8(::System::Int32 a1, ::Il2CppArray<::System::Single>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_KMFNLBBPOKK_8_OFFSET))(this, a1, a2);
		}

		::System::Void KMFNLBBPOKK_9(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Vector4>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_KMFNLBBPOKK_9_OFFSET))(this, a1, a2);
		}

		::System::Void KMFNLBBPOKK_10(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Color>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_KMFNLBBPOKK_10_OFFSET))(this, a1, a2);
		}

		::System::Void KMFNLBBPOKK_11(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Matrix4x4>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_KMFNLBBPOKK_11_OFFSET))(this, a1, a2);
		}

		::System::Void KMFNLBBPOKK_12(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_KMFNLBBPOKK_12_OFFSET))(this, a1, a2);
		}

		::System::Void KMFNLBBPOKK_13(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_KMFNLBBPOKK_13_OFFSET))(this, a1, a2);
		}

		::System::Void KMFNLBBPOKK_14(::System::String* a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_KMFNLBBPOKK_14_OFFSET))(this, a1, a2);
		}

		::System::Void KMFNLBBPOKK_15(::System::String* a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_KMFNLBBPOKK_15_OFFSET))(this, a1, a2);
		}

		::System::Void KMFNLBBPOKK_16(::System::String* a1, ::UnityEngine::Matrix4x4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_KMFNLBBPOKK_16_OFFSET))(this, a1, a2);
		}

		::System::Void KMFNLBBPOKK_17(::System::String* a1, ::UnityEngine::Texture* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_KMFNLBBPOKK_17_OFFSET))(this, a1, a2);
		}

		::System::Void KMFNLBBPOKK_18(::System::String* a1, ::UnityEngine::ComputeBuffer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_KMFNLBBPOKK_18_OFFSET))(this, a1, a2);
		}

		::System::Void KMFNLBBPOKK_19(::System::String* a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_KMFNLBBPOKK_19_OFFSET))(this, a1, a2);
		}

		::System::Void KMFNLBBPOKK_20(::System::String* a1, ::Il2CppArray<::System::Single>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_KMFNLBBPOKK_20_OFFSET))(this, a1, a2);
		}

		::System::Void KMFNLBBPOKK_21(::System::String* a1, ::Il2CppArray<::UnityEngine::Vector4>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_KMFNLBBPOKK_21_OFFSET))(this, a1, a2);
		}

		::System::Void KMFNLBBPOKK_22(::System::String* a1, ::Il2CppArray<::UnityEngine::Color>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_KMFNLBBPOKK_22_OFFSET))(this, a1, a2);
		}

		::System::Void KMFNLBBPOKK_23(::System::String* a1, ::Il2CppArray<::UnityEngine::Matrix4x4>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_KMFNLBBPOKK_23_OFFSET))(this, a1, a2);
		}

	};
}
