#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/UnityEngine/Vector2.h"
class LOBACMDPMFE;
class MADHNHEMBOJ;
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace UnityEngine { class RectTransform; }

#define DHLCCHNLPIC_CONHCMOGADH_OFFSET UNITYSDK_OFFSET(0xF95A330)
#define DHLCCHNLPIC_CTOR_OFFSET UNITYSDK_OFFSET(0xF95A380)
#define DHLCCHNLPIC_EPNPACLPADL_OFFSET UNITYSDK_OFFSET(0xF959E40)
#define DHLCCHNLPIC_FCFLOBEDEFG_OFFSET UNITYSDK_OFFSET(0xF95A130)
#define DHLCCHNLPIC_ILIAIPNLMML_OFFSET UNITYSDK_OFFSET(0xF959EC0)
#define DHLCCHNLPIC_LIJPAONBBIC_OFFSET UNITYSDK_OFFSET(0xF9598F0)
#define DHLCCHNLPIC_LOGPNMPHCNC_OFFSET UNITYSDK_OFFSET(0xF95A220)
#define DHLCCHNLPIC_NNPEIBBGEFI_OFFSET UNITYSDK_OFFSET(0xF959A00)
#define DHLCCHNLPIC_OCHMKKJPIHO_OFFSET UNITYSDK_OFFSET(0xF959D60)
#define DHLCCHNLPIC_ODFDCFMCCEI_OFFSET UNITYSDK_OFFSET(0xF959F30)
#define DHLCCHNLPIC__INITVARONCE_OFFSET UNITYSDK_OFFSET(0xF959690)
#define DHLCCHNLPIC__ONBIND_OFFSET UNITYSDK_OFFSET(0xF9595F0)
#define DHLCCHNLPIC__ONTICK_OFFSET UNITYSDK_OFFSET(0xF9599A0)
#define DHLCCHNLPIC__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xF959820)

inline static constexpr unsigned int DHLCCHNLPIC_TypeDefinitionIndex = 73227;

	class DHLCCHNLPIC : public ::FMPCODLIOLG
	{
	public:
		::System::Collections::Generic::LinkedList_1<::LOBACMDPMFE*>* OMKIIKOOEOL; // 0x60
		::MADHNHEMBOJ* PKIGHMIMJLF; // 0x68
		::UnityEngine::RectTransform* DDMJJAKCOID; // 0x70
		::System::Single LPGOJCCOGMI; // 0x78
		::UnityEngine::Vector2 CPKEFMBLLNC; // 0x7C
		::System::Single NLHFHHOHJLI; // 0x84
		::UnityEngine::Vector2 CEFEENEAIOO; // 0x88
		::UnityEngine::Vector2 BMPFIOIBAOP; // 0x90
		::System::Boolean EIJLLGCIKPD; // 0x98
		::System::Boolean LFJHKGPGMKN; // 0x99
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
