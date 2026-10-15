#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GOGCDNMNIKF.h"
class HJHOMFFGCPE;
namespace System { class String; }

#define HJHOMFFGCPE_CCTOR_OFFSET UNITYSDK_OFFSET(0x15D154F0)
#define HJHOMFFGCPE_CTOR_OFFSET UNITYSDK_OFFSET(0x15D15490)
#define HJHOMFFGCPE_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x15D154A0)

inline static constexpr unsigned int HJHOMFFGCPE_TypeDefinitionIndex = 67721;

	class HJHOMFFGCPE : public ::GOGCDNMNIKF
	{
	public:
		static ::HJHOMFFGCPE** StaticGet_FMJPMFEDIJL()
		{
			return (::HJHOMFFGCPE**)UnitySDK::FromName("", "HJHOMFFGCPE")->GetStaticField(0x211E0);
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
