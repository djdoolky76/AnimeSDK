#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoUIAdaptor.h"

class LayoutLimiter;
namespace MoleMole { class MonoUILayoutLimiter; }

#define MOLEMOLE_LAYOUTLIMITERADAPTOR_GET_ISCHANGED_OFFSET UNITYSDK_OFFSET(0x162620D0)
#define MOLEMOLE_LAYOUTLIMITERADAPTOR_SET_ISCHANGED_OFFSET UNITYSDK_OFFSET(0x162620F0)
#define MOLEMOLE_LAYOUTLIMITERADAPTOR_UPDATEPARAMS_OFFSET UNITYSDK_OFFSET(0x162621C0)
#define MOLEMOLE_LAYOUTLIMITERADAPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x16262150)

namespace MoleMole
{
	inline static constexpr unsigned int LayoutLimiterAdaptor_TypeDefinitionIndex = 85309;

	class LayoutLimiterAdaptor : public ::MoleMole::MonoUIAdaptor
	{
	public:
		::MoleMole::MonoUILayoutLimiter* AdaptorLayoutLimiter; // 0x10

		::System::Void _ctor(::LayoutLimiter* layoutLimiter)
		{
			return ((::System::Void(*)(::PVOID, ::LayoutLimiter*))((::PBYTE)hIl2Cpp + MOLEMOLE_LAYOUTLIMITERADAPTOR__CTOR_OFFSET))(this, layoutLimiter);
		}

		::System::Boolean get_IsChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAYOUTLIMITERADAPTOR_GET_ISCHANGED_OFFSET))(this);
		}

		::System::Void set_IsChanged(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_LAYOUTLIMITERADAPTOR_SET_ISCHANGED_OFFSET))(this, value);
		}

		::System::Void UpdateParams(::LayoutLimiter* layoutLimiter)
		{
			return ((::System::Void(*)(::PVOID, ::LayoutLimiter*))((::PBYTE)hIl2Cpp + MOLEMOLE_LAYOUTLIMITERADAPTOR_UPDATEPARAMS_OFFSET))(this, layoutLimiter);
		}
	};
}
