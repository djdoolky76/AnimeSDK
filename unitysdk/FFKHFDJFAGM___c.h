#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FFKHFDJFAGM;
namespace System { class Object; }

#define FFKHFDJFAGM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E373DB0)
#define FFKHFDJFAGM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E373DF0)
#define FFKHFDJFAGM___C___CCTOR_B__61_0_OFFSET UNITYSDK_OFFSET(0x1E373E00)

inline static constexpr unsigned int FFKHFDJFAGM___c_TypeDefinitionIndex = 31672;

	class FFKHFDJFAGM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5DDF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FFKHFDJFAGM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFKHFDJFAGM___C_CTOR_OFFSET))(this);
		}

		::FFKHFDJFAGM* __cctor_b__61_0()
		{
			return ((::FFKHFDJFAGM*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFKHFDJFAGM___C___CCTOR_B__61_0_OFFSET))(this);
		}

	};
