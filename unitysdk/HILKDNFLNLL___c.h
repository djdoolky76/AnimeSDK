#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HILKDNFLNLL;
namespace System { class Object; }

#define HILKDNFLNLL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F896480)
#define HILKDNFLNLL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8964C0)
#define HILKDNFLNLL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F8964D0)

inline static constexpr unsigned int HILKDNFLNLL___c_TypeDefinitionIndex = 35681;

	class HILKDNFLNLL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32000);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HILKDNFLNLL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HILKDNFLNLL___C_CTOR_OFFSET))(this);
		}

		::HILKDNFLNLL* __cctor_b__28_0()
		{
			return ((::HILKDNFLNLL*(*)(::PVOID))((::PBYTE)hIl2Cpp + HILKDNFLNLL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
