#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MKGHJJCPBLP;
namespace System { class Object; }

#define MKGHJJCPBLP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA593C0)
#define MKGHJJCPBLP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA59400)
#define MKGHJJCPBLP___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1EA59410)

inline static constexpr unsigned int MKGHJJCPBLP___c_TypeDefinitionIndex = 34299;

	class MKGHJJCPBLP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x56F70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKGHJJCPBLP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKGHJJCPBLP___C_CTOR_OFFSET))(this);
		}

		::MKGHJJCPBLP* __cctor_b__43_0()
		{
			return ((::MKGHJJCPBLP*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKGHJJCPBLP___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
