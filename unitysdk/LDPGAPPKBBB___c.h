#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LDPGAPPKBBB;
namespace System { class Object; }

#define LDPGAPPKBBB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9024F0)
#define LDPGAPPKBBB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E902520)
#define LDPGAPPKBBB___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1E902530)

inline static constexpr unsigned int LDPGAPPKBBB___c_TypeDefinitionIndex = 29088;

	class LDPGAPPKBBB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x35D10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDPGAPPKBBB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDPGAPPKBBB___C_CTOR_OFFSET))(this);
		}

		::LDPGAPPKBBB* __cctor_b__53_0()
		{
			return ((::LDPGAPPKBBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDPGAPPKBBB___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
