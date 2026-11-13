#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IGCLGKCKACE.h"
#include "unitysdk/RPG/Client/VideoTextureBehavior_VideoCommandType.h"
namespace System { class Action; }
namespace System { class String; }

#define RPG_CLIENT_VIDEOTEXTUREBEHAVIOR_KJIDHIHNHDA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC73720)
#define RPG_CLIENT_VIDEOTEXTUREBEHAVIOR_KJIDHIHNHDA_GGINNOFDBFE_OFFSET UNITYSDK_OFFSET(0x1BC72A70)
#define RPG_CLIENT_VIDEOTEXTUREBEHAVIOR_KJIDHIHNHDA_HLOHBPLAHDB_OFFSET UNITYSDK_OFFSET(0x1BC73460)

namespace RPG::Client
{
	inline static constexpr unsigned int VideoTextureBehavior_KJIDHIHNHDA_TypeDefinitionIndex = 75338;

	struct alignas(8) VideoTextureBehavior_KJIDHIHNHDA
	{
		::RPG::Client::VideoTextureBehavior_VideoCommandType GMPGDEINODK; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* MIFHCMJGIHO; // 0x18
		::System::String* HKEKKDELNBM; // 0x20
		::System::String* BIALKIEJDOL; // 0x28
		::System::Boolean BNIMJJNOLAI; // 0x30
		::System::Byte _padding1[0x7];
		::IGCLGKCKACE FBBHGDEMJJH; // 0x38
		::System::Action* ANAOOKCOBFJ; // 0x58
		static ::RPG::Client::VideoTextureBehavior_KJIDHIHNHDA* StaticGet_NLCDGIPGFDJ()
		{
			return (::RPG::Client::VideoTextureBehavior_KJIDHIHNHDA*)UnitySDK::FromName("RPG.Client", "KJIDHIHNHDA")->GetStaticField(0x5C110);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOTEXTUREBEHAVIOR_KJIDHIHNHDA_CCTOR_OFFSET))();
		}

		/*
		static ::RPG::Client::VideoTextureBehavior_KJIDHIHNHDA GGINNOFDBFE(::System::String* a1, ::System::Boolean a2, ::System::String* a3, ::System::Action* a4)
		{
			return ((::RPG::Client::VideoTextureBehavior_KJIDHIHNHDA(*)(::System::String*, ::System::Boolean, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOTEXTUREBEHAVIOR_KJIDHIHNHDA_GGINNOFDBFE_OFFSET))(a1, a2, a3, a4);
		}
		*/

		/*
		static ::RPG::Client::VideoTextureBehavior_KJIDHIHNHDA HLOHBPLAHDB()
		{
			return ((::RPG::Client::VideoTextureBehavior_KJIDHIHNHDA(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOTEXTUREBEHAVIOR_KJIDHIHNHDA_HLOHBPLAHDB_OFFSET))();
		}
		*/

	};
}
