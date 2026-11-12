#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PGNEMAJPKND;
namespace System { class Object; }

#define PGNEMAJPKND___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F203F00)
#define PGNEMAJPKND___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F203F40)
#define PGNEMAJPKND___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F203F50)

inline static constexpr unsigned int PGNEMAJPKND___c_TypeDefinitionIndex = 32506;

	class PGNEMAJPKND___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x34BF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGNEMAJPKND___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGNEMAJPKND___C_CTOR_OFFSET))(this);
		}

		::PGNEMAJPKND* __cctor_b__33_0()
		{
			return ((::PGNEMAJPKND*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGNEMAJPKND___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
