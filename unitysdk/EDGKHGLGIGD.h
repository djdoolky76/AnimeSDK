#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GBDIKBFIMIM;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EDGKHGLGIGD_CTOR_OFFSET UNITYSDK_OFFSET(0x133142F0)
#define EDGKHGLGIGD_DPMMPFGKAFJ_OFFSET UNITYSDK_OFFSET(0x13314960)

inline static constexpr unsigned int EDGKHGLGIGD_TypeDefinitionIndex = 81068;

	class EDGKHGLGIGD : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::GBDIKBFIMIM*>* EPCJPLMBLPA; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDGKHGLGIGD_CTOR_OFFSET))(this);
		}

		::GBDIKBFIMIM* DPMMPFGKAFJ(::System::UInt32 a1)
		{
			return ((::GBDIKBFIMIM*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EDGKHGLGIGD_DPMMPFGKAFJ_OFFSET))(this, a1);
		}

	};
