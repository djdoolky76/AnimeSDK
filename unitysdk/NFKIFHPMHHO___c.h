#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NFKIFHPMHHO;
namespace System { class Object; }

#define NFKIFHPMHHO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB04FB0)
#define NFKIFHPMHHO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB04FF0)
#define NFKIFHPMHHO___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1EB05000)

inline static constexpr unsigned int NFKIFHPMHHO___c_TypeDefinitionIndex = 30373;

	class NFKIFHPMHHO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5EA80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFKIFHPMHHO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFKIFHPMHHO___C_CTOR_OFFSET))(this);
		}

		::NFKIFHPMHHO* __cctor_b__48_0()
		{
			return ((::NFKIFHPMHHO*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFKIFHPMHHO___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
