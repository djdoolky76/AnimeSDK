#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/UnityEngine/Vector2.h"
class LOBACMDPMFE;
class MADHNHEMBOJ;
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace UnityEngine { class RectTransform; }

#define DHLCCHNLPIC_CONHCMOGADH_OFFSET UNITYSDK_OFFSET(0x18EA98E0)
#define DHLCCHNLPIC_CTOR_OFFSET UNITYSDK_OFFSET(0x18EA9920)
#define DHLCCHNLPIC_EPNPACLPADL_OFFSET UNITYSDK_OFFSET(0x18EA9410)
#define DHLCCHNLPIC_FCFLOBEDEFG_OFFSET UNITYSDK_OFFSET(0x18EA96F0)
#define DHLCCHNLPIC_ILIAIPNLMML_OFFSET UNITYSDK_OFFSET(0x18EA9490)
#define DHLCCHNLPIC_LIJPAONBBIC_OFFSET UNITYSDK_OFFSET(0x18EA8EC0)
#define DHLCCHNLPIC_LOGPNMPHCNC_OFFSET UNITYSDK_OFFSET(0x18EA97D0)
#define DHLCCHNLPIC_NNPEIBBGEFI_OFFSET UNITYSDK_OFFSET(0x18EA8FD0)
#define DHLCCHNLPIC_OCHMKKJPIHO_OFFSET UNITYSDK_OFFSET(0x18EA9330)
#define DHLCCHNLPIC_ODFDCFMCCEI_OFFSET UNITYSDK_OFFSET(0x18EA9500)
#define DHLCCHNLPIC__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x18EA8C60)
#define DHLCCHNLPIC__ONBIND_OFFSET UNITYSDK_OFFSET(0x18EA8BC0)
#define DHLCCHNLPIC__ONTICK_OFFSET UNITYSDK_OFFSET(0x18EA8F70)
#define DHLCCHNLPIC__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x18EA8DF0)

inline static constexpr unsigned int DHLCCHNLPIC_TypeDefinitionIndex = 73226;

	class DHLCCHNLPIC : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::RectTransform* DDMJJAKCOID; // 0x60
		::System::Collections::Generic::LinkedList_1<::LOBACMDPMFE*>* OMKIIKOOEOL; // 0x68
		::MADHNHEMBOJ* PKIGHMIMJLF; // 0x70
		::System::Single NLHFHHOHJLI; // 0x78
		::System::Boolean EIJLLGCIKPD; // 0x7C
		::System::Boolean LFJHKGPGMKN; // 0x7D
		::System::Byte _padding0[0x2];
		::UnityEngine::Vector2 CEFEENEAIOO; // 0x80
		::System::Single LPGOJCCOGMI; // 0x88
		::UnityEngine::Vector2 BMPFIOIBAOP; // 0x8C
		::UnityEngine::Vector2 CPKEFMBLLNC; // 0x94
		// static const ::System::Object HDCOMMOHIGO; // 0x0
		// static const ::System::Object KCBHOELEKEG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLCCHNLPIC_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLCCHNLPIC__ONBIND_OFFSET))(this);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLCCHNLPIC__INITVARONCE_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLCCHNLPIC__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DHLCCHNLPIC__ONTICK_OFFSET))(this, a1);
		}

		::System::Void OCHMKKJPIHO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLCCHNLPIC_OCHMKKJPIHO_OFFSET))(this);
		}

		::System::Void LIJPAONBBIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLCCHNLPIC_LIJPAONBBIC_OFFSET))(this);
		}

		::System::Void EPNPACLPADL(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DHLCCHNLPIC_EPNPACLPADL_OFFSET))(this, a1);
		}

		::System::Void ILIAIPNLMML(::UnityEngine::Vector2 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + DHLCCHNLPIC_ILIAIPNLMML_OFFSET))(this, a1, a2);
		}

		::System::Boolean FCFLOBEDEFG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLCCHNLPIC_FCFLOBEDEFG_OFFSET))(this);
		}

		::System::Void ODFDCFMCCEI(::UnityEngine::Vector2 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + DHLCCHNLPIC_ODFDCFMCCEI_OFFSET))(this, a1, a2);
		}

		::System::Void LOGPNMPHCNC(::UnityEngine::Vector2 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + DHLCCHNLPIC_LOGPNMPHCNC_OFFSET))(this, a1, a2);
		}

		::System::Void NNPEIBBGEFI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLCCHNLPIC_NNPEIBBGEFI_OFFSET))(this);
		}

		::System::Boolean CONHCMOGADH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLCCHNLPIC_CONHCMOGADH_OFFSET))(this);
		}

	};
