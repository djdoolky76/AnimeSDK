#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PKBJOGHCFOA;
namespace System { class Object; }

#define PKBJOGHCFOA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF59770)
#define PKBJOGHCFOA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF597B0)
#define PKBJOGHCFOA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DF597C0)

inline static constexpr unsigned int PKBJOGHCFOA___c_TypeDefinitionIndex = 28807;

	class PKBJOGHCFOA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x39290);
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
