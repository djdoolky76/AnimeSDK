#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JDNANJFNLDF;
namespace System { class Object; }

#define JDNANJFNLDF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA1F350)
#define JDNANJFNLDF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA1F390)
#define JDNANJFNLDF___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1FA1F3A0)

inline static constexpr unsigned int JDNANJFNLDF___c_TypeDefinitionIndex = 26592;

	class JDNANJFNLDF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5ECA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JDNANJFNLDF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDNANJFNLDF___C_CTOR_OFFSET))(this);
		}

		::JDNANJFNLDF* __cctor_b__38_0()
		{
			return ((::JDNANJFNLDF*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDNANJFNLDF___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
