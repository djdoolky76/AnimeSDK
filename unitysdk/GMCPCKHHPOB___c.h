#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GMCPCKHHPOB;
namespace System { class Object; }

#define GMCPCKHHPOB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4CFBA0)
#define GMCPCKHHPOB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4CFBE0)
#define GMCPCKHHPOB___C___CCTOR_B__69_0_OFFSET UNITYSDK_OFFSET(0x1E4CFBF0)

inline static constexpr unsigned int GMCPCKHHPOB___c_TypeDefinitionIndex = 34780;

	class GMCPCKHHPOB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x21780);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMCPCKHHPOB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMCPCKHHPOB___C_CTOR_OFFSET))(this);
		}

		::GMCPCKHHPOB* __cctor_b__69_0()
		{
			return ((::GMCPCKHHPOB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMCPCKHHPOB___C___CCTOR_B__69_0_OFFSET))(this);
		}

	};
