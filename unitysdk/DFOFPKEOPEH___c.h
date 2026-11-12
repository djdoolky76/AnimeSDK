#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFOFPKEOPEH;
namespace System { class Object; }

#define DFOFPKEOPEH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F485E70)
#define DFOFPKEOPEH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F485EB0)
#define DFOFPKEOPEH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F485EC0)

inline static constexpr unsigned int DFOFPKEOPEH___c_TypeDefinitionIndex = 30038;

	class DFOFPKEOPEH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2EE10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFOFPKEOPEH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFOFPKEOPEH___C_CTOR_OFFSET))(this);
		}

		::DFOFPKEOPEH* __cctor_b__23_0()
		{
			return ((::DFOFPKEOPEH*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFOFPKEOPEH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
