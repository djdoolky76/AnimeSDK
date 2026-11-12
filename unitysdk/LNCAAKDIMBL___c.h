#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LNCAAKDIMBL;
namespace System { class Object; }

#define LNCAAKDIMBL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FCD5AD0)
#define LNCAAKDIMBL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FCD5B10)
#define LNCAAKDIMBL___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1FCD5B20)

inline static constexpr unsigned int LNCAAKDIMBL___c_TypeDefinitionIndex = 28671;

	class LNCAAKDIMBL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x42650);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LNCAAKDIMBL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNCAAKDIMBL___C_CTOR_OFFSET))(this);
		}

		::LNCAAKDIMBL* __cctor_b__58_0()
		{
			return ((::LNCAAKDIMBL*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNCAAKDIMBL___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};
