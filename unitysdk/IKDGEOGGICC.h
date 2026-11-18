#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define IKDGEOGGICC_NEJDPCCMLPF_OFFSET UNITYSDK_OFFSET(0xF8774D0)
#define IKDGEOGGICC_OAJPAJCABJC_OFFSET UNITYSDK_OFFSET(0xF877420)
#define IKDGEOGGICC__CCTOR_OFFSET UNITYSDK_OFFSET(0xF8773D0)
#define IKDGEOGGICC__CTOR_OFFSET UNITYSDK_OFFSET(0xF8773C0)

inline static constexpr unsigned int IKDGEOGGICC_TypeDefinitionIndex = 89432;

class IKDGEOGGICC : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::System::UInt16>** StaticGet_IKPHFFAKJLN()
	{
		return (::System::Collections::Generic::HashSet_1<::System::UInt16>**)Il2CppClass::FromTypeDefinitionIndex(IKDGEOGGICC_TypeDefinitionIndex)->GetStaticField(0x48100);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKDGEOGGICC__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IKDGEOGGICC__CCTOR_OFFSET))();
	}

	static ::System::Boolean OAJPAJCABJC(::System::UInt16 AMMJIOCMGKE)
	{
		return ((::System::Boolean(*)(::System::UInt16))((::PBYTE)hIl2Cpp + IKDGEOGGICC_OAJPAJCABJC_OFFSET))(AMMJIOCMGKE);
	}

	static ::System::Void NEJDPCCMLPF(::System::UInt16 AMMJIOCMGKE, ::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::UInt16, ::System::Boolean))((::PBYTE)hIl2Cpp + IKDGEOGGICC_NEJDPCCMLPF_OFFSET))(AMMJIOCMGKE, EGEGIMGMJHN);
	}
};
