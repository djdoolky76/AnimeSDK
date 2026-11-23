#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/BE5668376C82998A.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace UnityEngine { class Font; }
namespace UnityEngine { class GUIContent; }
namespace UnityEngine { class GUIStyleState; }
namespace UnityEngine { class RectOffset; }

#define UNITYENGINE_GUISTYLE_CALCSIZE_OFFSET UNITYSDK_OFFSET(0x4198800)
#define UNITYENGINE_GUISTYLE_DRAW_1_OFFSET UNITYSDK_OFFSET(0x41989D0)
#define UNITYENGINE_GUISTYLE_DRAW_2_OFFSET UNITYSDK_OFFSET(0x4198860)
#define UNITYENGINE_GUISTYLE_DRAW_OFFSET UNITYSDK_OFFSET(0x4198940)
#define UNITYENGINE_GUISTYLE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x4198A70)
#define UNITYENGINE_GUISTYLE_GETRECTOFFSETPTR_OFFSET UNITYSDK_OFFSET(0x4198B40)
#define UNITYENGINE_GUISTYLE_GETSTYLESTATEPTR_OFFSET UNITYSDK_OFFSET(0x4198B80)
#define UNITYENGINE_GUISTYLE_GET_FIXEDHEIGHT_OFFSET UNITYSDK_OFFSET(0x41991C0)
#define UNITYENGINE_GUISTYLE_GET_FIXEDWIDTH_OFFSET UNITYSDK_OFFSET(0x4199200)
#define UNITYENGINE_GUISTYLE_GET_MARGIN_OFFSET UNITYSDK_OFFSET(0x4199240)
#define UNITYENGINE_GUISTYLE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x41992F0)
#define UNITYENGINE_GUISTYLE_GET_NONE_OFFSET UNITYSDK_OFFSET(0x4199350)
#define UNITYENGINE_GUISTYLE_GET_NORMAL_OFFSET UNITYSDK_OFFSET(0x4199400)
#define UNITYENGINE_GUISTYLE_GET_PADDING_OFFSET UNITYSDK_OFFSET(0x41994C0)
#define UNITYENGINE_GUISTYLE_GET_RAWNAME_OFFSET UNITYSDK_OFFSET(0x4199570)
#define UNITYENGINE_GUISTYLE_GET_STRETCHHEIGHT_OFFSET UNITYSDK_OFFSET(0x41995B0)
#define UNITYENGINE_GUISTYLE_GET_STRETCHWIDTH_OFFSET UNITYSDK_OFFSET(0x41995F0)
#define UNITYENGINE_GUISTYLE_INTERNAL_CALCSIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x4198BC0)
#define UNITYENGINE_GUISTYLE_INTERNAL_CALCSIZE_OFFSET UNITYSDK_OFFSET(0x4198800)
#define UNITYENGINE_GUISTYLE_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x4198C20)
#define UNITYENGINE_GUISTYLE_INTERNAL_DESTROY_OFFSET UNITYSDK_OFFSET(0x4198C60)
#define UNITYENGINE_GUISTYLE_INTERNAL_DRAW2_INJECTED_OFFSET UNITYSDK_OFFSET(0x4198CA0)
#define UNITYENGINE_GUISTYLE_INTERNAL_DRAW2_OFFSET UNITYSDK_OFFSET(0x4198D10)
#define UNITYENGINE_GUISTYLE_INTERNAL_DRAW_INJECTED_OFFSET UNITYSDK_OFFSET(0x4198D80)
#define UNITYENGINE_GUISTYLE_INTERNAL_DRAW_OFFSET UNITYSDK_OFFSET(0x4198E10)
#define UNITYENGINE_GUISTYLE_ISTOOLTIPACTIVE_OFFSET UNITYSDK_OFFSET(0x4198EA0)
#define UNITYENGINE_GUISTYLE_SETDEFAULTFONT_OFFSET UNITYSDK_OFFSET(0x4198EE0)
#define UNITYENGINE_GUISTYLE_SETMOUSETOOLTIP_INJECTED_OFFSET UNITYSDK_OFFSET(0x4198F20)
#define UNITYENGINE_GUISTYLE_SETMOUSETOOLTIP_OFFSET UNITYSDK_OFFSET(0x4198F70)
#define UNITYENGINE_GUISTYLE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x4199630)
#define UNITYENGINE_GUISTYLE_SET_RAWNAME_OFFSET UNITYSDK_OFFSET(0x4199680)
#define UNITYENGINE_GUISTYLE_SET_STRETCHHEIGHT_OFFSET UNITYSDK_OFFSET(0x41996D0)
#define UNITYENGINE_GUISTYLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x4198FF0)
#define UNITYENGINE_GUISTYLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x4199100)
#define UNITYENGINE_GUISTYLE__CTOR_OFFSET UNITYSDK_OFFSET(0x4199140)

namespace UnityEngine
{
	inline static constexpr unsigned int GUIStyle_TypeDefinitionIndex = 20117;

