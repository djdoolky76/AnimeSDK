#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OIIDOJCEEDN;
namespace System { class Object; }

#define OIIDOJCEEDN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE424B0)
#define OIIDOJCEEDN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE424F0)
#define OIIDOJCEEDN___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1DE42500)

inline static constexpr unsigned int OIIDOJCEEDN___c_TypeDefinitionIndex = 27537;

	class OIIDOJCEEDN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1A6B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OIIDOJCEEDN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIIDOJCEEDN___C_CTOR_OFFSET))(this);
		}

		::OIIDOJCEEDN* __cctor_b__48_0()
		{
			return ((::OIIDOJCEEDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIIDOJCEEDN___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
