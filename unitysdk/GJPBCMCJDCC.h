#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GJPBCMCJDCC_ALFIJIACCME_1_OFFSET UNITYSDK_OFFSET(0x15A7F7A0)
#define GJPBCMCJDCC_ALFIJIACCME_OFFSET UNITYSDK_OFFSET(0x15A7F730)
#define GJPBCMCJDCC_OMAFDLCGFDF_1_OFFSET UNITYSDK_OFFSET(0x15A7F860)
#define GJPBCMCJDCC_OMAFDLCGFDF_OFFSET UNITYSDK_OFFSET(0x15A7F7F0)

	class GJPBCMCJDCC : public ::System::Object
	{
	public:
		static ::System::Single ALFIJIACCME(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GJPBCMCJDCC_ALFIJIACCME_OFFSET))(a1, a2);
		}

		static ::System::Int32 ALFIJIACCME_1(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + GJPBCMCJDCC_ALFIJIACCME_1_OFFSET))(a1, a2);
		}

		static ::System::Single OMAFDLCGFDF(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GJPBCMCJDCC_OMAFDLCGFDF_OFFSET))(a1, a2);
		}

		static ::System::Int32 OMAFDLCGFDF_1(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + GJPBCMCJDCC_OMAFDLCGFDF_1_OFFSET))(a1, a2);
		}

	};
