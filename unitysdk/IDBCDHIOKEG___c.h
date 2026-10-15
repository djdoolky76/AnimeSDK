#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IDBCDHIOKEG;
namespace System { class Object; }

#define IDBCDHIOKEG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5FAEB0)
#define IDBCDHIOKEG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5FAEE0)
#define IDBCDHIOKEG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E5FAEF0)

inline static constexpr unsigned int IDBCDHIOKEG___c_TypeDefinitionIndex = 34729;

	class IDBCDHIOKEG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45AD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IDBCDHIOKEG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDBCDHIOKEG___C_CTOR_OFFSET))(this);
		}

		::IDBCDHIOKEG* __cctor_b__28_0()
		{
			return ((::IDBCDHIOKEG*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDBCDHIOKEG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
