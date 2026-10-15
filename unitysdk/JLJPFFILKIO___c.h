#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLJPFFILKIO;
namespace System { class Object; }

#define JLJPFFILKIO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E77E9D0)
#define JLJPFFILKIO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E77EA00)
#define JLJPFFILKIO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E77EA10)

inline static constexpr unsigned int JLJPFFILKIO___c_TypeDefinitionIndex = 32329;

	class JLJPFFILKIO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6B940);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLJPFFILKIO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJPFFILKIO___C_CTOR_OFFSET))(this);
		}

		::JLJPFFILKIO* __cctor_b__28_0()
		{
			return ((::JLJPFFILKIO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJPFFILKIO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
