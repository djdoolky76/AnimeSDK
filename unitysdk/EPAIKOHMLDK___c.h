#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPAIKOHMLDK;
namespace System { class Object; }

#define EPAIKOHMLDK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2D4750)
#define EPAIKOHMLDK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2D4790)
#define EPAIKOHMLDK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E2D47A0)

inline static constexpr unsigned int EPAIKOHMLDK___c_TypeDefinitionIndex = 31252;

	class EPAIKOHMLDK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x478C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPAIKOHMLDK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPAIKOHMLDK___C_CTOR_OFFSET))(this);
		}

		::EPAIKOHMLDK* __cctor_b__23_0()
		{
			return ((::EPAIKOHMLDK*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPAIKOHMLDK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
