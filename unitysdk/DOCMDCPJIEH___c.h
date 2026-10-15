#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DOCMDCPJIEH;
namespace System { class Object; }

#define DOCMDCPJIEH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1FDDD0)
#define DOCMDCPJIEH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1FDE10)
#define DOCMDCPJIEH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E1FDE20)

inline static constexpr unsigned int DOCMDCPJIEH___c_TypeDefinitionIndex = 34845;

	class DOCMDCPJIEH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x419B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DOCMDCPJIEH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOCMDCPJIEH___C_CTOR_OFFSET))(this);
		}

		::DOCMDCPJIEH* __cctor_b__28_0()
		{
			return ((::DOCMDCPJIEH*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOCMDCPJIEH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
