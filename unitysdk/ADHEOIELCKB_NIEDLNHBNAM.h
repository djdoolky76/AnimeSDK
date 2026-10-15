#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ADHEOIELCKB_VideoCommandType.h"
#include "unitysdk/IGCLGKCKACE.h"
namespace System { class Action; }
namespace System { class String; }

#define ADHEOIELCKB_NIEDLNHBNAM_CCTOR_OFFSET UNITYSDK_OFFSET(0xB13B480)
#define ADHEOIELCKB_NIEDLNHBNAM_GGINNOFDBFE_OFFSET UNITYSDK_OFFSET(0xB13A640)
#define ADHEOIELCKB_NIEDLNHBNAM_HLOHBPLAHDB_OFFSET UNITYSDK_OFFSET(0xB13B2A0)

	struct alignas(8) ADHEOIELCKB_NIEDLNHBNAM
	{
		::ADHEOIELCKB_VideoCommandType GMPGDEINODK; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* MIFHCMJGIHO; // 0x18
		::System::String* HKEKKDELNBM; // 0x20
		::System::String* BIALKIEJDOL; // 0x28
		::System::Boolean BNIMJJNOLAI; // 0x30
		::System::Byte _padding1[0x7];
		::IGCLGKCKACE FBBHGDEMJJH; // 0x38
		::System::Action* ANAOOKCOBFJ; // 0x58
		static ::ADHEOIELCKB_NIEDLNHBNAM* StaticGet_NLCDGIPGFDJ()
		{
			return (::ADHEOIELCKB_NIEDLNHBNAM*)UnitySDK::FromName("", "NIEDLNHBNAM")->GetStaticField(0x4A870);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ADHEOIELCKB_NIEDLNHBNAM_CCTOR_OFFSET))();
		}

		/*
		static ::ADHEOIELCKB_NIEDLNHBNAM GGINNOFDBFE(::System::String* a1, ::System::Boolean a2, ::System::String* a3, ::System::Action* a4)
		{
			return ((::ADHEOIELCKB_NIEDLNHBNAM(*)(::System::String*, ::System::Boolean, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + ADHEOIELCKB_NIEDLNHBNAM_GGINNOFDBFE_OFFSET))(a1, a2, a3, a4);
		}
		*/

		/*
		static ::ADHEOIELCKB_NIEDLNHBNAM HLOHBPLAHDB()
		{
			return ((::ADHEOIELCKB_NIEDLNHBNAM(*)())((::PBYTE)hIl2Cpp + ADHEOIELCKB_NIEDLNHBNAM_HLOHBPLAHDB_OFFSET))();
		}
		*/

	};
