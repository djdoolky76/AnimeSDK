#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CLAADCBPCHM.h"
#include "unitysdk/RPG/Client/NihiluxUltraSkillState.h"
#include "unitysdk/System/ValueTuple_2.h"
namespace RPG::Client { class UIStateCtrl; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }

#define FCEJHNAIKLP_AFMHNCLHNDP_OFFSET UNITYSDK_OFFSET(0x165D0E60)
#define FCEJHNAIKLP_BFDGGBJLEBA_OFFSET UNITYSDK_OFFSET(0x165D10C0)
#define FCEJHNAIKLP_BIOBBNGDGDF_OFFSET UNITYSDK_OFFSET(0x165D0F10)
#define FCEJHNAIKLP_CTOR_OFFSET UNITYSDK_OFFSET(0x165D13D0)
#define FCEJHNAIKLP_DAAANAKDIKM_OFFSET UNITYSDK_OFFSET(0x165D0760)
#define FCEJHNAIKLP_FLJMKABENAD_OFFSET UNITYSDK_OFFSET(0x165D1210)
#define FCEJHNAIKLP_IFJLBHIPCKM_OFFSET UNITYSDK_OFFSET(0x165D0AD0)
#define FCEJHNAIKLP_JMNFOCENFLP_OFFSET UNITYSDK_OFFSET(0x165D12B0)
#define FCEJHNAIKLP_KOJBAPDHAGB_OFFSET UNITYSDK_OFFSET(0x165D0110)
#define FCEJHNAIKLP_LCKCABJFHEA_OFFSET UNITYSDK_OFFSET(0x165D0700)
#define FCEJHNAIKLP_MLBFFDCKAAM_OFFSET UNITYSDK_OFFSET(0x165D0DB0)
#define FCEJHNAIKLP_MPPEBPAINNI_OFFSET UNITYSDK_OFFSET(0x165D1160)
#define FCEJHNAIKLP_NAMIHHPCFOM_OFFSET UNITYSDK_OFFSET(0x165D0D30)
#define FCEJHNAIKLP_NGNACJONELO_OFFSET UNITYSDK_OFFSET(0x165D0850)
#define FCEJHNAIKLP_OLEGEBGKHAI_OFFSET UNITYSDK_OFFSET(0x165D07B0)
#define FCEJHNAIKLP_PBHHAKABHCH_OFFSET UNITYSDK_OFFSET(0x165D1010)
#define FCEJHNAIKLP__ONBIND_OFFSET UNITYSDK_OFFSET(0x165CFEA0)

inline static constexpr unsigned int FCEJHNAIKLP_TypeDefinitionIndex = 73952;

	class FCEJHNAIKLP : public ::CLAADCBPCHM
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::UIStateCtrl*>* NJFJLCCCMDC; // 0xC0
		::UnityEngine::Animation* BNCBLIDEHCI; // 0xC8
		::UnityEngine::Animation* LIFEJLAJJKO; // 0xD0
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::RPG::Client::UIStateCtrl*, ::RPG::Client::UIStateCtrl*>>* JBINGCEGBBG; // 0xD8
		::RPG::Client::UIStateCtrl* MMAGEGGOHFI; // 0xE0
		::System::Int32 KLJFBLDEEPJ; // 0xE8
		::RPG::Client::NihiluxUltraSkillState DLNIGFGLPLJ; // 0xEC
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::Object EBNIALOEMIJ; // 0x0
		// static const ::System::Object FPALEKEGMKG; // 0x0
		// static const ::System::String* CAFJEADBHBC; // 0x0
		// static const ::System::String* OPNBHAKOGJN; // 0x0
		// static const ::System::String* NBJIGEOCMJC; // 0x0
		// static const ::System::String* LMHJHHEELLO; // 0x0
		// static const ::System::String* JPPPJGGAMJP; // 0x0
		// static const ::System::String* CMMMLHFAJEG; // 0x0
		// static const ::System::String* IPHLFFBMDAI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEJHNAIKLP_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEJHNAIKLP__ONBIND_OFFSET))(this);
		}

		static ::RPG::Client::NihiluxUltraSkillState LCKCABJFHEA(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::NihiluxUltraSkillState(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + FCEJHNAIKLP_LCKCABJFHEA_OFFSET))(a1, a2);
		}

		static ::System::Int32 DAAANAKDIKM(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + FCEJHNAIKLP_DAAANAKDIKM_OFFSET))(a1);
		}

		static ::System::Boolean OLEGEBGKHAI(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + FCEJHNAIKLP_OLEGEBGKHAI_OFFSET))(a1, a2, a3);
		}

		::System::Void NGNACJONELO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEJHNAIKLP_NGNACJONELO_OFFSET))(this);
		}

		::System::Void MLBFFDCKAAM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEJHNAIKLP_MLBFFDCKAAM_OFFSET))(this);
		}

		::System::Void AFMHNCLHNDP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEJHNAIKLP_AFMHNCLHNDP_OFFSET))(this);
		}

		::System::Void PBHHAKABHCH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEJHNAIKLP_PBHHAKABHCH_OFFSET))(this);
		}

		::System::Void BFDGGBJLEBA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEJHNAIKLP_BFDGGBJLEBA_OFFSET))(this);
		}

		::System::Void MPPEBPAINNI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FCEJHNAIKLP_MPPEBPAINNI_OFFSET))(this, a1);
		}

		::System::Void FLJMKABENAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEJHNAIKLP_FLJMKABENAD_OFFSET))(this);
		}

		::System::Void JMNFOCENFLP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEJHNAIKLP_JMNFOCENFLP_OFFSET))(this);
		}

		::System::Void KOJBAPDHAGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEJHNAIKLP_KOJBAPDHAGB_OFFSET))(this);
		}

		::System::Void IFJLBHIPCKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEJHNAIKLP_IFJLBHIPCKM_OFFSET))(this);
		}

		::System::Void NAMIHHPCFOM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEJHNAIKLP_NAMIHHPCFOM_OFFSET))(this);
		}

		::System::Void BIOBBNGDGDF(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + FCEJHNAIKLP_BIOBBNGDGDF_OFFSET))(this, a1, a2);
		}

	};
