#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JABLLPHOHLH_HNMMLJPADGI;

#define JABLLPHOHLH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1652E500)

inline static constexpr unsigned int JABLLPHOHLH_TypeDefinitionIndex = 61220;

	class JABLLPHOHLH : public ::System::Object
	{
	public:
		static ::JABLLPHOHLH_HNMMLJPADGI** StaticGet_MFPNICMCKJG()
		{
			return (::JABLLPHOHLH_HNMMLJPADGI**)UnitySDK::FromName("", "JABLLPHOHLH")->GetStaticField(0x6A3D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JABLLPHOHLH_CCTOR_OFFSET))();
		}

	};
