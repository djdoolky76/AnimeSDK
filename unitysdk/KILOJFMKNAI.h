#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KILOJFMKNAI_AIEHMLPBHCG_OFFSET UNITYSDK_OFFSET(0x1C7114E0)
#define KILOJFMKNAI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7114D0)
#define KILOJFMKNAI_FEADNMNABOL_OFFSET UNITYSDK_OFFSET(0x1C711520)
#define KILOJFMKNAI_MIFAOKMDILB_OFFSET UNITYSDK_OFFSET(0x1C711560)

inline static constexpr unsigned int KILOJFMKNAI_TypeDefinitionIndex = 36847;

	class KILOJFMKNAI : public ::System::Object
	{
	public:
		::System::UInt32 ABNPHONMCEP; // 0x10
		::System::Int32 CKOJEBCLBJP; // 0x14
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KILOJFMKNAI_CTOR_OFFSET))(this, a1);
		}

		::System::Void AIEHMLPBHCG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KILOJFMKNAI_AIEHMLPBHCG_OFFSET))(this);
		}

		::System::Void FEADNMNABOL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KILOJFMKNAI_FEADNMNABOL_OFFSET))(this);
		}

		::System::Int32 MIFAOKMDILB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KILOJFMKNAI_MIFAOKMDILB_OFFSET))(this);
		}

	};
