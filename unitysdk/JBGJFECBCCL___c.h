#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JBGJFECBCCL;
namespace System { class Object; }

#define JBGJFECBCCL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA015F0)
#define JBGJFECBCCL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA01630)
#define JBGJFECBCCL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FA01640)

inline static constexpr unsigned int JBGJFECBCCL___c_TypeDefinitionIndex = 29787;

	class JBGJFECBCCL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5B880);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JBGJFECBCCL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBGJFECBCCL___C_CTOR_OFFSET))(this);
		}

		::JBGJFECBCCL* __cctor_b__23_0()
		{
			return ((::JBGJFECBCCL*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBGJFECBCCL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
