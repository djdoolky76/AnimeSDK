#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class DKJPADJLJKI;
namespace RPG::Client { class RPGAnimationEvent; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class Text; }

#define GKNJNGAHDDM_AKBIHLGJHPP_OFFSET UNITYSDK_OFFSET(0x15A996E0)
#define GKNJNGAHDDM_CAIIEEGCBPK_OFFSET UNITYSDK_OFFSET(0x15A999C0)
#define GKNJNGAHDDM_CTOR_OFFSET UNITYSDK_OFFSET(0x15A99D10)
#define GKNJNGAHDDM_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x15A99460)
#define GKNJNGAHDDM_GEPBMMECGLA_OFFSET UNITYSDK_OFFSET(0x15A99A40)
#define GKNJNGAHDDM_GLLNFHKEJNH_OFFSET UNITYSDK_OFFSET(0x15A99760)
#define GKNJNGAHDDM_KJLMEEGNDIH_OFFSET UNITYSDK_OFFSET(0x15A994B0)
#define GKNJNGAHDDM_KPOIAEHMHAO_OFFSET UNITYSDK_OFFSET(0x15A99CA0)
#define GKNJNGAHDDM_LDHCMDCFEBH_OFFSET UNITYSDK_OFFSET(0x15A99850)
#define GKNJNGAHDDM_LMPHIKNNFIO_OFFSET UNITYSDK_OFFSET(0x15A995F0)
#define GKNJNGAHDDM_NEDKFFOPPPC_OFFSET UNITYSDK_OFFSET(0x15A99AC0)
#define GKNJNGAHDDM_PPNLGMDOEHF_OFFSET UNITYSDK_OFFSET(0x15A997D0)
#define GKNJNGAHDDM__ONBIND_OFFSET UNITYSDK_OFFSET(0x15A98C90)

inline static constexpr unsigned int GKNJNGAHDDM_TypeDefinitionIndex = 71991;

	class GKNJNGAHDDM : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Text* DEPOGCNOJKB; // 0x60
		::RPG::Client::RPGAnimationEvent* ENOOGMFHCCL; // 0x68
		::UnityEngine::UI::Text* CFDCENPLKLC; // 0x70
		::System::Collections::Generic::List_1<::DKJPADJLJKI*>* GANFMEPNBJK; // 0x78
		::System::Boolean MFHPBAMPAJA; // 0x80
		::System::Byte _padding0[0x3];
		::System::Int32 CALNLFBNMPM; // 0x84
		::System::Int32 JAMGNEBNMKE; // 0x88
		::System::Int32 KAPIPPLOKPD; // 0x8C
		// static const ::System::Object LCNOBBPCJBA; // 0x0
		// static const ::System::String* CKKKHIOJLKP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNJNGAHDDM_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNJNGAHDDM__ONBIND_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNJNGAHDDM_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void LMPHIKNNFIO(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GKNJNGAHDDM_LMPHIKNNFIO_OFFSET))(this, a1);
		}

		::System::Void GLLNFHKEJNH(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GKNJNGAHDDM_GLLNFHKEJNH_OFFSET))(this, a1);
		}

		::System::Void KJLMEEGNDIH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GKNJNGAHDDM_KJLMEEGNDIH_OFFSET))(this, a1);
		}

		::System::Void LDHCMDCFEBH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNJNGAHDDM_LDHCMDCFEBH_OFFSET))(this);
		}

		::System::Void CAIIEEGCBPK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GKNJNGAHDDM_CAIIEEGCBPK_OFFSET))(this, a1);
		}

		::System::Void GEPBMMECGLA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNJNGAHDDM_GEPBMMECGLA_OFFSET))(this);
		}

		::System::Void NEDKFFOPPPC(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + GKNJNGAHDDM_NEDKFFOPPPC_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void PPNLGMDOEHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNJNGAHDDM_PPNLGMDOEHF_OFFSET))(this);
		}

		::System::Void AKBIHLGJHPP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNJNGAHDDM_AKBIHLGJHPP_OFFSET))(this);
		}

		::System::Void KPOIAEHMHAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNJNGAHDDM_KPOIAEHMHAO_OFFSET))(this);
		}

	};
