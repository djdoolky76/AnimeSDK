#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NFIDNDFHJGN;
namespace System { class Object; }

#define NFIDNDFHJGN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE9E010)
#define NFIDNDFHJGN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE9E050)
#define NFIDNDFHJGN___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FE9E060)

inline static constexpr unsigned int NFIDNDFHJGN___c_TypeDefinitionIndex = 30434;

	class NFIDNDFHJGN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5FEA0);
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
