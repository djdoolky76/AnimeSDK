#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCGMKPGGCAC;
namespace System { class Object; }

#define FCGMKPGGCAC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E346840)
#define FCGMKPGGCAC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E346880)
#define FCGMKPGGCAC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E346890)

inline static constexpr unsigned int FCGMKPGGCAC___c_TypeDefinitionIndex = 30868;

	class FCGMKPGGCAC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5A1C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCGMKPGGCAC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCGMKPGGCAC___C_CTOR_OFFSET))(this);
		}

		::FCGMKPGGCAC* __cctor_b__33_0()
		{
			return ((::FCGMKPGGCAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCGMKPGGCAC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
