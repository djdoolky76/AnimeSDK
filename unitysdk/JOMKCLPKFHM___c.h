#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JOMKCLPKFHM;
namespace System { class Object; }

#define JOMKCLPKFHM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8D2D90)
#define JOMKCLPKFHM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8D2DD0)
#define JOMKCLPKFHM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F8D2DE0)

inline static constexpr unsigned int JOMKCLPKFHM___c_TypeDefinitionIndex = 27768;

	class JOMKCLPKFHM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x68580);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOMKCLPKFHM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMKCLPKFHM___C_CTOR_OFFSET))(this);
		}

		::JOMKCLPKFHM* __cctor_b__23_0()
		{
			return ((::JOMKCLPKFHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMKCLPKFHM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
