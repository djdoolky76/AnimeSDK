#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LimaoNewsInterviewDecoType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class IENEKFOMAGO;
class NGDPKCEBAPD;
namespace System { class String; }

#define NGDPKCEBAPD_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBB9CF20)
#define NGDPKCEBAPD_CTOR_OFFSET UNITYSDK_OFFSET(0xBB9CFA0)
#define NGDPKCEBAPD_DBOIFMMENKL_OFFSET UNITYSDK_OFFSET(0xBB9D090)
#define NGDPKCEBAPD_DIFILKCEEFG_OFFSET UNITYSDK_OFFSET(0xBB9CFD0)
#define NGDPKCEBAPD_FBCLFCBOBGM_OFFSET UNITYSDK_OFFSET(0xBB9D390)
#define NGDPKCEBAPD_GET_INTERVIEWID_OFFSET UNITYSDK_OFFSET(0xBB9CFB0)
#define NGDPKCEBAPD_HOJGKPNGDFK_OFFSET UNITYSDK_OFFSET(0xBB9D1B0)
#define NGDPKCEBAPD_MBGENGPEDPN_OFFSET UNITYSDK_OFFSET(0xBB9D2F0)
#define NGDPKCEBAPD_NIJDCJDOPNG_OFFSET UNITYSDK_OFFSET(0xBB9D430)
#define NGDPKCEBAPD_PKKLPMJHPAN_OFFSET UNITYSDK_OFFSET(0xBB9D0F0)
#define NGDPKCEBAPD_POOMMGANEIK_OFFSET UNITYSDK_OFFSET(0xBB9D250)
#define NGDPKCEBAPD_SET_INTERVIEWID_OFFSET UNITYSDK_OFFSET(0xBB9CFC0)

inline static constexpr unsigned int NGDPKCEBAPD_TypeDefinitionIndex = 80284;

	class NGDPKCEBAPD : public ::System::Object
	{
	public:
		::System::UInt32 _InterviewID_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGDPKCEBAPD_CTOR_OFFSET))(this);
		}

		static ::NGDPKCEBAPD* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::NGDPKCEBAPD*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NGDPKCEBAPD_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::UInt32 get_InterviewID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGDPKCEBAPD_GET_INTERVIEWID_OFFSET))(this);
		}

		::System::Void set_InterviewID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NGDPKCEBAPD_SET_INTERVIEWID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID DIFILKCEEFG()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + NGDPKCEBAPD_DIFILKCEEFG_OFFSET))(this);
		}

		::RPG::Client::TextID PKKLPMJHPAN()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + NGDPKCEBAPD_PKKLPMJHPAN_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* HOJGKPNGDFK()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGDPKCEBAPD_HOJGKPNGDFK_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* POOMMGANEIK()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGDPKCEBAPD_POOMMGANEIK_OFFSET))(this);
		}

		::System::UInt32 MBGENGPEDPN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGDPKCEBAPD_MBGENGPEDPN_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::LimaoNewsInterviewDecoType>* FBCLFCBOBGM()
		{
			return ((::Il2CppArray<::RPG::GameCore::LimaoNewsInterviewDecoType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGDPKCEBAPD_FBCLFCBOBGM_OFFSET))(this);
		}

		::System::String* NIJDCJDOPNG()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGDPKCEBAPD_NIJDCJDOPNG_OFFSET))(this);
		}

		::IENEKFOMAGO* DBOIFMMENKL()
		{
			return ((::IENEKFOMAGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGDPKCEBAPD_DBOIFMMENKL_OFFSET))(this);
		}

	};
