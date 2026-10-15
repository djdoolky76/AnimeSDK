#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ODKKAPPADGE;
namespace System { class Object; }

#define ODKKAPPADGE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDF2320)
#define ODKKAPPADGE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDF2350)
#define ODKKAPPADGE___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1DDF2360)

inline static constexpr unsigned int ODKKAPPADGE___c_TypeDefinitionIndex = 34555;

	class ODKKAPPADGE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x127B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ODKKAPPADGE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKKAPPADGE___C_CTOR_OFFSET))(this);
		}

		::ODKKAPPADGE* __cctor_b__18_0()
		{
			return ((::ODKKAPPADGE*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKKAPPADGE___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
