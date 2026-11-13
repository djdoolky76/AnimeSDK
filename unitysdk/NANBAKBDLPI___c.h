#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NANBAKBDLPI;
namespace System { class Object; }

#define NANBAKBDLPI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x201500F0)
#define NANBAKBDLPI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20150120)
#define NANBAKBDLPI___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x20150130)

inline static constexpr unsigned int NANBAKBDLPI___c_TypeDefinitionIndex = 32320;

	class NANBAKBDLPI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57390);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NANBAKBDLPI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NANBAKBDLPI___C_CTOR_OFFSET))(this);
		}

		::NANBAKBDLPI* __cctor_b__38_0()
		{
			return ((::NANBAKBDLPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NANBAKBDLPI___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
