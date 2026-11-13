#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CloudGraphicsSettingType.h"
#include "unitysdk/System/Object.h"
class DHADINIAOAA;
namespace System { class Object; }
namespace System::Collections::Concurrent { template <typename T> class ConcurrentQueue_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DNNHKEOEAIB_CTOR_OFFSET UNITYSDK_OFFSET(0x19199560)
#define DNNHKEOEAIB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19199340)
#define DNNHKEOEAIB_FLGGEJIJGKJ_OFFSET UNITYSDK_OFFSET(0x19199450)
#define DNNHKEOEAIB_HOFFFFOKACC_OFFSET UNITYSDK_OFFSET(0x19198DE0)
#define DNNHKEOEAIB_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x19198C80)
#define DNNHKEOEAIB_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x19198B60)

inline static constexpr unsigned int DNNHKEOEAIB_TypeDefinitionIndex = 61108;

	class DNNHKEOEAIB : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::Client::CloudGraphicsSettingType, ::System::Object*>* KNPDAPNGBFO; // 0x10
		::DHADINIAOAA* IFCMENDDFIK; // 0x18
		::System::Collections::Concurrent::ConcurrentQueue_1<::Il2CppArray<::System::Byte>*>* CFEEKKNHLEH; // 0x20
		::System::Byte DBOEHPLAGHO; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNNHKEOEAIB_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNNHKEOEAIB_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DNNHKEOEAIB_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNNHKEOEAIB_DISPOSE_OFFSET))(this);
		}

		::System::Void FLGGEJIJGKJ(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + DNNHKEOEAIB_FLGGEJIJGKJ_OFFSET))(this, a1);
		}

		::System::Void HOFFFFOKACC(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + DNNHKEOEAIB_HOFFFFOKACC_OFFSET))(this, a1);
		}

	};
