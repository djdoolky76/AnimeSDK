#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PKBJOGHCFOA;
namespace System { class Object; }

#define PKBJOGHCFOA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F238530)
#define PKBJOGHCFOA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F238570)
#define PKBJOGHCFOA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F238580)

inline static constexpr unsigned int PKBJOGHCFOA___c_TypeDefinitionIndex = 29397;

	class PKBJOGHCFOA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3BD00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKBJOGHCFOA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBJOGHCFOA___C_CTOR_OFFSET))(this);
		}

		::PKBJOGHCFOA* __cctor_b__33_0()
		{
			return ((::PKBJOGHCFOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBJOGHCFOA___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
