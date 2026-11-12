#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CKHDLEHPOGJ.h"
namespace RPG::Client { class GridFightGameSession; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NACNFDPHAAG_AFCPODEKOBG_OFFSET UNITYSDK_OFFSET(0xC318A60)
#define NACNFDPHAAG_BPMPHNLFMFM_OFFSET UNITYSDK_OFFSET(0xC3189F0)
#define NACNFDPHAAG_CTOR_OFFSET UNITYSDK_OFFSET(0xC318CD0)

inline static constexpr unsigned int NACNFDPHAAG_TypeDefinitionIndex = 66954;

	class NACNFDPHAAG : public ::CKHDLEHPOGJ
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* NKABOPCBGNJ; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NACNFDPHAAG_CTOR_OFFSET))(this);
		}

		::System::String* BPMPHNLFMFM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NACNFDPHAAG_BPMPHNLFMFM_OFFSET))(this);
		}

		::System::String* AFCPODEKOBG(::RPG::Client::GridFightGameSession* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::GridFightGameSession*))((::PBYTE)hIl2Cpp + NACNFDPHAAG_AFCPODEKOBG_OFFSET))(this, a1);
		}

	};
