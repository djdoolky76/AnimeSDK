#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

namespace Foundation { template <typename T1, typename T2, typename T3> class DoubleKeyDictionary_3; }
namespace System { class String; }

#define ECJCPFBCEFA_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x7FE60D0)
#define ECJCPFBCEFA_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x7FE6040)
#define ECJCPFBCEFA__CCTOR_OFFSET UNITYSDK_OFFSET(0x7FE5FC0)
#define ECJCPFBCEFA__CTOR_OFFSET UNITYSDK_OFFSET(0x7FE6030)

inline static constexpr unsigned int ECJCPFBCEFA_TypeDefinitionIndex = 56992;

class ECJCPFBCEFA : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x9F; // 0x0
	::Foundation::DoubleKeyDictionary_3<::System::String*, ::System::String*, ::System::Boolean>* FHMMPDPLGDF; // 0x20
	::Foundation::DoubleKeyDictionary_3<::System::String*, ::System::String*, ::System::Boolean>* BLOHNIKNKHF; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECJCPFBCEFA__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECJCPFBCEFA__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECJCPFBCEFA_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECJCPFBCEFA_FIGPAOKNJLN_OFFSET))(this);
	}
};
