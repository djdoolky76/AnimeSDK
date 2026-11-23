#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EAE43032A3C5FAE8;
namespace System { class String; }

#define UNITYENGINE_RECTOFFSET_DESTROY_OFFSET UNITYSDK_OFFSET(0x413C900)
#define UNITYENGINE_RECTOFFSET_FINALIZE_OFFSET UNITYSDK_OFFSET(0x413C960)
#define UNITYENGINE_RECTOFFSET_GET_BOTTOM_OFFSET UNITYSDK_OFFSET(0x413D170)
#define UNITYENGINE_RECTOFFSET_GET_HORIZONTAL_OFFSET UNITYSDK_OFFSET(0x413D1B0)
#define UNITYENGINE_RECTOFFSET_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x413D1F0)
#define UNITYENGINE_RECTOFFSET_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x413D230)
#define UNITYENGINE_RECTOFFSET_GET_TOP_OFFSET UNITYSDK_OFFSET(0x413D270)
#define UNITYENGINE_RECTOFFSET_GET_VERTICAL_OFFSET UNITYSDK_OFFSET(0x413D2B0)
#define UNITYENGINE_RECTOFFSET_INTERNALCREATE_OFFSET UNITYSDK_OFFSET(0x413CA10)
#define UNITYENGINE_RECTOFFSET_INTERNALDESTROY_OFFSET UNITYSDK_OFFSET(0x413CA40)
#define UNITYENGINE_RECTOFFSET_SET_BOTTOM_OFFSET UNITYSDK_OFFSET(0x413D2F0)
#define UNITYENGINE_RECTOFFSET_SET_LEFT_OFFSET UNITYSDK_OFFSET(0x413D330)
#define UNITYENGINE_RECTOFFSET_SET_RIGHT_OFFSET UNITYSDK_OFFSET(0x413D370)
#define UNITYENGINE_RECTOFFSET_SET_TOP_OFFSET UNITYSDK_OFFSET(0x413D3B0)
#define UNITYENGINE_RECTOFFSET_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x413CDB0)
#define UNITYENGINE_RECTOFFSET_TOSTRING_OFFSET UNITYSDK_OFFSET(0x413CA80)
#define UNITYENGINE_RECTOFFSET__CTOR_1_OFFSET UNITYSDK_OFFSET(0x413D0E0)
#define UNITYENGINE_RECTOFFSET__CTOR_OFFSET UNITYSDK_OFFSET(0x413D130)

namespace UnityEngine
{
	inline static constexpr unsigned int RectOffset_TypeDefinitionIndex = 17095;

	class RectOffset : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10
		::System::Object* m_SourceStyle; // 0x18

		::System::Int32 get_bottom()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_GET_BOTTOM_OFFSET))(this);
		}

		static ::System::Void InternalDestroy(::System::IntPtr B03018C24D85EDA4)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_INTERNALDESTROY_OFFSET))(B03018C24D85EDA4);
		}

		::System::Int32 get_top()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_GET_TOP_OFFSET))(this);
		}

		static ::System::IntPtr InternalCreate()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_INTERNALCREATE_OFFSET))();
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_TOSTRING_OFFSET))(this);
		}

		::System::Int32 get_right()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_GET_RIGHT_OFFSET))(this);
		}

		::System::Void set_top(::System::Int32 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_SET_TOP_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_DESTROY_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET__CTOR_OFFSET))(this);
		}

		::System::Void set_bottom(::System::Int32 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_SET_BOTTOM_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_FINALIZE_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Object* B28B39886E9F3E63, ::System::IntPtr AFE8F10692F5139F)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET__CTOR_1_OFFSET))(this, B28B39886E9F3E63, AFE8F10692F5139F);
		}

		::System::Void set_right(::System::Int32 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_SET_RIGHT_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::String* ToString_1(::System::String* F1B74DA73881CF9B, ::EAE43032A3C5FAE8* F8DAD9E0E63F5FE9)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::EAE43032A3C5FAE8*))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_TOSTRING_1_OFFSET))(this, F1B74DA73881CF9B, F8DAD9E0E63F5FE9);
		}

		::System::Int32 get_left()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_GET_LEFT_OFFSET))(this);
		}

		::System::Void set_left(::System::Int32 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_SET_LEFT_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Int32 get_horizontal()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_GET_HORIZONTAL_OFFSET))(this);
		}

		::System::Int32 get_vertical()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_GET_VERTICAL_OFFSET))(this);
		}
	};
}
