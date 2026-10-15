#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { template <typename T> class Func_1; }

#define BNGHOKMIDGD_JOJPKPMJLOG_CLEAR_OFFSET UNITYSDK_OFFSET(0xBDD4F30)
#define BNGHOKMIDGD_JOJPKPMJLOG_CTOR_OFFSET UNITYSDK_OFFSET(0xBDCE510)

inline static constexpr unsigned int BNGHOKMIDGD_JOJPKPMJLOG_TypeDefinitionIndex = 60793;

	class BNGHOKMIDGD_JOJPKPMJLOG : public ::System::Object
	{
	public:
		::System::Func_1<::System::Boolean>* EKIJFPIPCKF; // 0x10
		::System::Single GAFENHHEBPG; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_JOJPKPMJLOG_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_JOJPKPMJLOG_CLEAR_OFFSET))(this);
		}

	};
