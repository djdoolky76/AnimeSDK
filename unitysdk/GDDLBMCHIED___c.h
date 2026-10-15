#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GDDLBMCHIED;
namespace System { class Object; }

#define GDDLBMCHIED___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E445D00)
#define GDDLBMCHIED___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E445D40)
#define GDDLBMCHIED___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E445D50)

inline static constexpr unsigned int GDDLBMCHIED___c_TypeDefinitionIndex = 27066;

	class GDDLBMCHIED___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x101F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDDLBMCHIED___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDLBMCHIED___C_CTOR_OFFSET))(this);
		}

		::GDDLBMCHIED* __cctor_b__28_0()
		{
			return ((::GDDLBMCHIED*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDLBMCHIED___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
