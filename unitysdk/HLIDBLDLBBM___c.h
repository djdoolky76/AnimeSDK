#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLIDBLDLBBM;
namespace System { class Object; }

#define HLIDBLDLBBM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E594220)
#define HLIDBLDLBBM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E594260)
#define HLIDBLDLBBM___C___CCTOR_B__68_0_OFFSET UNITYSDK_OFFSET(0x1E594270)

inline static constexpr unsigned int HLIDBLDLBBM___c_TypeDefinitionIndex = 28644;

	class HLIDBLDLBBM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x38020);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLIDBLDLBBM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLIDBLDLBBM___C_CTOR_OFFSET))(this);
		}

		::HLIDBLDLBBM* __cctor_b__68_0()
		{
			return ((::HLIDBLDLBBM*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLIDBLDLBBM___C___CCTOR_B__68_0_OFFSET))(this);
		}

	};
