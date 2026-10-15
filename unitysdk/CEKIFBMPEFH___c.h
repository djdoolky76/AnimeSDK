#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEKIFBMPEFH;
namespace System { class Object; }

#define CEKIFBMPEFH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E06A710)
#define CEKIFBMPEFH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E06A740)
#define CEKIFBMPEFH___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E06A750)

inline static constexpr unsigned int CEKIFBMPEFH___c_TypeDefinitionIndex = 26245;

	class CEKIFBMPEFH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10820);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CEKIFBMPEFH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEKIFBMPEFH___C_CTOR_OFFSET))(this);
		}

		::CEKIFBMPEFH* __cctor_b__33_0()
		{
			return ((::CEKIFBMPEFH*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEKIFBMPEFH___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
