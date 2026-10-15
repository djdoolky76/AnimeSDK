#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AIPNFBBDNEO;
namespace System { class Object; }

#define AIPNFBBDNEO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2561E0)
#define AIPNFBBDNEO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E256220)
#define AIPNFBBDNEO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E256230)

inline static constexpr unsigned int AIPNFBBDNEO___c_TypeDefinitionIndex = 30690;

	class AIPNFBBDNEO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3C0A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AIPNFBBDNEO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPNFBBDNEO___C_CTOR_OFFSET))(this);
		}

		::AIPNFBBDNEO* __cctor_b__23_0()
		{
			return ((::AIPNFBBDNEO*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPNFBBDNEO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
