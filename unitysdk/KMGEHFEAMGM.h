#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/AIMBCMECFFB.h"
class BBDFGMBNDGD;
class CNNDFIIBOJC;
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define KMGEHFEAMGM_ABNADCCOION_OFFSET UNITYSDK_OFFSET(0xBD9FEC0)
#define KMGEHFEAMGM_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xBDA0450)
#define KMGEHFEAMGM_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xBDA0590)
#define KMGEHFEAMGM_CTOR_OFFSET UNITYSDK_OFFSET(0xBDA06B0)
#define KMGEHFEAMGM_DGKPJEIOLKE_OFFSET UNITYSDK_OFFSET(0xBDA0280)
#define KMGEHFEAMGM_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xBD9FDF0)
#define KMGEHFEAMGM_GET_TRANS_OFFSET UNITYSDK_OFFSET(0xBD9FE10)
#define KMGEHFEAMGM_HBEGAAOJOMK_OFFSET UNITYSDK_OFFSET(0xBDA0080)
#define KMGEHFEAMGM_PFGLOEELJOB_OFFSET UNITYSDK_OFFSET(0xBDA00D0)
#define KMGEHFEAMGM_PLGEGHCLHHI_OFFSET UNITYSDK_OFFSET(0xBDA0180)
#define KMGEHFEAMGM_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xBD9FE00)
#define KMGEHFEAMGM__ONBIND_OFFSET UNITYSDK_OFFSET(0xBD9FD60)
#define KMGEHFEAMGM__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xBD9FE50)

inline static constexpr unsigned int KMGEHFEAMGM_TypeDefinitionIndex = 74283;

	class KMGEHFEAMGM : public ::FMPCODLIOLG
	{
	public:
		::CNNDFIIBOJC* BEDONHKFKJK; // 0x60
		::System::Int32 _Index_k__BackingField; // 0x68
		// static const ::System::String* DJCBDJMACFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMGEHFEAMGM_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMGEHFEAMGM__ONBIND_OFFSET))(this);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMGEHFEAMGM_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KMGEHFEAMGM_SET_INDEX_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_Trans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMGEHFEAMGM_GET_TRANS_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMGEHFEAMGM__SETUPVIEW_OFFSET))(this);
		}

		::System::Void HBEGAAOJOMK(::BBDFGMBNDGD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BBDFGMBNDGD*))((::PBYTE)hIl2Cpp + KMGEHFEAMGM_HBEGAAOJOMK_OFFSET))(this, a1);
		}

		::System::Void PFGLOEELJOB(::AIMBCMECFFB a1)
		{
			return ((::System::Void(*)(::PVOID, ::AIMBCMECFFB))((::PBYTE)hIl2Cpp + KMGEHFEAMGM_PFGLOEELJOB_OFFSET))(this, a1);
		}

		::System::Void ABNADCCOION()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMGEHFEAMGM_ABNADCCOION_OFFSET))(this);
		}

		::System::Void PLGEGHCLHHI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KMGEHFEAMGM_PLGEGHCLHHI_OFFSET))(this, a1);
		}

		::System::Void DGKPJEIOLKE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KMGEHFEAMGM_DGKPJEIOLKE_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMGEHFEAMGM_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMGEHFEAMGM_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