	class GUIStyle : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_showKeyboardFocus()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GUIStyle_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::UnityEngine::GUIStyle** StaticGet_s_None()
		{
			return (::UnityEngine::GUIStyle**)Il2CppClass::FromTypeDefinitionIndex(GUIStyle_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		::System::IntPtr m_Ptr; // 0x10
		::UnityEngine::GUIStyleState* m_Normal; // 0x18
		::UnityEngine::GUIStyleState* m_Hover; // 0x20
		::UnityEngine::GUIStyleState* m_Active; // 0x28
		::UnityEngine::GUIStyleState* m_Focused; // 0x30
		::UnityEngine::GUIStyleState* m_OnNormal; // 0x38
		::UnityEngine::GUIStyleState* m_OnHover; // 0x40
		::UnityEngine::GUIStyleState* m_OnActive; // 0x48
		::UnityEngine::GUIStyleState* m_OnFocused; // 0x50
		::UnityEngine::RectOffset* m_Border; // 0x58
		::UnityEngine::RectOffset* m_Padding; // 0x60
		::UnityEngine::RectOffset* m_Margin; // 0x68
		::UnityEngine::RectOffset* m_Overflow; // 0x70
		::System::String* m_Name; // 0x78

		static ::System::IntPtr Internal_Create(::UnityEngine::GUIStyle* BD8273AB04C4B760)
		{
			return ((::System::IntPtr(*)(::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_CREATE_OFFSET))(BD8273AB04C4B760);
		}

		::System::Void Internal_Draw2(::UnityEngine::BE5668376C82998A EB211B01816ACA79, ::UnityEngine::GUIContent* E0C0689B1CEBE48C, ::System::Int32 B6150DE37DAFBBDF, ::System::Boolean FD4B9321A52BDE48)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::BE5668376C82998A, ::UnityEngine::GUIContent*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_DRAW2_OFFSET))(this, EB211B01816ACA79, E0C0689B1CEBE48C, B6150DE37DAFBBDF, FD4B9321A52BDE48);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_FINALIZE_OFFSET))(this);
		}

		static ::UnityEngine::GUIStyle* get_none()
		{
			return ((::UnityEngine::GUIStyle*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_NONE_OFFSET))();
		}

		::System::Void Draw(::UnityEngine::BE5668376C82998A EB211B01816ACA79, ::UnityEngine::GUIContent* E0C0689B1CEBE48C, ::System::Boolean AC4FFDFADAD70B3B, ::System::Boolean EEF7C5726C67C6DA, ::System::Boolean FD4B9321A52BDE48, ::System::Boolean A4381C54CD1E837D)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::BE5668376C82998A, ::UnityEngine::GUIContent*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_DRAW_OFFSET))(this, EB211B01816ACA79, E0C0689B1CEBE48C, AC4FFDFADAD70B3B, EEF7C5726C67C6DA, FD4B9321A52BDE48, A4381C54CD1E837D);
		}

		::System::Void Internal_Draw_Injected(::UnityEngine::BE5668376C82998A& BC7C40A5A2D9F46F, ::UnityEngine::GUIContent* E0C0689B1CEBE48C, ::System::Boolean AC4FFDFADAD70B3B, ::System::Boolean EEF7C5726C67C6DA, ::System::Boolean FD4B9321A52BDE48, ::System::Boolean A4381C54CD1E837D)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::BE5668376C82998A&, ::UnityEngine::GUIContent*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_DRAW_INJECTED_OFFSET))(this, BC7C40A5A2D9F46F, E0C0689B1CEBE48C, AC4FFDFADAD70B3B, EEF7C5726C67C6DA, FD4B9321A52BDE48, A4381C54CD1E837D);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_NAME_OFFSET))(this);
		}

		::System::String* get_rawName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_RAWNAME_OFFSET))(this);
		}

		::System::Void Draw_1(::UnityEngine::BE5668376C82998A EB211B01816ACA79, ::UnityEngine::GUIContent* E0C0689B1CEBE48C, ::System::Int32 B6150DE37DAFBBDF, ::System::Boolean FD4B9321A52BDE48, ::System::Boolean F71C1A11E90172C3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::BE5668376C82998A, ::UnityEngine::GUIContent*, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_DRAW_1_OFFSET))(this, EB211B01816ACA79, E0C0689B1CEBE48C, B6150DE37DAFBBDF, FD4B9321A52BDE48, F71C1A11E90172C3);
		}

		::UnityEngine::Vector2 Internal_CalcSize(::UnityEngine::GUIContent* E0C0689B1CEBE48C)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::GUIContent*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_CALCSIZE_OFFSET))(this, E0C0689B1CEBE48C);
		}

		::System::Void set_rawName(::System::String* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_SET_RAWNAME_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::RectOffset* get_padding()
		{
			return ((::UnityEngine::RectOffset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_PADDING_OFFSET))(this);
		}

		::System::Boolean get_stretchWidth()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_STRETCHWIDTH_OFFSET))(this);
		}

		static ::System::Void SetMouseTooltip_Injected(::System::String* F7E513B6AB30F4DB, ::UnityEngine::BE5668376C82998A& BC7C40A5A2D9F46F)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::BE5668376C82998A&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_SETMOUSETOOLTIP_INJECTED_OFFSET))(F7E513B6AB30F4DB, BC7C40A5A2D9F46F);
		}

		static ::System::Void Internal_Destroy(::System::IntPtr BD8273AB04C4B760)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_DESTROY_OFFSET))(BD8273AB04C4B760);
		}

		::System::IntPtr GetRectOffsetPtr(::System::Int32 AA292D26F1CE96C4)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GETRECTOFFSETPTR_OFFSET))(this, AA292D26F1CE96C4);
		}

		::System::Void Draw_2(::UnityEngine::BE5668376C82998A EB211B01816ACA79, ::UnityEngine::GUIContent* E0C0689B1CEBE48C, ::System::Int32 A74A47232FA70ECF, ::System::Boolean AC4FFDFADAD70B3B, ::System::Boolean EEF7C5726C67C6DA, ::System::Boolean FD4B9321A52BDE48, ::System::Boolean A4381C54CD1E837D)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::BE5668376C82998A, ::UnityEngine::GUIContent*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_DRAW_2_OFFSET))(this, EB211B01816ACA79, E0C0689B1CEBE48C, A74A47232FA70ECF, AC4FFDFADAD70B3B, EEF7C5726C67C6DA, FD4B9321A52BDE48, A4381C54CD1E837D);
		}

		::System::Single get_fixedWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_FIXEDWIDTH_OFFSET))(this);
		}

		static ::System::Boolean IsTooltipActive(::System::String* F7E513B6AB30F4DB)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_ISTOOLTIPACTIVE_OFFSET))(F7E513B6AB30F4DB);
		}

		::UnityEngine::GUIStyleState* get_normal()
		{
			return ((::UnityEngine::GUIStyleState*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_NORMAL_OFFSET))(this);
		}

		::System::Void Internal_Draw2_Injected(::UnityEngine::BE5668376C82998A& EB211B01816ACA79, ::UnityEngine::GUIContent* E0C0689B1CEBE48C, ::System::Int32 B6150DE37DAFBBDF, ::System::Boolean FD4B9321A52BDE48)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::BE5668376C82998A&, ::UnityEngine::GUIContent*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_DRAW2_INJECTED_OFFSET))(this, EB211B01816ACA79, E0C0689B1CEBE48C, B6150DE37DAFBBDF, FD4B9321A52BDE48);
		}

		static ::System::Void SetDefaultFont(::UnityEngine::Font* B1DC954065577781)
		{
			return ((::System::Void(*)(::UnityEngine::Font*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_SETDEFAULTFONT_OFFSET))(B1DC954065577781);
		}

		::System::IntPtr GetStyleStatePtr(::System::Int32 AA292D26F1CE96C4)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GETSTYLESTATEPTR_OFFSET))(this, AA292D26F1CE96C4);
		}

		::UnityEngine::Vector2 CalcSize(::UnityEngine::GUIContent* E0C0689B1CEBE48C)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::GUIContent*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_CALCSIZE_OFFSET))(this, E0C0689B1CEBE48C);
		}

		static ::System::Void SetMouseTooltip(::System::String* F7E513B6AB30F4DB, ::UnityEngine::BE5668376C82998A BC7C40A5A2D9F46F)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::BE5668376C82998A))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_SETMOUSETOOLTIP_OFFSET))(F7E513B6AB30F4DB, BC7C40A5A2D9F46F);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE__CCTOR_OFFSET))();
		}

		::System::Void set_name(::System::String* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_SET_NAME_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_stretchHeight(::System::Boolean E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_SET_STRETCHHEIGHT_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void Internal_CalcSize_Injected(::UnityEngine::GUIContent* E0C0689B1CEBE48C, ::UnityEngine::Vector2& FEC8DC0392823C8D)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIContent*, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_CALCSIZE_INJECTED_OFFSET))(this, E0C0689B1CEBE48C, FEC8DC0392823C8D);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE__CTOR_OFFSET))(this);
		}

		::System::Void Internal_Draw(::UnityEngine::BE5668376C82998A BC7C40A5A2D9F46F, ::UnityEngine::GUIContent* E0C0689B1CEBE48C, ::System::Boolean AC4FFDFADAD70B3B, ::System::Boolean EEF7C5726C67C6DA, ::System::Boolean FD4B9321A52BDE48, ::System::Boolean A4381C54CD1E837D)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::BE5668376C82998A, ::UnityEngine::GUIContent*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_DRAW_OFFSET))(this, BC7C40A5A2D9F46F, E0C0689B1CEBE48C, AC4FFDFADAD70B3B, EEF7C5726C67C6DA, FD4B9321A52BDE48, A4381C54CD1E837D);
		}

		::System::Boolean get_stretchHeight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_STRETCHHEIGHT_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_TOSTRING_OFFSET))(this);
		}

		::UnityEngine::RectOffset* get_margin()
		{
			return ((::UnityEngine::RectOffset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_MARGIN_OFFSET))(this);
		}

		::System::Single get_fixedHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_FIXEDHEIGHT_OFFSET))(this);
		}
	};
}
