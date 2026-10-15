#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/FilterMode.h"
#include "unitysdk/UnityEngine/RenderTextureFormat.h"
#include "unitysdk/UnityEngine/RenderTextureReadWrite.h"
#include "unitysdk/UnityEngine/TextureWrapMode.h"
class IBCIBKEIBOE;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class RenderTexture; }

#define IBCIBKEIBOE_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x15E2C3C0)
#define IBCIBKEIBOE_CCTOR_OFFSET UNITYSDK_OFFSET(0x15E2C450)
#define IBCIBKEIBOE_CHHAJHKKGNG_OFFSET UNITYSDK_OFFSET(0x15E2C2C0)
#define IBCIBKEIBOE_CTOR_OFFSET UNITYSDK_OFFSET(0x15E2C410)
#define IBCIBKEIBOE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E2BE60)
#define IBCIBKEIBOE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x15E2C3A0)
#define IBCIBKEIBOE_HDPBMLFMLNC_OFFSET UNITYSDK_OFFSET(0x15E2BFE0)
#define IBCIBKEIBOE_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0x15E2BF80)
#define IBCIBKEIBOE_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15E2B8D0)
#define IBCIBKEIBOE_NKAIBEJHEKH_OFFSET UNITYSDK_OFFSET(0x15E2C1C0)
#define IBCIBKEIBOE_OBNBEEJBLAI_OFFSET UNITYSDK_OFFSET(0x15E2C030)
#define IBCIBKEIBOE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x15E2C3B0)

inline static constexpr unsigned int IBCIBKEIBOE_TypeDefinitionIndex = 70174;

	class IBCIBKEIBOE : public ::System::Object
	{
	public:
		::System::Action* HNONCBFKOOJ; // 0x10
		::UnityEngine::RenderTexture* _Value_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Camera*>* GCJFGIIAPGG; // 0x20
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::RenderTextureFormat, ::Il2CppArray<::UnityEngine::RenderTextureFormat>*>** StaticGet_FBBGOHBOFAP()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::RenderTextureFormat, ::Il2CppArray<::UnityEngine::RenderTextureFormat>*>**)UnitySDK::FromName("", "IBCIBKEIBOE")->GetStaticField(0x47580);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBCIBKEIBOE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBCIBKEIBOE_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::RenderTextureFormat a4, ::UnityEngine::RenderTextureReadWrite a5, ::System::Int32 a6, ::System::String* a7, ::UnityEngine::TextureWrapMode a8, ::UnityEngine::FilterMode a9)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat, ::UnityEngine::RenderTextureReadWrite, ::System::Int32, ::System::String*, ::UnityEngine::TextureWrapMode, ::UnityEngine::FilterMode))((::PBYTE)hIl2Cpp + IBCIBKEIBOE_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBCIBKEIBOE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean KKKIONIDKFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IBCIBKEIBOE_KKKIONIDKFA_OFFSET))(this);
		}

		::System::Boolean HDPBMLFMLNC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IBCIBKEIBOE_HDPBMLFMLNC_OFFSET))(this);
		}

		::System::Boolean OBNBEEJBLAI(::UnityEngine::Camera* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + IBCIBKEIBOE_OBNBEEJBLAI_OFFSET))(this, a1);
		}

		::System::Boolean NKAIBEJHEKH(::UnityEngine::Camera* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + IBCIBKEIBOE_NKAIBEJHEKH_OFFSET))(this, a1);
		}

		::System::Void CHHAJHKKGNG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBCIBKEIBOE_CHHAJHKKGNG_OFFSET))(this);
		}

		::UnityEngine::RenderTexture* get_Value()
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBCIBKEIBOE_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::UnityEngine::RenderTexture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + IBCIBKEIBOE_SET_VALUE_OFFSET))(this, a1);
		}

		static ::UnityEngine::RenderTexture* BBNJCKPKPDN(::IBCIBKEIBOE* a1)
		{
			return ((::UnityEngine::RenderTexture*(*)(::IBCIBKEIBOE*))((::PBYTE)hIl2Cpp + IBCIBKEIBOE_BBNJCKPKPDN_OFFSET))(a1);
		}

	};
