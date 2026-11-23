#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BFB018F9EA8B8E13_A2DD6D74CF9E01AE_OFFSET UNITYSDK_OFFSET(0x170CDA0)
#define BFB018F9EA8B8E13_A7F3D24D94060653_OFFSET UNITYSDK_OFFSET(0x170CBA0)
#define BFB018F9EA8B8E13_B3A38C6FC598B078_OFFSET UNITYSDK_OFFSET(0x170CCC0)
#define BFB018F9EA8B8E13_E57E806E222018A4_OFFSET UNITYSDK_OFFSET(0x170CE20)
#define BFB018F9EA8B8E13__CTOR_OFFSET UNITYSDK_OFFSET(0x170CEE0)

inline static constexpr unsigned int BFB018F9EA8B8E13_TypeDefinitionIndex = 637;

class BFB018F9EA8B8E13 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* E9DD550B4CA41FB8; // 0x10

	::System::Void A7F3D24D94060653(::System::UInt32 AECC71D5E4DCD07D)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BFB018F9EA8B8E13_A7F3D24D94060653_OFFSET))(this, AECC71D5E4DCD07D);
	}

	::System::Void B3A38C6FC598B078(::System::UInt32 AECC71D5E4DCD07D)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BFB018F9EA8B8E13_B3A38C6FC598B078_OFFSET))(this, AECC71D5E4DCD07D);
	}

	::System::Boolean E57E806E222018A4(::System::UInt32 AECC71D5E4DCD07D)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BFB018F9EA8B8E13_E57E806E222018A4_OFFSET))(this, AECC71D5E4DCD07D);
	}

	::System::Void A2DD6D74CF9E01AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFB018F9EA8B8E13_A2DD6D74CF9E01AE_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFB018F9EA8B8E13__CTOR_OFFSET))(this);
	}
};
