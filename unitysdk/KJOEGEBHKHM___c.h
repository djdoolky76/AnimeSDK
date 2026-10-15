#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KJOEGEBHKHM;
namespace System { class Object; }

#define KJOEGEBHKHM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8720C0)
#define KJOEGEBHKHM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E872100)
#define KJOEGEBHKHM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E872110)

inline static constexpr unsigned int KJOEGEBHKHM___c_TypeDefinitionIndex = 30951;

	class KJOEGEBHKHM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1D2E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJOEGEBHKHM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJOEGEBHKHM___C_CTOR_OFFSET))(this);
		}

		::KJOEGEBHKHM* __cctor_b__28_0()
		{
			return ((::KJOEGEBHKHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJOEGEBHKHM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
