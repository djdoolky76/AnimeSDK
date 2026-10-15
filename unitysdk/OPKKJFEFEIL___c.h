#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OPKKJFEFEIL;
namespace System { class Object; }

#define OPKKJFEFEIL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEB7590)
#define OPKKJFEFEIL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEB75D0)
#define OPKKJFEFEIL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DEB75E0)

inline static constexpr unsigned int OPKKJFEFEIL___c_TypeDefinitionIndex = 30456;

	class OPKKJFEFEIL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2B390);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPKKJFEFEIL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPKKJFEFEIL___C_CTOR_OFFSET))(this);
		}

		::OPKKJFEFEIL* __cctor_b__28_0()
		{
			return ((::OPKKJFEFEIL*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPKKJFEFEIL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
