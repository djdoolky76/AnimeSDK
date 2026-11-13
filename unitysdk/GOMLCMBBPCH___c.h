#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GOMLCMBBPCH;
namespace System { class Object; }

#define GOMLCMBBPCH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FCFB0F0)
#define GOMLCMBBPCH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FCFB120)
#define GOMLCMBBPCH___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1FCFB130)

inline static constexpr unsigned int GOMLCMBBPCH___c_TypeDefinitionIndex = 27504;

	class GOMLCMBBPCH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1BFD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOMLCMBBPCH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOMLCMBBPCH___C_CTOR_OFFSET))(this);
		}

		::GOMLCMBBPCH* __cctor_b__18_0()
		{
			return ((::GOMLCMBBPCH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOMLCMBBPCH___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
