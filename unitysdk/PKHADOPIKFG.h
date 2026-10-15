#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHEGOEGGGDK.h"
class NOCGHCNMOKB;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PKHADOPIKFG_CTOR_OFFSET UNITYSDK_OFFSET(0xC2BAC80)
#define PKHADOPIKFG_OOFKOICLFLE_OFFSET UNITYSDK_OFFSET(0xC2BAA10)
#define PKHADOPIKFG__REBUILD_OFFSET UNITYSDK_OFFSET(0xC2BAB30)

inline static constexpr unsigned int PKHADOPIKFG_TypeDefinitionIndex = 62831;

	class PKHADOPIKFG : public ::JHEGOEGGGDK
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKHADOPIKFG_CTOR_OFFSET))(this);
		}

		::System::Void OOFKOICLFLE(::System::Collections::Generic::List_1<::NOCGHCNMOKB*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::NOCGHCNMOKB*>*))((::PBYTE)hIl2Cpp + PKHADOPIKFG_OOFKOICLFLE_OFFSET))(this, a1);
		}

		::System::Void _Rebuild()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKHADOPIKFG__REBUILD_OFFSET))(this);
		}

	};
