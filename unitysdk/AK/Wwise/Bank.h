#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A2F3E384E505AFEB.h"
#include "unitysdk/AK/Wwise/BaseType.h"

class FE399E8C446747BE_BA359093BD202C6D;
class WwiseBankReference;
class WwiseObjectReference;

#define AK_WWISE_BANK_GET_OBJECTREFERENCE_OFFSET UNITYSDK_OFFSET(0x16BD320)
#define AK_WWISE_BANK_GET_WWISEOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x22074C0)
#define AK_WWISE_BANK_LOADASYNC_OFFSET UNITYSDK_OFFSET(0x2912860)
#define AK_WWISE_BANK_LOAD_OFFSET UNITYSDK_OFFSET(0x29128F0)
#define AK_WWISE_BANK_UNLOAD_OFFSET UNITYSDK_OFFSET(0x2912990)
#define AK_WWISE_BANK__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace AK::Wwise
{
	inline static constexpr unsigned int Bank_TypeDefinitionIndex = 21562;

	class Bank : public ::AK::Wwise::BaseType
	{
	public:
		::WwiseBankReference* WwiseObjectReference; // 0x20

		::System::Void Unload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_BANK_UNLOAD_OFFSET))(this);
		}

		::A2F3E384E505AFEB get_WwiseObjectType()
		{
			return ((::A2F3E384E505AFEB(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_BANK_GET_WWISEOBJECTTYPE_OFFSET))(this);
		}

		::System::Void LoadAsync(::FE399E8C446747BE_BA359093BD202C6D* E04D2BE64FCE9814)
		{
			return ((::System::Void(*)(::PVOID, ::FE399E8C446747BE_BA359093BD202C6D*))((::PBYTE)hIl2Cpp + AK_WWISE_BANK_LOADASYNC_OFFSET))(this, E04D2BE64FCE9814);
		}

		::WwiseObjectReference* get_ObjectReference()
		{
			return ((::WwiseObjectReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_BANK_GET_OBJECTREFERENCE_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_BANK__CTOR_OFFSET))(this);
		}

		::System::Void Load(::System::Boolean A8E6F06B0E7FAAFF, ::System::Boolean E98D33F03E1DC1F0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + AK_WWISE_BANK_LOAD_OFFSET))(this, A8E6F06B0E7FAAFF, E98D33F03E1DC1F0);
		}
	};
}
