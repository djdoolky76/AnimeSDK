#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System { class Action; }

#define HAPJDCDHGGA_EHBGLDDNLHP_OFFSET UNITYSDK_OFFSET(0x13D7B6B0)
#define HAPJDCDHGGA_EJHAMGDNIOB_OFFSET UNITYSDK_OFFSET(0x13D7B820)
#define HAPJDCDHGGA_IHGBOKGOECK_OFFSET UNITYSDK_OFFSET(0x13D7BF40)
#define HAPJDCDHGGA_KDLMJOHLOCL_OFFSET UNITYSDK_OFFSET(0x13D7C840)
#define HAPJDCDHGGA_LPOMMCOIKLN_OFFSET UNITYSDK_OFFSET(0x13D7C090)
#define HAPJDCDHGGA_PMPONMKGMHB_OFFSET UNITYSDK_OFFSET(0x13D7C130)
#define HAPJDCDHGGA_POCBPJFDAMK_OFFSET UNITYSDK_OFFSET(0x13D7BEC0)

inline static constexpr unsigned int HAPJDCDHGGA_TypeDefinitionIndex = 77846;

class HAPJDCDHGGA : public ::System::Object
{
public:
	static ::System::Void EHBGLDDNLHP(::System::Action* DNFPCHDAHPI, ::System::Action* ECEOAKHJLIM)
	{
		return ((::System::Void(*)(::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + HAPJDCDHGGA_EHBGLDDNLHP_OFFSET))(DNFPCHDAHPI, ECEOAKHJLIM);
	}

	static ::Cysharp::Threading::Tasks::UniTask LPOMMCOIKLN(::System::Threading::CancellationToken AMIDHEAIANO)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + HAPJDCDHGGA_LPOMMCOIKLN_OFFSET))(AMIDHEAIANO);
	}

	static ::System::Void PMPONMKGMHB(::System::Action* DNFPCHDAHPI, ::System::Action* ECEOAKHJLIM, ::System::Boolean LOKNNHAFHPG)
	{
		return ((::System::Void(*)(::System::Action*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + HAPJDCDHGGA_PMPONMKGMHB_OFFSET))(DNFPCHDAHPI, ECEOAKHJLIM, LOKNNHAFHPG);
	}

	static ::System::Void KDLMJOHLOCL()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HAPJDCDHGGA_KDLMJOHLOCL_OFFSET))();
	}

	static ::System::Void IHGBOKGOECK(::System::Action* DNFPCHDAHPI, ::System::Action* ECEOAKHJLIM)
	{
		return ((::System::Void(*)(::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + HAPJDCDHGGA_IHGBOKGOECK_OFFSET))(DNFPCHDAHPI, ECEOAKHJLIM);
	}

	static ::System::Void POCBPJFDAMK(::System::Int32 CDCJFJEINJK)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + HAPJDCDHGGA_POCBPJFDAMK_OFFSET))(CDCJFJEINJK);
	}

	static ::System::Void EJHAMGDNIOB(::System::Int32 HLACFPBLHJF, ::System::Action* DNFPCHDAHPI, ::System::Action* ECEOAKHJLIM)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + HAPJDCDHGGA_EJHAMGDNIOB_OFFSET))(HLACFPBLHJF, DNFPCHDAHPI, ECEOAKHJLIM);
	}
};
