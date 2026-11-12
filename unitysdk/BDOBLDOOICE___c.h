#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDOBLDOOICE;
namespace System { class Object; }

#define BDOBLDOOICE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD19470)
#define BDOBLDOOICE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD194B0)
#define BDOBLDOOICE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FD194C0)

inline static constexpr unsigned int BDOBLDOOICE___c_TypeDefinitionIndex = 32480;

	class BDOBLDOOICE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3EB10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDOBLDOOICE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDOBLDOOICE___C_CTOR_OFFSET))(this);
		}

		::BDOBLDOOICE* __cctor_b__28_0()
		{
			return ((::BDOBLDOOICE*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDOBLDOOICE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
