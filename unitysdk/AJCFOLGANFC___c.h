#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJCFOLGANFC;
namespace System { class Object; }

#define AJCFOLGANFC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E258930)
#define AJCFOLGANFC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E258960)
#define AJCFOLGANFC___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1E258970)

inline static constexpr unsigned int AJCFOLGANFC___c_TypeDefinitionIndex = 33669;

	class AJCFOLGANFC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3C340);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AJCFOLGANFC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJCFOLGANFC___C_CTOR_OFFSET))(this);
		}

		::AJCFOLGANFC* __cctor_b__53_0()
		{
			return ((::AJCFOLGANFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJCFOLGANFC___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
