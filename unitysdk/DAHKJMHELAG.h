#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HMBJNEDIDHB;
namespace RPG { template <typename T> class PoolList_1; }

#define DAHKJMHELAG_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DB17AF0)
#define DAHKJMHELAG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB17C20)

inline static constexpr unsigned int DAHKJMHELAG_TypeDefinitionIndex = 44635;

	class DAHKJMHELAG : public ::System::Object
	{
	public:
		::HMBJNEDIDHB* BCEJILJPCKC; // 0x10
		::RPG::PoolList_1<::HMBJNEDIDHB*>* FCMFHPHHNPI; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAHKJMHELAG_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAHKJMHELAG_CLEAR_OFFSET))(this);
		}

	};
