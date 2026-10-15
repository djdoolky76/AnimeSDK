#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMJPAPIDKKM;
namespace System { class Object; }

#define BMJPAPIDKKM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFFCBA0)
#define BMJPAPIDKKM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFFCBD0)
#define BMJPAPIDKKM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DFFCBE0)

inline static constexpr unsigned int BMJPAPIDKKM___c_TypeDefinitionIndex = 32177;

	class BMJPAPIDKKM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5CF70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMJPAPIDKKM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMJPAPIDKKM___C_CTOR_OFFSET))(this);
		}

		::BMJPAPIDKKM* __cctor_b__28_0()
		{
			return ((::BMJPAPIDKKM*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMJPAPIDKKM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
