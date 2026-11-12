#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GOGCDNMNIKF.h"
class HJHOMFFGCPE;
namespace System { class String; }

#define HJHOMFFGCPE_CCTOR_OFFSET UNITYSDK_OFFSET(0x16C72010)
#define HJHOMFFGCPE_CTOR_OFFSET UNITYSDK_OFFSET(0x16C71FB0)
#define HJHOMFFGCPE_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x16C71FC0)

inline static constexpr unsigned int HJHOMFFGCPE_TypeDefinitionIndex = 69666;

	class HJHOMFFGCPE : public ::GOGCDNMNIKF
	{
	public:
		static ::HJHOMFFGCPE** StaticGet_FMJPMFEDIJL()
		{
			return (::HJHOMFFGCPE**)UnitySDK::FromName("", "HJHOMFFGCPE")->GetStaticField(0x11060);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJHOMFFGCPE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJHOMFFGCPE_CCTOR_OFFSET))();
		}

		::System::String* JBIOGKPHKKC()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJHOMFFGCPE_JBIOGKPHKKC_OFFSET))(this);
		}

	};
