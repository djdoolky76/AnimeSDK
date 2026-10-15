#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KOKMBKGPCFE;
namespace System { class Object; }

#define KOKMBKGPCFE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E885F10)
#define KOKMBKGPCFE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E885F50)
#define KOKMBKGPCFE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E885F60)

inline static constexpr unsigned int KOKMBKGPCFE___c_TypeDefinitionIndex = 29693;

	class KOKMBKGPCFE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x21840);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KOKMBKGPCFE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKMBKGPCFE___C_CTOR_OFFSET))(this);
		}

		::KOKMBKGPCFE* __cctor_b__23_0()
		{
			return ((::KOKMBKGPCFE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKMBKGPCFE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
