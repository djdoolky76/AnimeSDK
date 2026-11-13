#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FLGHJEANCAC;
namespace System { class Object; }

#define FLGHJEANCAC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE3F130)
#define FLGHJEANCAC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE3F170)
#define FLGHJEANCAC___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1FE3F180)

inline static constexpr unsigned int FLGHJEANCAC___c_TypeDefinitionIndex = 33682;

	class FLGHJEANCAC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4ABE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLGHJEANCAC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLGHJEANCAC___C_CTOR_OFFSET))(this);
		}

		::FLGHJEANCAC* __cctor_b__18_0()
		{
			return ((::FLGHJEANCAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLGHJEANCAC___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
