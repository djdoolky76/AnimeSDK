#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KHADHDLCNOI;
namespace System { class Object; }

#define KHADHDLCNOI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E812150)
#define KHADHDLCNOI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E812180)
#define KHADHDLCNOI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E812190)

inline static constexpr unsigned int KHADHDLCNOI___c_TypeDefinitionIndex = 25363;

	class KHADHDLCNOI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x15C00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHADHDLCNOI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHADHDLCNOI___C_CTOR_OFFSET))(this);
		}

		::KHADHDLCNOI* __cctor_b__28_0()
		{
			return ((::KHADHDLCNOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHADHDLCNOI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
