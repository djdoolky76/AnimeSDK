#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IOAFKPDEIEA;
namespace System { class Object; }

#define IOAFKPDEIEA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F672CC0)
#define IOAFKPDEIEA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F672CF0)
#define IOAFKPDEIEA___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1F672D00)

inline static constexpr unsigned int IOAFKPDEIEA___c_TypeDefinitionIndex = 32521;

	class IOAFKPDEIEA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x514D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IOAFKPDEIEA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOAFKPDEIEA___C_CTOR_OFFSET))(this);
		}

		::IOAFKPDEIEA* __cctor_b__48_0()
		{
			return ((::IOAFKPDEIEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOAFKPDEIEA___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
