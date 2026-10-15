#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JADFEJKNOCO;
namespace System { class Object; }

#define JADFEJKNOCO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6BF710)
#define JADFEJKNOCO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6BF750)
#define JADFEJKNOCO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E6BF760)

inline static constexpr unsigned int JADFEJKNOCO___c_TypeDefinitionIndex = 34401;

	class JADFEJKNOCO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57450);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JADFEJKNOCO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JADFEJKNOCO___C_CTOR_OFFSET))(this);
		}

		::JADFEJKNOCO* __cctor_b__28_0()
		{
			return ((::JADFEJKNOCO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JADFEJKNOCO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
