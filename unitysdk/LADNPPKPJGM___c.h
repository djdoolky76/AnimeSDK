#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LADNPPKPJGM;
namespace System { class Object; }

#define LADNPPKPJGM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC07320)
#define LADNPPKPJGM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC07360)
#define LADNPPKPJGM___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FC07370)

inline static constexpr unsigned int LADNPPKPJGM___c_TypeDefinitionIndex = 35472;

	class LADNPPKPJGM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x25A30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LADNPPKPJGM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LADNPPKPJGM___C_CTOR_OFFSET))(this);
		}

		::LADNPPKPJGM* __cctor_b__33_0()
		{
			return ((::LADNPPKPJGM*(*)(::PVOID))((::PBYTE)hIl2Cpp + LADNPPKPJGM___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
