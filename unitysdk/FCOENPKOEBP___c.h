#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOENPKOEBP;
namespace System { class Object; }

#define FCOENPKOEBP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E322E10)
#define FCOENPKOEBP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E322E50)
#define FCOENPKOEBP___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E322E60)

inline static constexpr unsigned int FCOENPKOEBP___c_TypeDefinitionIndex = 28581;

	class FCOENPKOEBP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x51D00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCOENPKOEBP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCOENPKOEBP___C_CTOR_OFFSET))(this);
		}

		::FCOENPKOEBP* __cctor_b__48_0()
		{
			return ((::FCOENPKOEBP*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCOENPKOEBP___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
