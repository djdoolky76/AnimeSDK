#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMGHLHHJEGE;

#define GDJCDOFHHHN_ALJIOCDBMKO_OFFSET UNITYSDK_OFFSET(0x159927E0)
#define GDJCDOFHHHN_CTOR_OFFSET UNITYSDK_OFFSET(0x15992860)
#define GDJCDOFHHHN_GET_ISDISAPPEAREDONCE_OFFSET UNITYSDK_OFFSET(0x15992840)
#define GDJCDOFHHHN_SET_ISDISAPPEAREDONCE_OFFSET UNITYSDK_OFFSET(0x15992850)

inline static constexpr unsigned int GDJCDOFHHHN_TypeDefinitionIndex = 66557;

	class GDJCDOFHHHN : public ::System::Object
	{
	public:
		::System::Boolean _IsDisappearedOnce_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDJCDOFHHHN_CTOR_OFFSET))(this);
		}

		::System::Void ALJIOCDBMKO(::BMGHLHHJEGE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMGHLHHJEGE*))((::PBYTE)hIl2Cpp + GDJCDOFHHHN_ALJIOCDBMKO_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDisappearedOnce()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDJCDOFHHHN_GET_ISDISAPPEAREDONCE_OFFSET))(this);
		}

		::System::Void set_IsDisappearedOnce(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GDJCDOFHHHN_SET_ISDISAPPEAREDONCE_OFFSET))(this, a1);
		}

	};
