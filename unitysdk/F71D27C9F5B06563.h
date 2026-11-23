#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AD61077CFCBEFAEA.h"
#include "unitysdk/E865F6F8B8B44C1E.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/A3B17C172EC49C40.h"

class E8C46B427E5B31C6;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define F71D27C9F5B06563_AA7140CABC94A787_OFFSET UNITYSDK_OFFSET(0x22B6B50)
#define F71D27C9F5B06563_B18F345DB7349764_OFFSET UNITYSDK_OFFSET(0x22B6900)

inline static constexpr unsigned int F71D27C9F5B06563_TypeDefinitionIndex = 7218;

struct alignas(8) F71D27C9F5B06563
{
	::System::UInt32 EF76C23A02DB63B0; // 0x10
	::System::Byte _padding0[0x4];
	::AD61077CFCBEFAEA F221679EC71C9162; // 0x18
	::System::Collections::Generic::Dictionary_2<::UnityEngine::A3B17C172EC49C40, ::E865F6F8B8B44C1E>* E0E2C94B10922BE2; // 0x20

	::System::Boolean AA7140CABC94A787(::UnityEngine::A3B17C172EC49C40 A17C2EA4E6D79CFE, ::E865F6F8B8B44C1E& BB4F25856E36DD9B)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::A3B17C172EC49C40, ::E865F6F8B8B44C1E&))((::PBYTE)hIl2Cpp + F71D27C9F5B06563_AA7140CABC94A787_OFFSET))(this, A17C2EA4E6D79CFE, BB4F25856E36DD9B);
	}

	::System::Void B18F345DB7349764(::System::UInt32 A0E15746C5AB2C92, ::E8C46B427E5B31C6* E4DA6A21264457EE)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::E8C46B427E5B31C6*))((::PBYTE)hIl2Cpp + F71D27C9F5B06563_B18F345DB7349764_OFFSET))(this, A0E15746C5AB2C92, E4DA6A21264457EE);
	}
};
