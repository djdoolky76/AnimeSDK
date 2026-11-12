#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PFELEGKDCBO;
namespace System { class Object; }

#define PFELEGKDCBO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1F12F0)
#define PFELEGKDCBO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1F1330)
#define PFELEGKDCBO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F1F1340)

inline static constexpr unsigned int PFELEGKDCBO___c_TypeDefinitionIndex = 27644;

	class PFELEGKDCBO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x31F70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PFELEGKDCBO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFELEGKDCBO___C_CTOR_OFFSET))(this);
		}

		::PFELEGKDCBO* __cctor_b__23_0()
		{
			return ((::PFELEGKDCBO*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFELEGKDCBO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
