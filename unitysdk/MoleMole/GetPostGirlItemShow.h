#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

class HGAJKHIMKJP;

#define MOLEMOLE_GETPOSTGIRLITEMSHOW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x180ED930)
#define MOLEMOLE_GETPOSTGIRLITEMSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x180EDBB0)
#define MOLEMOLE_GETPOSTGIRLITEMSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x180ED940)

namespace MoleMole
{
	inline static constexpr unsigned int GetPostGirlItemShow_TypeDefinitionIndex = 79984;

	class GetPostGirlItemShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::HGAJKHIMKJP* Item; // 0x28

		::System::Void _ctor(::HGAJKHIMKJP* itemData)
		{
			return ((::System::Void(*)(::PVOID, ::HGAJKHIMKJP*))((::PBYTE)hIl2Cpp + MOLEMOLE_GETPOSTGIRLITEMSHOW__CTOR_OFFSET))(this, itemData);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETPOSTGIRLITEMSHOW_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETPOSTGIRLITEMSHOW_ONPROCESS_OFFSET))(this);
		}
	};
}
