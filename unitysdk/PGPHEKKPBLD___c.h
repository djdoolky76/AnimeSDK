#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PGPHEKKPBLD;
namespace System { class Object; }

#define PGPHEKKPBLD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20254E60)
#define PGPHEKKPBLD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20254EA0)
#define PGPHEKKPBLD___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x20254EB0)

inline static constexpr unsigned int PGPHEKKPBLD___c_TypeDefinitionIndex = 32833;

	class PGPHEKKPBLD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x39B20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGPHEKKPBLD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGPHEKKPBLD___C_CTOR_OFFSET))(this);
		}

		::PGPHEKKPBLD* __cctor_b__38_0()
		{
			return ((::PGPHEKKPBLD*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGPHEKKPBLD___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
