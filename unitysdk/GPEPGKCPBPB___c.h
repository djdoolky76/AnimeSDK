#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GPEPGKCPBPB;
namespace System { class Object; }

#define GPEPGKCPBPB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD00A90)
#define GPEPGKCPBPB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD00AD0)
#define GPEPGKCPBPB___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1FD00AE0)

inline static constexpr unsigned int GPEPGKCPBPB___c_TypeDefinitionIndex = 34397;

	class GPEPGKCPBPB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1CAE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GPEPGKCPBPB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPEPGKCPBPB___C_CTOR_OFFSET))(this);
		}

		::GPEPGKCPBPB* __cctor_b__43_0()
		{
			return ((::GPEPGKCPBPB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPEPGKCPBPB___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
