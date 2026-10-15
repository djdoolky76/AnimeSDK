#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EDHOBLLOBNP;
namespace System { class Object; }

#define EDHOBLLOBNP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2328E0)
#define EDHOBLLOBNP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E232920)
#define EDHOBLLOBNP___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E232930)

inline static constexpr unsigned int EDHOBLLOBNP___c_TypeDefinitionIndex = 27243;

	class EDHOBLLOBNP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x43FC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDHOBLLOBNP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDHOBLLOBNP___C_CTOR_OFFSET))(this);
		}

		::EDHOBLLOBNP* __cctor_b__38_0()
		{
			return ((::EDHOBLLOBNP*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDHOBLLOBNP___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
