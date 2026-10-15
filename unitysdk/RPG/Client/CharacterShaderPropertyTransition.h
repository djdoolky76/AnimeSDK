#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseShaderPropertyTransition.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define RPG_CLIENT_CHARACTERSHADERPROPERTYTRANSITION_CCTOR_OFFSET UNITYSDK_OFFSET(0xCA1BC50)
#define RPG_CLIENT_CHARACTERSHADERPROPERTYTRANSITION_CFEHCBDCHBG_OFFSET UNITYSDK_OFFSET(0xCA1B930)
#define RPG_CLIENT_CHARACTERSHADERPROPERTYTRANSITION_CTOR_OFFSET UNITYSDK_OFFSET(0xCA1BC00)
#define RPG_CLIENT_CHARACTERSHADERPROPERTYTRANSITION_DCGFEFBLNJA_OFFSET UNITYSDK_OFFSET(0xCA1B890)
#define RPG_CLIENT_CHARACTERSHADERPROPERTYTRANSITION_DEJKACALGMJ_OFFSET UNITYSDK_OFFSET(0xCA1B5D0)
#define RPG_CLIENT_CHARACTERSHADERPROPERTYTRANSITION_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC9CDD50)
#define RPG_CLIENT_CHARACTERSHADERPROPERTYTRANSITION_DISSOLVETO_OFFSET UNITYSDK_OFFSET(0xC9CDE60)
#define RPG_CLIENT_CHARACTERSHADERPROPERTYTRANSITION_GETCHARWPOS_OFFSET UNITYSDK_OFFSET(0xC9CD9A0)
#define RPG_CLIENT_CHARACTERSHADERPROPERTYTRANSITION_GETCURRENTDISSOLVERATE_OFFSET UNITYSDK_OFFSET(0xCA1BBB0)
#define RPG_CLIENT_CHARACTERSHADERPROPERTYTRANSITION_HCOPCFALGCC_OFFSET UNITYSDK_OFFSET(0xCA1B8E0)
#define RPG_CLIENT_CHARACTERSHADERPROPERTYTRANSITION_JFHLODEIGCE_OFFSET UNITYSDK_OFFSET(0xCA1B4B0)
#define RPG_CLIENT_CHARACTERSHADERPROPERTYTRANSITION_KKFNKPDNEAC_OFFSET UNITYSDK_OFFSET(0xCA1B980)
#define RPG_CLIENT_CHARACTERSHADERPROPERTYTRANSITION_LATETICK_OFFSET UNITYSDK_OFFSET(0xCA1B6D0)
#define RPG_CLIENT_CHARACTERSHADERPROPERTYTRANSITION_LJPGBALPNPJ_OFFSET UNITYSDK_OFFSET(0xCA1BB10)
#define RPG_CLIENT_CHARACTERSHADERPROPERTYTRANSITION_MCDCGOMELLG_OFFSET UNITYSDK_OFFSET(0xCA1B750)
#define RPG_CLIENT_CHARACTERSHADERPROPERTYTRANSITION_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xCA1B300)
#define RPG_CLIENT_CHARACTERSHADERPROPERTYTRANSITION_ONREFRESHMATERIALS_OFFSET UNITYSDK_OFFSET(0xCA1B400)
#define RPG_CLIENT_CHARACTERSHADERPROPERTYTRANSITION_RESET_OFFSET UNITYSDK_OFFSET(0xC9CDA80)
#define RPG_CLIENT_CHARACTERSHADERPROPERTYTRANSITION_SETCHARACTEROUTLINESCALE_OFFSET UNITYSDK_OFFSET(0xCA1B0C0)
#define RPG_CLIENT_CHARACTERSHADERPROPERTYTRANSITION_SETCHARHEIGHT_OFFSET UNITYSDK_OFFSET(0xC9CD7A0)
#define RPG_CLIENT_CHARACTERSHADERPROPERTYTRANSITION_SETCHARWPOS_OFFSET UNITYSDK_OFFSET(0xC9CD840)
#define RPG_CLIENT_CHARACTERSHADERPROPERTYTRANSITION_SETSCENECONTRASTENABLE_OFFSET UNITYSDK_OFFSET(0xC9CD710)
#define RPG_CLIENT_CHARACTERSHADERPROPERTYTRANSITION_SETUPDATECHARWPOSBYSMRBOUNDS_OFFSET UNITYSDK_OFFSET(0xC9CDA20)
#define RPG_CLIENT_CHARACTERSHADERPROPERTYTRANSITION_START_OFFSET UNITYSDK_OFFSET(0xCA1B1D0)

