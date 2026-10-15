#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ServerDispatchData; }

#define MKOKEBODEGN_AGIEMEHBHBD_OFFSET UNITYSDK_OFFSET(0xB99C380)
#define MKOKEBODEGN_BJBMNHIJKLG_OFFSET UNITYSDK_OFFSET(0xB99C490)
#define MKOKEBODEGN_DCJCKMLCOGG_OFFSET UNITYSDK_OFFSET(0xB99C400)
#define MKOKEBODEGN_DLMCGICJDLN_OFFSET UNITYSDK_OFFSET(0xB99CBF0)
#define MKOKEBODEGN_EGNECOPKNIF_OFFSET UNITYSDK_OFFSET(0xB99C4D0)
#define MKOKEBODEGN_GIADDJGKPAB_OFFSET UNITYSDK_OFFSET(0xB99C630)
#define MKOKEBODEGN_JCPEMHKNGDI_OFFSET UNITYSDK_OFFSET(0xB99CAC0)
#define MKOKEBODEGN_JILHHHNCPPL_OFFSET UNITYSDK_OFFSET(0xB99C790)
#define MKOKEBODEGN_LKCEHIJOJMN_OFFSET UNITYSDK_OFFSET(0xB99C450)

inline static constexpr unsigned int MKOKEBODEGN_TypeDefinitionIndex = 59633;

	class MKOKEBODEGN : public ::System::Object
	{
	public:
		static ::RPG::Client::ServerDispatchData** StaticGet_ELDHAGPPFBG()
		{
			return (::RPG::Client::ServerDispatchData**)UnitySDK::FromName("", "MKOKEBODEGN")->GetStaticField(0x2D20);
		}

		static ::RPG::Client::ServerDispatchData* AGIEMEHBHBD()
		{
			return ((::RPG::Client::ServerDispatchData*(*)())((::PBYTE)hIl2Cpp + MKOKEBODEGN_AGIEMEHBHBD_OFFSET))();
		}

		static ::System::Void DCJCKMLCOGG(::RPG::Client::ServerDispatchData* a1)
		{
			return ((::System::Void(*)(::RPG::Client::ServerDispatchData*))((::PBYTE)hIl2Cpp + MKOKEBODEGN_DCJCKMLCOGG_OFFSET))(a1);
		}

		static ::System::Void LKCEHIJOJMN(::RPG::Client::ServerDispatchData* a1)
		{
			return ((::System::Void(*)(::RPG::Client::ServerDispatchData*))((::PBYTE)hIl2Cpp + MKOKEBODEGN_LKCEHIJOJMN_OFFSET))(a1);
		}

		static ::System::Void BJBMNHIJKLG(::RPG::Client::ServerDispatchData* a1)
		{
			return ((::System::Void(*)(::RPG::Client::ServerDispatchData*))((::PBYTE)hIl2Cpp + MKOKEBODEGN_BJBMNHIJKLG_OFFSET))(a1);
		}

		static ::System::Void EGNECOPKNIF(::RPG::Client::ServerDispatchData* a1)
		{
			return ((::System::Void(*)(::RPG::Client::ServerDispatchData*))((::PBYTE)hIl2Cpp + MKOKEBODEGN_EGNECOPKNIF_OFFSET))(a1);
		}

		static ::System::Void GIADDJGKPAB(::RPG::Client::ServerDispatchData* a1)
		{
			return ((::System::Void(*)(::RPG::Client::ServerDispatchData*))((::PBYTE)hIl2Cpp + MKOKEBODEGN_GIADDJGKPAB_OFFSET))(a1);
		}

		static ::System::Void JILHHHNCPPL(::RPG::Client::ServerDispatchData* a1)
		{
			return ((::System::Void(*)(::RPG::Client::ServerDispatchData*))((::PBYTE)hIl2Cpp + MKOKEBODEGN_JILHHHNCPPL_OFFSET))(a1);
		}

		static ::System::Void JCPEMHKNGDI(::RPG::Client::ServerDispatchData* a1)
		{
			return ((::System::Void(*)(::RPG::Client::ServerDispatchData*))((::PBYTE)hIl2Cpp + MKOKEBODEGN_JCPEMHKNGDI_OFFSET))(a1);
		}

		static ::System::Void DLMCGICJDLN(::RPG::Client::ServerDispatchData* a1)
		{
			return ((::System::Void(*)(::RPG::Client::ServerDispatchData*))((::PBYTE)hIl2Cpp + MKOKEBODEGN_DLMCGICJDLN_OFFSET))(a1);
		}

	};
