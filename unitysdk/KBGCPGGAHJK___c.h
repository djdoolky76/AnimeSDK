#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KBGCPGGAHJK;
namespace System { class Object; }

#define KBGCPGGAHJK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB03DA0)
#define KBGCPGGAHJK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB03DE0)
#define KBGCPGGAHJK___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FB03DF0)

inline static constexpr unsigned int KBGCPGGAHJK___c_TypeDefinitionIndex = 35108;

	class KBGCPGGAHJK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4E350);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KBGCPGGAHJK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBGCPGGAHJK___C_CTOR_OFFSET))(this);
		}

		::KBGCPGGAHJK* __cctor_b__33_0()
		{
			return ((::KBGCPGGAHJK*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBGCPGGAHJK___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
