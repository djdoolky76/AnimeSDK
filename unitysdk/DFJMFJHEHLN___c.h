#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFJMFJHEHLN;
namespace System { class Object; }

#define DFJMFJHEHLN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F47D4F0)
#define DFJMFJHEHLN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F47D530)
#define DFJMFJHEHLN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F47D540)

inline static constexpr unsigned int DFJMFJHEHLN___c_TypeDefinitionIndex = 29775;

	class DFJMFJHEHLN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2D470);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFJMFJHEHLN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJMFJHEHLN___C_CTOR_OFFSET))(this);
		}

		::DFJMFJHEHLN* __cctor_b__23_0()
		{
			return ((::DFJMFJHEHLN*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJMFJHEHLN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
