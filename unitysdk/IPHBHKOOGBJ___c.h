#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IPHBHKOOGBJ;
namespace System { class Object; }

#define IPHBHKOOGBJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6E3BA0)
#define IPHBHKOOGBJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6E3BE0)
#define IPHBHKOOGBJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E6E3BF0)

inline static constexpr unsigned int IPHBHKOOGBJ___c_TypeDefinitionIndex = 29404;

	class IPHBHKOOGBJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5B1E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPHBHKOOGBJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPHBHKOOGBJ___C_CTOR_OFFSET))(this);
		}

		::IPHBHKOOGBJ* __cctor_b__23_0()
		{
			return ((::IPHBHKOOGBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPHBHKOOGBJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
