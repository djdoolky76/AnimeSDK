#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBPAKHMFKML;
namespace System { class Object; }

#define EBPAKHMFKML___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F36E730)
#define EBPAKHMFKML___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F36E760)
#define EBPAKHMFKML___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1F36E770)

inline static constexpr unsigned int EBPAKHMFKML___c_TypeDefinitionIndex = 33719;

	class EBPAKHMFKML___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x446D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBPAKHMFKML___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPAKHMFKML___C_CTOR_OFFSET))(this);
		}

		::EBPAKHMFKML* __cctor_b__18_0()
		{
			return ((::EBPAKHMFKML*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPAKHMFKML___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
