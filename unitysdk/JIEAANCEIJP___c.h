#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JIEAANCEIJP;
namespace System { class Object; }

#define JIEAANCEIJP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E71D1B0)
#define JIEAANCEIJP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E71D1E0)
#define JIEAANCEIJP___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E71D1F0)

inline static constexpr unsigned int JIEAANCEIJP___c_TypeDefinitionIndex = 25428;

	class JIEAANCEIJP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F760);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JIEAANCEIJP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIEAANCEIJP___C_CTOR_OFFSET))(this);
		}

		::JIEAANCEIJP* __cctor_b__38_0()
		{
			return ((::JIEAANCEIJP*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIEAANCEIJP___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
