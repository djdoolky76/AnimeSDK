#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NFIDNDFHJGN;
namespace System { class Object; }

#define NFIDNDFHJGN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE45390)
#define NFIDNDFHJGN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE453D0)
#define NFIDNDFHJGN___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FE453E0)

inline static constexpr unsigned int NFIDNDFHJGN___c_TypeDefinitionIndex = 30434;

	class NFIDNDFHJGN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69920);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFIDNDFHJGN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFIDNDFHJGN___C_CTOR_OFFSET))(this);
		}

		::NFIDNDFHJGN* __cctor_b__33_0()
		{
			return ((::NFIDNDFHJGN*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFIDNDFHJGN___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
