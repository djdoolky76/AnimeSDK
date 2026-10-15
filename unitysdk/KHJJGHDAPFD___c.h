#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KHJJGHDAPFD;
namespace System { class Object; }

#define KHJJGHDAPFD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E844FD0)
#define KHJJGHDAPFD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E845000)
#define KHJJGHDAPFD___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E845010)

inline static constexpr unsigned int KHJJGHDAPFD___c_TypeDefinitionIndex = 25617;

	class KHJJGHDAPFD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x17540);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHJJGHDAPFD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHJJGHDAPFD___C_CTOR_OFFSET))(this);
		}

		::KHJJGHDAPFD* __cctor_b__33_0()
		{
			return ((::KHJJGHDAPFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHJJGHDAPFD___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
