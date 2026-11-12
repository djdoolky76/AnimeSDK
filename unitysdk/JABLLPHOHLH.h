#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JABLLPHOHLH_HNMMLJPADGI;

#define JABLLPHOHLH_CCTOR_OFFSET UNITYSDK_OFFSET(0xB872540)

inline static constexpr unsigned int JABLLPHOHLH_TypeDefinitionIndex = 62605;

	class JABLLPHOHLH : public ::System::Object
	{
	public:
		static ::JABLLPHOHLH_HNMMLJPADGI** StaticGet_MFPNICMCKJG()
		{
			return (::JABLLPHOHLH_HNMMLJPADGI**)UnitySDK::FromName("", "JABLLPHOHLH")->GetStaticField(0x5B870);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JABLLPHOHLH_CCTOR_OFFSET))();
		}

	};
