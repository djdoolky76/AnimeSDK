#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Effect_MaterialPropertySetter_CharaEffectMatBlockType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture; }

#define RPG_CLIENT_EFFECT_MATERIALPROPERTYSETTER_BEOHLCGKIJJ_OFFSET UNITYSDK_OFFSET(0xCD42B50)
#define RPG_CLIENT_EFFECT_MATERIALPROPERTYSETTER_CTOR_OFFSET UNITYSDK_OFFSET(0xCD435F0)
#define RPG_CLIENT_EFFECT_MATERIALPROPERTYSETTER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xCD42AE0)
#define RPG_CLIENT_EFFECT_MATERIALPROPERTYSETTER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xCD42A30)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_MaterialPropertySetter_TypeDefinitionIndex = 70511;

	class Effect_MaterialPropertySetter : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::UnityEngine::Material*>* materials; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* matEnableID; // 0x20
		::System::Boolean OnlyFirstUpdate; // 0x28
		::System::Byte _padding0[0x3];
		::System::Int32 KeywordNum; // 0x2C
		::System::String* KeywordName1; // 0x30
		::System::Boolean KeywordState1; // 0x38
		::System::Byte _padding1[0x7];
		::System::String* KeywordName2; // 0x40
		::System::Boolean KeywordState2; // 0x48
		::System::Byte _padding2[0x7];
		::System::String* KeywordName3; // 0x50
		::System::Boolean KeywordState3; // 0x58
		::System::Byte _padding3[0x3];
		::RPG::Client::Effect_MaterialPropertySetter_CharaEffectMatBlockType DataType; // 0x5C
		::System::String* PropertyName; // 0x60
		::System::Int32 IntValue; // 0x68
		::System::Single FloatData; // 0x6C
		::UnityEngine::Color ColorData; // 0x70
		::UnityEngine::Vector4 VectorData; // 0x80
		::System::Boolean Toggle_TexData; // 0x90
		::System::Byte _padding4[0x7];
		::UnityEngine::Texture* TexData; // 0x98
		::UnityEngine::Renderer* OMPBEGMFNGM; // 0xA0
		::System::Boolean FDFLPGLNFKE; // 0xA8
		::System::Boolean FJFHCLHPNNG; // 0xA9
		::System::Byte _padding5[0x6];
		::Il2CppArray<::UnityEngine::Texture*>* GGOFFDKMJAG; // 0xB0
		// static const ::System::Object DHMOCLKMBNF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_MATERIALPROPERTYSETTER_CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_MATERIALPROPERTYSETTER_ONENABLE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_MATERIALPROPERTYSETTER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void BEOHLCGKIJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_MATERIALPROPERTYSETTER_BEOHLCGKIJJ_OFFSET))(this);
		}

	};
}
