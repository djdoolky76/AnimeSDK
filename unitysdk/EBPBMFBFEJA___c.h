#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBPBMFBFEJA;
namespace System { class Object; }

#define EBPBMFBFEJA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E21C740)
#define EBPBMFBFEJA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E21C780)
#define EBPBMFBFEJA___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E21C790)

inline static constexpr unsigned int EBPBMFBFEJA___c_TypeDefinitionIndex = 27607;

	class EBPBMFBFEJA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x42630);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBPBMFBFEJA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPBMFBFEJA___C_CTOR_OFFSET))(this);
		}

		::EBPBMFBFEJA* __cctor_b__38_0()
		{
			return ((::EBPBMFBFEJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPBMFBFEJA___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
