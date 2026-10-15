#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace RPG::GameCore { class BattleInstance; }
namespace System { class Object; }
namespace UnityEngine { class Animation; }

#define OMEOAONBDBP_ACAOANMOOJI_OFFSET UNITYSDK_OFFSET(0xBF1D730)
#define OMEOAONBDBP_AGNLBPEBLCG_OFFSET UNITYSDK_OFFSET(0xBF1D7B0)
#define OMEOAONBDBP_BHBCLBBOPFL_OFFSET UNITYSDK_OFFSET(0xBF1DF00)
#define OMEOAONBDBP_BMKEIONMBBI_OFFSET UNITYSDK_OFFSET(0xBF1DC20)
#define OMEOAONBDBP_CTOR_OFFSET UNITYSDK_OFFSET(0xBF1DFE0)
#define OMEOAONBDBP_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0xBF1D3F0)
#define OMEOAONBDBP_EEBEJCNHHOB_OFFSET UNITYSDK_OFFSET(0xBF1DCB0)
#define OMEOAONBDBP_EJPHKAJJCOG_OFFSET UNITYSDK_OFFSET(0xBF1DF50)
#define OMEOAONBDBP_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xBF1D690)
#define OMEOAONBDBP_HNBIAKGGPGH_OFFSET UNITYSDK_OFFSET(0xBF1DBC0)
#define OMEOAONBDBP_IBBBJLDKGLI_OFFSET UNITYSDK_OFFSET(0xBF1D9C0)
#define OMEOAONBDBP_KHHADKOMLAN_OFFSET UNITYSDK_OFFSET(0xBF1DA40)
#define OMEOAONBDBP_LGMBJPMFECH_OFFSET UNITYSDK_OFFSET(0xBF1DDB0)
#define OMEOAONBDBP_LLFMMFPFAKB_OFFSET UNITYSDK_OFFSET(0xBF1DB40)
#define OMEOAONBDBP_NOGCMIBFNKE_OFFSET UNITYSDK_OFFSET(0xBF1DAC0)
#define OMEOAONBDBP__ONBIND_OFFSET UNITYSDK_OFFSET(0xBF1D390)
#define OMEOAONBDBP__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xBF1D6E0)

inline static constexpr unsigned int OMEOAONBDBP_TypeDefinitionIndex = 72364;

	class OMEOAONBDBP : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x60
		::UnityEngine::Animation* KBOGAJDBAHA; // 0x68
		::System::Boolean KCGIPOHDGJP; // 0x70
		// static const ::System::String* LHELPKOLCPP; // 0x0
		// static const ::System::String* KLGBKKOGCBC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMEOAONBDBP_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMEOAONBDBP__ONBIND_OFFSET))(this);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMEOAONBDBP_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMEOAONBDBP_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMEOAONBDBP__ONDISPOSE_OFFSET))(this);
		}

		::System::Void ACAOANMOOJI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OMEOAONBDBP_ACAOANMOOJI_OFFSET))(this, a1);
		}

		::System::Void AGNLBPEBLCG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OMEOAONBDBP_AGNLBPEBLCG_OFFSET))(this, a1);
		}

		::System::Void LLFMMFPFAKB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OMEOAONBDBP_LLFMMFPFAKB_OFFSET))(this, a1);
		}

		::System::Void BMKEIONMBBI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OMEOAONBDBP_BMKEIONMBBI_OFFSET))(this, a1);
		}

		::System::Void EEBEJCNHHOB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OMEOAONBDBP_EEBEJCNHHOB_OFFSET))(this, a1);
		}

		::System::Void HNBIAKGGPGH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OMEOAONBDBP_HNBIAKGGPGH_OFFSET))(this, a1);
		}

		::System::Void LGMBJPMFECH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OMEOAONBDBP_LGMBJPMFECH_OFFSET))(this, a1);
		}

		::System::Void BHBCLBBOPFL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OMEOAONBDBP_BHBCLBBOPFL_OFFSET))(this, a1);
		}

		::System::Void EJPHKAJJCOG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OMEOAONBDBP_EJPHKAJJCOG_OFFSET))(this, a1);
		}

		::System::Boolean IBBBJLDKGLI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OMEOAONBDBP_IBBBJLDKGLI_OFFSET))(this);
		}

		::System::Boolean KHHADKOMLAN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OMEOAONBDBP_KHHADKOMLAN_OFFSET))(this);
		}

		::System::Boolean NOGCMIBFNKE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OMEOAONBDBP_NOGCMIBFNKE_OFFSET))(this);
		}

	};
