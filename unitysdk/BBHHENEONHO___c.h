#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BBHHENEONHO;
namespace System { class Object; }

#define BBHHENEONHO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7C66F0)
#define BBHHENEONHO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7C6730)
#define BBHHENEONHO___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E7C6740)

inline static constexpr unsigned int BBHHENEONHO___c_TypeDefinitionIndex = 33320;

	class BBHHENEONHO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47C90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBHHENEONHO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBHHENEONHO___C_CTOR_OFFSET))(this);
		}

		::BBHHENEONHO* __cctor_b__43_0()
		{
			return ((::BBHHENEONHO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBHHENEONHO___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
