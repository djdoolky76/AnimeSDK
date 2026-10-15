#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BLLEONBDOMJ.h"

#define BKFOHAKAJLP_CCTOR_OFFSET UNITYSDK_OFFSET(0xB7AECB0)
#define BKFOHAKAJLP_CTOR_OFFSET UNITYSDK_OFFSET(0xB7AECA0)
#define BKFOHAKAJLP_FGFNHDKKJBA_OFFSET UNITYSDK_OFFSET(0xB7AE900)

inline static constexpr unsigned int BKFOHAKAJLP_TypeDefinitionIndex = 78004;

	class BKFOHAKAJLP : public ::BLLEONBDOMJ
	{
	public:
		static ::System::Int32* StaticGet_OCBKNPAHODJ()
		{
			return (::System::Int32*)UnitySDK::FromName("", "BKFOHAKAJLP")->GetStaticField(0x155D0);
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
