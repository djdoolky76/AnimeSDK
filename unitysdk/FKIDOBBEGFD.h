#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class NGFHCJIAOLH;
class OAIPJANPCEK;
namespace RPG::Client { class VirtualCursorSimulateTouchActionWrapper; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define FKIDOBBEGFD_AIFIEIJHHMB_OFFSET UNITYSDK_OFFSET(0x157FB810)
#define FKIDOBBEGFD_CCFLDPNHBID_OFFSET UNITYSDK_OFFSET(0x157FBCF0)
#define FKIDOBBEGFD_CTOR_OFFSET UNITYSDK_OFFSET(0x157FAE80)
#define FKIDOBBEGFD_EHNPHFBMNBK_OFFSET UNITYSDK_OFFSET(0x157FB0C0)
#define FKIDOBBEGFD_EXECUTE_OFFSET UNITYSDK_OFFSET(0x157FB040)
#define FKIDOBBEGFD_FGJJJBJNAKM_OFFSET UNITYSDK_OFFSET(0x157FC1D0)
#define FKIDOBBEGFD_FJGDJIBDJOF_OFFSET UNITYSDK_OFFSET(0x157FC320)
#define FKIDOBBEGFD_GMPDEDCNCDI_OFFSET UNITYSDK_OFFSET(0x157FC170)
#define FKIDOBBEGFD_HIFLMGMJMJA_OFFSET UNITYSDK_OFFSET(0x157FB950)
#define FKIDOBBEGFD_HOIMCEKNMLP_OFFSET UNITYSDK_OFFSET(0x157FCA00)
#define FKIDOBBEGFD_IICJEKIGMAN_OFFSET UNITYSDK_OFFSET(0x157FC500)
#define FKIDOBBEGFD_KBBCNNLDFJN_OFFSET UNITYSDK_OFFSET(0x157FB350)
#define FKIDOBBEGFD_KOEIPEDMCMI_OFFSET UNITYSDK_OFFSET(0x157FB7C0)
#define FKIDOBBEGFD_LMDNECHPMID_OFFSET UNITYSDK_OFFSET(0x157FBC30)
#define FKIDOBBEGFD_LNJNOHAGHHP_OFFSET UNITYSDK_OFFSET(0x157FBDB0)
#define FKIDOBBEGFD_NMFLNOBFLJJ_OFFSET UNITYSDK_OFFSET(0x157FC7E0)
#define FKIDOBBEGFD_OFGMOBCCOFA_OFFSET UNITYSDK_OFFSET(0x157FBA90)
#define FKIDOBBEGFD_OGCMEGLGIKE_OFFSET UNITYSDK_OFFSET(0x157FC2A0)
#define FKIDOBBEGFD_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x157FB720)

inline static constexpr unsigned int FKIDOBBEGFD_TypeDefinitionIndex = 77779;

	class FKIDOBBEGFD : public ::System::Object
	{
	public:
		::NGFHCJIAOLH* JCABGFBLBPG; // 0x10
		::OAIPJANPCEK* PDENFEFCAGN; // 0x18
		::NGFHCJIAOLH* KMFJBJOLFPP; // 0x20
		::NGFHCJIAOLH* IOLJGLDMMPI; // 0x28
		::System::Single PHMDKJBMIDN; // 0x30
		::System::Boolean OLBFHAMOKEO; // 0x34
		::System::Boolean EPJDACBNLJH; // 0x35
		::System::Byte _padding0[0x2];
		::UnityEngine::Vector3 CKKGAMDIDFO; // 0x38
		// static const ::System::Object IOJDGOMNIMJ; // 0x0
		// static const ::System::Object BIKGIBGNKNE; // 0x0
		::System::Void _ctor(::OAIPJANPCEK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OAIPJANPCEK*))((::PBYTE)hIl2Cpp + FKIDOBBEGFD_CTOR_OFFSET))(this, a1);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKIDOBBEGFD_EXECUTE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKIDOBBEGFD_TEARDOWN_OFFSET))(this);
		}

		::System::Void KOEIPEDMCMI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKIDOBBEGFD_KOEIPEDMCMI_OFFSET))(this);
		}

		::System::Void EHNPHFBMNBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKIDOBBEGFD_EHNPHFBMNBK_OFFSET))(this);
		}

		::System::Void LNJNOHAGHHP(::RPG::Client::VirtualCursorSimulateTouchActionWrapper* a1, ::UnityEngine::GameObject* a2, ::UnityEngine::EventSystems::PointerEventData* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::VirtualCursorSimulateTouchActionWrapper*, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + FKIDOBBEGFD_LNJNOHAGHHP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FGJJJBJNAKM(::RPG::Client::VirtualCursorSimulateTouchActionWrapper* a1, ::UnityEngine::GameObject* a2, ::UnityEngine::EventSystems::PointerEventData* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::VirtualCursorSimulateTouchActionWrapper*, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + FKIDOBBEGFD_FGJJJBJNAKM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KBBCNNLDFJN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKIDOBBEGFD_KBBCNNLDFJN_OFFSET))(this);
		}

		::System::Boolean FJGDJIBDJOF(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FKIDOBBEGFD_FJGDJIBDJOF_OFFSET))(this, a1);
		}

		::System::Boolean IICJEKIGMAN(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FKIDOBBEGFD_IICJEKIGMAN_OFFSET))(this, a1, a2);
		}

		::System::Boolean HOIMCEKNMLP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FKIDOBBEGFD_HOIMCEKNMLP_OFFSET))(this);
		}

		::System::Void NMFLNOBFLJJ(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FKIDOBBEGFD_NMFLNOBFLJJ_OFFSET))(this, a1, a2);
		}

		::System::Void OGCMEGLGIKE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FKIDOBBEGFD_OGCMEGLGIKE_OFFSET))(this, a1);
		}

		::System::Boolean GMPDEDCNCDI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FKIDOBBEGFD_GMPDEDCNCDI_OFFSET))(this);
		}

		::NGFHCJIAOLH* OFGMOBCCOFA()
		{
			return ((::NGFHCJIAOLH*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKIDOBBEGFD_OFGMOBCCOFA_OFFSET))(this);
		}

		::System::Void LMDNECHPMID(::System::Boolean a1, ::NGFHCJIAOLH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + FKIDOBBEGFD_LMDNECHPMID_OFFSET))(this, a1, a2);
		}

		::System::Void CCFLDPNHBID(::System::Boolean a1, ::NGFHCJIAOLH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + FKIDOBBEGFD_CCFLDPNHBID_OFFSET))(this, a1, a2);
		}

		::System::Void AIFIEIJHHMB(::NGFHCJIAOLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + FKIDOBBEGFD_AIFIEIJHHMB_OFFSET))(this, a1);
		}

		::System::Void HIFLMGMJMJA(::NGFHCJIAOLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + FKIDOBBEGFD_HIFLMGMJMJA_OFFSET))(this, a1);
		}

	};
