#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MBGOLJBHEHA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1064C0)

inline static constexpr unsigned int MBGOLJBHEHA_TypeDefinitionIndex = 10873;

	class MBGOLJBHEHA : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_IAPPKGMKLCA()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MBGOLJBHEHA")->GetStaticField(0x15CB0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBGOLJBHEHA_CTOR_OFFSET))(this);
		}

	};
