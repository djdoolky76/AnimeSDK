#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHKPEKJFPFD;
namespace System { class Object; }

#define CHKPEKJFPFD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F39B850)
#define CHKPEKJFPFD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F39B890)
#define CHKPEKJFPFD___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F39B8A0)

inline static constexpr unsigned int CHKPEKJFPFD___c_TypeDefinitionIndex = 27070;

	class CHKPEKJFPFD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10220);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHKPEKJFPFD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHKPEKJFPFD___C_CTOR_OFFSET))(this);
		}

		::CHKPEKJFPFD* __cctor_b__33_0()
		{
			return ((::CHKPEKJFPFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHKPEKJFPFD___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