namespace RPG::Client
{
	inline static constexpr unsigned int CharacterShaderPropertyTransition_TypeDefinitionIndex = 68855;

	class CharacterShaderPropertyTransition : public ::RPG::Client::BaseShaderPropertyTransition
	{
	public:
		::UnityEngine::Vector4 _CharPos; // 0x78
		::System::Single JHKIBNJMJMC; // 0x88
		::System::Single JLDADOGEFDN; // 0x8C
		::System::Collections::IEnumerator* PBEBKKALJED; // 0x90
		::System::Boolean IJDGGMGGHAB; // 0x98
		::System::Byte _padding0[0x7];
		::UnityEngine::SkinnedMeshRenderer* HMDJGLCAKLJ; // 0xA0
		::System::Single LHGGJFKEGDA; // 0xA8
		static ::System::Int32* StaticGet_PropertyIDCharaWorldSpaceOffset()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterShaderPropertyTransition")->GetStaticField(0x15310);
		}

		static ::System::Int32* StaticGet_PropertyIDCharHeight()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterShaderPropertyTransition")->GetStaticField(0x15314);
		}

		static ::System::Int32* StaticGet_PropertyIDIsMonster()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterShaderPropertyTransition")->GetStaticField(0x15318);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERSHADERPROPERTYTRANSITION_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERSHADERPROPERTYTRANSITION_CCTOR_OFFSET))();
		}

		::System::Void SetSceneContrastEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERSHADERPROPERTYTRANSITION_SETSCENECONTRASTENABLE_OFFSET))(this, a1);
		}

		::System::Void SetCharHeight(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERSHADERPROPERTYTRANSITION_SETCHARHEIGHT_OFFSET))(this, a1);
		}

		::System::Void SetCharWPos(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERSHADERPROPERTYTRANSITION_SETCHARWPOS_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetCharWPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERSHADERPROPERTYTRANSITION_GETCHARWPOS_OFFSET))(this);
		}

		::System::Void SetUpdateCharWPosBySMRBounds(::System::Boolean a1, ::UnityEngine::SkinnedMeshRenderer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::SkinnedMeshRenderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERSHADERPROPERTYTRANSITION_SETUPDATECHARWPOSBYSMRBOUNDS_OFFSET))(this, a1, a2);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERSHADERPROPERTYTRANSITION_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERSHADERPROPERTYTRANSITION_DISPOSE_OFFSET))(this);
		}

		::System::Void DissolveTo(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERSHADERPROPERTYTRANSITION_DISSOLVETO_OFFSET))(this, a1);
		}

		::System::Void SetCharacterOutlineScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERSHADERPROPERTYTRANSITION_SETCHARACTEROUTLINESCALE_OFFSET))(this, a1);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERSHADERPROPERTYTRANSITION_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERSHADERPROPERTYTRANSITION_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnRefreshMaterials()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERSHADERPROPERTYTRANSITION_ONREFRESHMATERIALS_OFFSET))(this);
		}

		::System::Void LateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERSHADERPROPERTYTRANSITION_LATETICK_OFFSET))(this, a1);
		}

		::System::Void DCGFEFBLNJA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERSHADERPROPERTYTRANSITION_DCGFEFBLNJA_OFFSET))(this, a1);
		}

		::System::Void HCOPCFALGCC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERSHADERPROPERTYTRANSITION_HCOPCFALGCC_OFFSET))(this, a1);
		}

		::System::Void CFEHCBDCHBG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERSHADERPROPERTYTRANSITION_CFEHCBDCHBG_OFFSET))(this);
		}

		::System::Void DEJKACALGMJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERSHADERPROPERTYTRANSITION_DEJKACALGMJ_OFFSET))(this);
		}

		::System::Boolean MCDCGOMELLG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERSHADERPROPERTYTRANSITION_MCDCGOMELLG_OFFSET))(this);
		}

		::System::Boolean JFHLODEIGCE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERSHADERPROPERTYTRANSITION_JFHLODEIGCE_OFFSET))(this);
		}

		::System::Void KKFNKPDNEAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERSHADERPROPERTYTRANSITION_KKFNKPDNEAC_OFFSET))(this);
		}

		::System::Collections::IEnumerator* LJPGBALPNPJ(::System::Single a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERSHADERPROPERTYTRANSITION_LJPGBALPNPJ_OFFSET))(this, a1);
		}

		::System::Single GetCurrentDissolveRate()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERSHADERPROPERTYTRANSITION_GETCURRENTDISSOLVERATE_OFFSET))(this);
		}

	};
}
