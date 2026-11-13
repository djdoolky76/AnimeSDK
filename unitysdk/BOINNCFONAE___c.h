#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BOINNCFONAE;
namespace System { class Object; }

#define BOINNCFONAE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF70DD0)
#define BOINNCFONAE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF70E10)
#define BOINNCFONAE___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1FF70E20)

inline static constexpr unsigned int BOINNCFONAE___c_TypeDefinitionIndex = 29405;

	class BOINNCFONAE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D060);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BOINNCFONAE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOINNCFONAE___C_CTOR_OFFSET))(this);
		}

		::BOINNCFONAE* __cctor_b__43_0()
		{
			return ((::BOINNCFONAE*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOINNCFONAE___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
