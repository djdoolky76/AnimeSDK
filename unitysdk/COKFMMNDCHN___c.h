#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class COKFMMNDCHN;
namespace System { class Object; }

#define COKFMMNDCHN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E107F60)
#define COKFMMNDCHN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E107FA0)
#define COKFMMNDCHN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E107FB0)

inline static constexpr unsigned int COKFMMNDCHN___c_TypeDefinitionIndex = 33432;

	class COKFMMNDCHN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1E590);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COKFMMNDCHN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COKFMMNDCHN___C_CTOR_OFFSET))(this);
		}

		::COKFMMNDCHN* __cctor_b__23_0()
		{
			return ((::COKFMMNDCHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + COKFMMNDCHN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
