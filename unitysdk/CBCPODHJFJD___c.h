#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBCPODHJFJD;
namespace System { class Object; }

#define CBCPODHJFJD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E063A40)
#define CBCPODHJFJD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E063A70)
#define CBCPODHJFJD___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E063A80)

inline static constexpr unsigned int CBCPODHJFJD___c_TypeDefinitionIndex = 28210;

	class CBCPODHJFJD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xB6F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBCPODHJFJD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBCPODHJFJD___C_CTOR_OFFSET))(this);
		}

		::CBCPODHJFJD* __cctor_b__33_0()
		{
			return ((::CBCPODHJFJD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBCPODHJFJD___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
