#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/UnityEngine/FullScreenMode.h"
class MCJEHPEKILH;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HGBNMDFHOGM_CCAAHJJPMIL_OFFSET UNITYSDK_OFFSET(0x15C8FDF0)
#define HGBNMDFHOGM_CFLKEOLJOKP_OFFSET UNITYSDK_OFFSET(0x15C900B0)
#define HGBNMDFHOGM_CTOR_OFFSET UNITYSDK_OFFSET(0x15C8F7E0)
#define HGBNMDFHOGM_DILIDJGFGMK_OFFSET UNITYSDK_OFFSET(0x15C90060)
#define HGBNMDFHOGM_EACMDINHMJJ_OFFSET UNITYSDK_OFFSET(0x15C91310)
#define HGBNMDFHOGM_FEOEBOMPDFE_OFFSET UNITYSDK_OFFSET(0x15C91140)
#define HGBNMDFHOGM_FMNIFLICNDC_OFFSET UNITYSDK_OFFSET(0x15C911A0)
#define HGBNMDFHOGM_GKIAKKDFMJO_OFFSET UNITYSDK_OFFSET(0x15C8FE40)
#define HGBNMDFHOGM_JKGDCOAHNFG_OFFSET UNITYSDK_OFFSET(0x15C903F0)
#define HGBNMDFHOGM_LBEPGKJGNBN_OFFSET UNITYSDK_OFFSET(0x15C90F80)
#define HGBNMDFHOGM_MCCLFFENMAD_OFFSET UNITYSDK_OFFSET(0x15C916F0)
#define HGBNMDFHOGM_MDPHCGIKJBD_1_OFFSET UNITYSDK_OFFSET(0x15C90310)
#define HGBNMDFHOGM_MDPHCGIKJBD_OFFSET UNITYSDK_OFFSET(0x15C902A0)
#define HGBNMDFHOGM_MOACEAMKLLC_OFFSET UNITYSDK_OFFSET(0x15C90630)
#define HGBNMDFHOGM_NAILHGEIJKP_OFFSET UNITYSDK_OFFSET(0x15C90690)
#define HGBNMDFHOGM_OICGPNAMNAI_OFFSET UNITYSDK_OFFSET(0x15C8FC20)
#define HGBNMDFHOGM__ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x15C8FCB0)
#define HGBNMDFHOGM__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x15C8F8C0)
#define HGBNMDFHOGM__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x15C8FD10)
#define HGBNMDFHOGM__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0x15C8FEA0)

inline static constexpr unsigned int HGBNMDFHOGM_TypeDefinitionIndex = 72871;

	class HGBNMDFHOGM : public ::RPG::Client::UIController
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>* ENJBLMNMKBI; // 0x190
		::System::Boolean FNAOCOFEOLE; // 0x198
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGBNMDFHOGM_CTOR_OFFSET))(this);
		}

		::System::Void _CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGBNMDFHOGM__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void _AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGBNMDFHOGM__ADDHANDLERS_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGBNMDFHOGM__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _UnBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGBNMDFHOGM__UNBINDVIEW_OFFSET))(this);
		}

		::System::Void DILIDJGFGMK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGBNMDFHOGM_DILIDJGFGMK_OFFSET))(this);
		}

		::System::String* CFLKEOLJOKP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGBNMDFHOGM_CFLKEOLJOKP_OFFSET))(this);
		}

		::System::String* MDPHCGIKJBD()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGBNMDFHOGM_MDPHCGIKJBD_OFFSET))(this);
		}

		::System::String* MDPHCGIKJBD_1(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HGBNMDFHOGM_MDPHCGIKJBD_1_OFFSET))(this, a1, a2);
		}

		::UnityEngine::FullScreenMode JKGDCOAHNFG()
		{
			return ((::UnityEngine::FullScreenMode(*)(::PVOID))((::PBYTE)hIl2Cpp + HGBNMDFHOGM_JKGDCOAHNFG_OFFSET))(this);
		}

		::System::Int32 MOACEAMKLLC()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGBNMDFHOGM_MOACEAMKLLC_OFFSET))(this);
		}

		::System::Void CCAAHJJPMIL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGBNMDFHOGM_CCAAHJJPMIL_OFFSET))(this);
		}

		::System::Void NAILHGEIJKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGBNMDFHOGM_NAILHGEIJKP_OFFSET))(this);
		}

		::System::Void GKIAKKDFMJO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGBNMDFHOGM_GKIAKKDFMJO_OFFSET))(this);
		}

		::System::Void LBEPGKJGNBN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGBNMDFHOGM_LBEPGKJGNBN_OFFSET))(this);
		}

		::System::Void FEOEBOMPDFE(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HGBNMDFHOGM_FEOEBOMPDFE_OFFSET))(this, a1);
		}

		::System::Void EACMDINHMJJ(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HGBNMDFHOGM_EACMDINHMJJ_OFFSET))(this, a1);
		}

		::System::Void FMNIFLICNDC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGBNMDFHOGM_FMNIFLICNDC_OFFSET))(this);
		}

		::System::Void MCCLFFENMAD(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::FullScreenMode a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::FullScreenMode, ::System::Int32))((::PBYTE)hIl2Cpp + HGBNMDFHOGM_MCCLFFENMAD_OFFSET))(this, a1, a2, a3, a4);
		}

		::MCJEHPEKILH* OICGPNAMNAI()
		{
			return ((::MCJEHPEKILH*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGBNMDFHOGM_OICGPNAMNAI_OFFSET))(this);
		}

	};
