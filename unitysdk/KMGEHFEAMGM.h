#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/AIMBCMECFFB.h"
class BBDFGMBNDGD;
class CNNDFIIBOJC;
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define KMGEHFEAMGM_ABNADCCOION_OFFSET UNITYSDK_OFFSET(0xB54DB50)
#define KMGEHFEAMGM_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB54E0E0)
#define KMGEHFEAMGM_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB54E220)
#define KMGEHFEAMGM_CTOR_OFFSET UNITYSDK_OFFSET(0xB54E340)
#define KMGEHFEAMGM_DGKPJEIOLKE_OFFSET UNITYSDK_OFFSET(0xB54DF10)
#define KMGEHFEAMGM_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xB54DAE0)
#define KMGEHFEAMGM_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xB54DA80)
#define KMGEHFEAMGM_GET_TRANS_OFFSET UNITYSDK_OFFSET(0xB54DAA0)
#define KMGEHFEAMGM_HBEGAAOJOMK_OFFSET UNITYSDK_OFFSET(0xB54DD10)
#define KMGEHFEAMGM_PFGLOEELJOB_OFFSET UNITYSDK_OFFSET(0xB54DD60)
#define KMGEHFEAMGM_PLGEGHCLHHI_OFFSET UNITYSDK_OFFSET(0xB54DE10)
#define KMGEHFEAMGM_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xB54DA90)
#define KMGEHFEAMGM__ONBIND_OFFSET UNITYSDK_OFFSET(0xB54D9F0)

inline static constexpr unsigned int KMGEHFEAMGM_TypeDefinitionIndex = 72215;

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

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMGEHFEAMGM_EKGCGIDIFJJ_OFFSET))(this);
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
