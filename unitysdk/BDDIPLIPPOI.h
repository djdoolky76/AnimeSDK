#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace RPG::Client { class MonoInControlButton; }
namespace RPG::GameCore { class LevelDataComponent; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define BDDIPLIPPOI_CTOR_OFFSET UNITYSDK_OFFSET(0x19D8FD40)
#define BDDIPLIPPOI_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x19D8F470)
#define BDDIPLIPPOI_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x19D8F360)
#define BDDIPLIPPOI_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x19D8F380)
#define BDDIPLIPPOI_JJBGNJFCHPL_OFFSET UNITYSDK_OFFSET(0x19D8F3C0)
#define BDDIPLIPPOI_NEOFNEBLKKL_OFFSET UNITYSDK_OFFSET(0x19D8F7B0)
#define BDDIPLIPPOI_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x19D8F370)
#define BDDIPLIPPOI__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x19D8F580)
#define BDDIPLIPPOI__ONBIND_OFFSET UNITYSDK_OFFSET(0x19D8F170)
#define BDDIPLIPPOI__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x19D8F6F0)

inline static constexpr unsigned int BDDIPLIPPOI_TypeDefinitionIndex = 74438;

	class BDDIPLIPPOI : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Button* PFBLCICMBBK; // 0x60
		::RPG::GameCore::LevelDataComponent* OOGADIKBBBA; // 0x68
		::RPG::Client::MonoInControlButton* OKPAHCBDGKF; // 0x70
		::UnityEngine::UI::Text* GEPFFDDHPAI; // 0x78
		::System::Boolean AKBPNMEFGAO; // 0x80
		::System::Byte _padding0[0x3];
		::System::Int32 _Index_k__BackingField; // 0x84
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::String* DFAIPLJPCCL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDIPLIPPOI_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDIPLIPPOI__ONBIND_OFFSET))(this);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDIPLIPPOI_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BDDIPLIPPOI_SET_INDEX_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_Trans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDIPLIPPOI_GET_TRANS_OFFSET))(this);
		}

		::System::Void JJBGNJFCHPL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BDDIPLIPPOI_JJBGNJFCHPL_OFFSET))(this, a1);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDIPLIPPOI_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDIPLIPPOI__INITVARONCE_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDIPLIPPOI__SETUPVIEW_OFFSET))(this);
		}

		::System::Void NEOFNEBLKKL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BDDIPLIPPOI_NEOFNEBLKKL_OFFSET))(this, a1);
		}

	};
