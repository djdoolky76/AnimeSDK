#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace RPG::Client { class MonoInControlButton; }
namespace RPG::GameCore { class LevelDataComponent; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define BDDIPLIPPOI_CTOR_OFFSET UNITYSDK_OFFSET(0x162F2B70)
#define BDDIPLIPPOI_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x162F22A0)
#define BDDIPLIPPOI_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x162F2520)
#define BDDIPLIPPOI_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x162F2190)
#define BDDIPLIPPOI_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x162F21B0)
#define BDDIPLIPPOI_JJBGNJFCHPL_OFFSET UNITYSDK_OFFSET(0x162F21F0)
#define BDDIPLIPPOI_NEOFNEBLKKL_OFFSET UNITYSDK_OFFSET(0x162F25E0)
#define BDDIPLIPPOI_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0x162F23B0)
#define BDDIPLIPPOI_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x162F21A0)
#define BDDIPLIPPOI__ONBIND_OFFSET UNITYSDK_OFFSET(0x162F20D0)

inline static constexpr unsigned int BDDIPLIPPOI_TypeDefinitionIndex = 72360;

	class BDDIPLIPPOI : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Text* GEPFFDDHPAI; // 0x60
		::RPG::Client::MonoInControlButton* OKPAHCBDGKF; // 0x68
		::UnityEngine::UI::Button* PFBLCICMBBK; // 0x70
		::RPG::GameCore::LevelDataComponent* OOGADIKBBBA; // 0x78
		::System::Int32 _Index_k__BackingField; // 0x80
		::System::Boolean AKBPNMEFGAO; // 0x84
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

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDIPLIPPOI_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDIPLIPPOI_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void NEOFNEBLKKL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BDDIPLIPPOI_NEOFNEBLKKL_OFFSET))(this, a1);
		}

	};
