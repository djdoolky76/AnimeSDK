#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IPGOPLALEJG;
namespace System { class Object; }

#define IPGOPLALEJG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F9EC200)
#define IPGOPLALEJG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F9EC240)
#define IPGOPLALEJG___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1F9EC250)

inline static constexpr unsigned int IPGOPLALEJG___c_TypeDefinitionIndex = 30239;

	class IPGOPLALEJG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59490);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPGOPLALEJG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPGOPLALEJG___C_CTOR_OFFSET))(this);
		}

		::IPGOPLALEJG* __cctor_b__38_0()
		{
			return ((::IPGOPLALEJG*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPGOPLALEJG___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
