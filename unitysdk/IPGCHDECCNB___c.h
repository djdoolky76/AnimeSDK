#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IPGCHDECCNB;
namespace System { class Object; }

#define IPGCHDECCNB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6B2CA0)
#define IPGCHDECCNB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6B2CE0)
#define IPGCHDECCNB___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E6B2CF0)

inline static constexpr unsigned int IPGCHDECCNB___c_TypeDefinitionIndex = 29267;

	class IPGCHDECCNB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x56060);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPGCHDECCNB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPGCHDECCNB___C_CTOR_OFFSET))(this);
		}

		::IPGCHDECCNB* __cctor_b__33_0()
		{
			return ((::IPGCHDECCNB*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPGCHDECCNB___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
