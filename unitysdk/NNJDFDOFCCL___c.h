#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NNJDFDOFCCL;
namespace System { class Object; }

#define NNJDFDOFCCL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FEE2270)
#define NNJDFDOFCCL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FEE22B0)
#define NNJDFDOFCCL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FEE22C0)

inline static constexpr unsigned int NNJDFDOFCCL___c_TypeDefinitionIndex = 30557;

	class NNJDFDOFCCL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x51970);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNJDFDOFCCL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJDFDOFCCL___C_CTOR_OFFSET))(this);
		}

		::NNJDFDOFCCL* __cctor_b__23_0()
		{
			return ((::NNJDFDOFCCL*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJDFDOFCCL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
