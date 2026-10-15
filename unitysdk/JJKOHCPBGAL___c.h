#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JJKOHCPBGAL;
namespace System { class Object; }

#define JJKOHCPBGAL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E733320)
#define JJKOHCPBGAL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E733360)
#define JJKOHCPBGAL___C___CCTOR_B__51_0_OFFSET UNITYSDK_OFFSET(0x1E733370)

inline static constexpr unsigned int JJKOHCPBGAL___c_TypeDefinitionIndex = 27629;

	class JJKOHCPBGAL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x62AA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJKOHCPBGAL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJKOHCPBGAL___C_CTOR_OFFSET))(this);
		}

		::JJKOHCPBGAL* __cctor_b__51_0()
		{
			return ((::JJKOHCPBGAL*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJKOHCPBGAL___C___CCTOR_B__51_0_OFFSET))(this);
		}

	};
