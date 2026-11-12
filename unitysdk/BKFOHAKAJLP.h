#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BLLEONBDOMJ.h"

#define BKFOHAKAJLP_CCTOR_OFFSET UNITYSDK_OFFSET(0xC10A700)
#define BKFOHAKAJLP_CTOR_OFFSET UNITYSDK_OFFSET(0xC10A6F0)
#define BKFOHAKAJLP_FGFNHDKKJBA_OFFSET UNITYSDK_OFFSET(0xC10A350)

inline static constexpr unsigned int BKFOHAKAJLP_TypeDefinitionIndex = 80740;

	class BKFOHAKAJLP : public ::BLLEONBDOMJ
	{
	public:
		static ::System::Int32* StaticGet_OCBKNPAHODJ()
		{
			return (::System::Int32*)UnitySDK::FromName("", "BKFOHAKAJLP")->GetStaticField(0x15CB0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKFOHAKAJLP_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BKFOHAKAJLP_CCTOR_OFFSET))();
		}

		::System::Void FGFNHDKKJBA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKFOHAKAJLP_FGFNHDKKJBA_OFFSET))(this);
		}

	};
