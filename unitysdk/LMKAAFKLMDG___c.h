#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LMKAAFKLMDG;
namespace System { class Object; }

#define LMKAAFKLMDG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E97ACC0)
#define LMKAAFKLMDG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E97AD00)
#define LMKAAFKLMDG___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E97AD10)

inline static constexpr unsigned int LMKAAFKLMDG___c_TypeDefinitionIndex = 30516;

	class LMKAAFKLMDG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3E3C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMKAAFKLMDG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKAAFKLMDG___C_CTOR_OFFSET))(this);
		}

		::LMKAAFKLMDG* __cctor_b__33_0()
		{
			return ((::LMKAAFKLMDG*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKAAFKLMDG___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
