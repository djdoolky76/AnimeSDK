#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PHIFCNHKOAI;
namespace System { class Object; }

#define PHIFCNHKOAI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF3CAD0)
#define PHIFCNHKOAI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF3CB10)
#define PHIFCNHKOAI___C___CCTOR_B__46_0_OFFSET UNITYSDK_OFFSET(0x1DF3CB20)

inline static constexpr unsigned int PHIFCNHKOAI___c_TypeDefinitionIndex = 29590;

	class PHIFCNHKOAI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3FE10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHIFCNHKOAI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHIFCNHKOAI___C_CTOR_OFFSET))(this);
		}

		::PHIFCNHKOAI* __cctor_b__46_0()
		{
			return ((::PHIFCNHKOAI*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHIFCNHKOAI___C___CCTOR_B__46_0_OFFSET))(this);
		}

	};
