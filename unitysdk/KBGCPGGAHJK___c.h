#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KBGCPGGAHJK;
namespace System { class Object; }

#define KBGCPGGAHJK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x203B7080)
#define KBGCPGGAHJK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x203B70C0)
#define KBGCPGGAHJK___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x203B70D0)

inline static constexpr unsigned int KBGCPGGAHJK___c_TypeDefinitionIndex = 35108;

	class KBGCPGGAHJK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69D10);
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
