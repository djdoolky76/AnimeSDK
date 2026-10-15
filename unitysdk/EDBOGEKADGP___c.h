#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EDBOGEKADGP;
namespace System { class Object; }

#define EDBOGEKADGP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E25AA00)
#define EDBOGEKADGP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E25AA40)
#define EDBOGEKADGP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E25AA50)

inline static constexpr unsigned int EDBOGEKADGP___c_TypeDefinitionIndex = 32949;

	class EDBOGEKADGP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3F530);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDBOGEKADGP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDBOGEKADGP___C_CTOR_OFFSET))(this);
		}

		::EDBOGEKADGP* __cctor_b__28_0()
		{
			return ((::EDBOGEKADGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDBOGEKADGP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
