#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IJBGABAFCEE;
namespace System { class Object; }

#define IJBGABAFCEE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E690FE0)
#define IJBGABAFCEE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E691020)
#define IJBGABAFCEE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E691030)

inline static constexpr unsigned int IJBGABAFCEE___c_TypeDefinitionIndex = 28996;

	class IJBGABAFCEE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x51E00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IJBGABAFCEE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJBGABAFCEE___C_CTOR_OFFSET))(this);
		}

		::IJBGABAFCEE* __cctor_b__28_0()
		{
			return ((::IJBGABAFCEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJBGABAFCEE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
