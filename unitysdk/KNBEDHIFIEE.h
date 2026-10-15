#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UIVertex.h"
namespace System { class Object; }
namespace UnityEngine::UI { class VertexHelper; }

#define KNBEDHIFIEE_CCTOR_OFFSET UNITYSDK_OFFSET(0xB578C10)
#define KNBEDHIFIEE_CTOR_OFFSET UNITYSDK_OFFSET(0xB578BD0)
#define KNBEDHIFIEE_GET_VERTEXHELPER_OFFSET UNITYSDK_OFFSET(0xB578850)
#define KNBEDHIFIEE_GMIKIGIODJD_OFFSET UNITYSDK_OFFSET(0xB578870)
#define KNBEDHIFIEE_KIHMEBLNKBI_OFFSET UNITYSDK_OFFSET(0xB578A10)
#define KNBEDHIFIEE_SET_VERTEXHELPER_OFFSET UNITYSDK_OFFSET(0xB578860)

	class KNBEDHIFIEE : public ::System::Object
	{
	public:
		::UnityEngine::UI::VertexHelper* _VertexHelper_k__BackingField; // 0x10
		::Il2CppArray<::UnityEngine::UIVertex>* IPACDKEBGIJ; // 0x18
		static ::System::Int32* StaticGet_LKLHOEPPMOK()
		{
			return (::System::Int32*)UnitySDK::FromName("", "KNBEDHIFIEE")->GetStaticField(0x14AE0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBEDHIFIEE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNBEDHIFIEE_CCTOR_OFFSET))();
		}

		::UnityEngine::UI::VertexHelper* get_VertexHelper()
		{
			return ((::UnityEngine::UI::VertexHelper*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBEDHIFIEE_GET_VERTEXHELPER_OFFSET))(this);
		}

		::System::Void set_VertexHelper(::UnityEngine::UI::VertexHelper* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + KNBEDHIFIEE_SET_VERTEXHELPER_OFFSET))(this, a1);
		}

		::System::Boolean GMIKIGIODJD(::System::Int32 a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + KNBEDHIFIEE_GMIKIGIODJD_OFFSET))(this, a1, a2);
		}

		::System::Void KIHMEBLNKBI(::System::Int32 a1, ::Il2CppArray<::UnityEngine::UIVertex>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::UIVertex>*))((::PBYTE)hIl2Cpp + KNBEDHIFIEE_KIHMEBLNKBI_OFFSET))(this, a1, a2);
		}

	};
