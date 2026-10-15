#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBHMADMEDF_State.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class UIController; }
namespace System { class Object; }
namespace UnityEngine { class RenderTexture; }

#define FOBHMADMEDF_AJJNMDADBGP_OFFSET UNITYSDK_OFFSET(0x158D5340)
#define FOBHMADMEDF_CTOR_OFFSET UNITYSDK_OFFSET(0x158D6200)
#define FOBHMADMEDF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x158D5DF0)
#define FOBHMADMEDF_FFEJKAGKEGL_OFFSET UNITYSDK_OFFSET(0x158D5C80)
#define FOBHMADMEDF_JKEONEEPIHH_OFFSET UNITYSDK_OFFSET(0x158D4F30)
#define FOBHMADMEDF_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x158D5710)
#define FOBHMADMEDF_KLILFGDIEJG_OFFSET UNITYSDK_OFFSET(0x158D4F40)
#define FOBHMADMEDF_LFJKJBFKEGL_OFFSET UNITYSDK_OFFSET(0x158D5D10)
#define FOBHMADMEDF_NGIOMLEKLGB_OFFSET UNITYSDK_OFFSET(0x158D5550)
#define FOBHMADMEDF_OKCOILDKBPF_OFFSET UNITYSDK_OFFSET(0x158D61A0)
#define FOBHMADMEDF_OPPKGNDBENI_OFFSET UNITYSDK_OFFSET(0x158D5680)
#define FOBHMADMEDF_PEOHAEEAGEF_OFFSET UNITYSDK_OFFSET(0x158D55F0)
#define FOBHMADMEDF_PFDGNOCHOLB_OFFSET UNITYSDK_OFFSET(0x158D5E40)

inline static constexpr unsigned int FOBHMADMEDF_TypeDefinitionIndex = 60733;

	class FOBHMADMEDF : public ::System::Object
	{
	public:
		::RPG::Client::UIController* ABHEKFGPPMN; // 0x10
		::RPG::Client::UIController* KDPBOIALOFP; // 0x18
		::RPG::GameCore::ELevelPerformanceType DBLMPDKBMLH; // 0x20
		::FOBHMADMEDF_State DLNIGFGLPLJ; // 0x24
		::System::UInt32 MJPJJAPCBNA; // 0x28
		::System::Int32 JFFABCKMMGF; // 0x2C
		::System::Boolean FKEKCJLGGLO; // 0x30
		::System::Byte _padding0[0x3];
		::System::Single PGMIOKKLHIE; // 0x34
		// static const ::System::String* ICGPAOJCNDL; // 0x0
		// static const ::System::String* KLDEBAINFPE; // 0x0
		// static const ::System::String* EJFJJOMNMIC; // 0x0
		// static const ::System::Object LIDJCPGAGEB; // 0x0
		// static const ::System::Object DIFMKFDPIMD; // 0x0
		// static const ::System::Object FPFLGNDIMEN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOBHMADMEDF_CTOR_OFFSET))(this);
		}

		::System::Boolean JKEONEEPIHH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOBHMADMEDF_JKEONEEPIHH_OFFSET))(this);
		}

		::System::Void KLILFGDIEJG(::UnityEngine::RenderTexture* a1, ::RPG::GameCore::ELevelPerformanceType a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*, ::RPG::GameCore::ELevelPerformanceType, ::System::UInt32))((::PBYTE)hIl2Cpp + FOBHMADMEDF_KLILFGDIEJG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AJJNMDADBGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOBHMADMEDF_AJJNMDADBGP_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FOBHMADMEDF_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOBHMADMEDF_DISPOSE_OFFSET))(this);
		}

		::System::Void PFDGNOCHOLB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOBHMADMEDF_PFDGNOCHOLB_OFFSET))(this, a1);
		}

		::System::Void OKCOILDKBPF(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOBHMADMEDF_OKCOILDKBPF_OFFSET))(this, a1);
		}

		::System::Void LFJKJBFKEGL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOBHMADMEDF_LFJKJBFKEGL_OFFSET))(this);
		}

		::System::Void NGIOMLEKLGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOBHMADMEDF_NGIOMLEKLGB_OFFSET))(this);
		}

		::System::Void PEOHAEEAGEF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOBHMADMEDF_PEOHAEEAGEF_OFFSET))(this);
		}

		::System::Boolean FFEJKAGKEGL(::RPG::Client::UIController* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + FOBHMADMEDF_FFEJKAGKEGL_OFFSET))(this, a1);
		}

		::System::Void OPPKGNDBENI(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + FOBHMADMEDF_OPPKGNDBENI_OFFSET))(this, a1);
		}

	};
