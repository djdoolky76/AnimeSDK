#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ANHJKLLEKKB;
namespace System { class Object; }

#define ANHJKLLEKKB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2019E820)
#define ANHJKLLEKKB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2019E860)
#define ANHJKLLEKKB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x2019E870)

inline static constexpr unsigned int ANHJKLLEKKB___c_TypeDefinitionIndex = 30724;

	class ANHJKLLEKKB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3BDB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANHJKLLEKKB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANHJKLLEKKB___C_CTOR_OFFSET))(this);
		}

		::ANHJKLLEKKB* __cctor_b__28_0()
		{
			return ((::ANHJKLLEKKB*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANHJKLLEKKB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
