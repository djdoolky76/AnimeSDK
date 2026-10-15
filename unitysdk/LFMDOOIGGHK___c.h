#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LFMDOOIGGHK;
namespace System { class Object; }

#define LFMDOOIGGHK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E946350)
#define LFMDOOIGGHK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E946390)
#define LFMDOOIGGHK___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E9463A0)

inline static constexpr unsigned int LFMDOOIGGHK___c_TypeDefinitionIndex = 33586;

	class LFMDOOIGGHK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3CED0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFMDOOIGGHK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFMDOOIGGHK___C_CTOR_OFFSET))(this);
		}

		::LFMDOOIGGHK* __cctor_b__33_0()
		{
			return ((::LFMDOOIGGHK*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFMDOOIGGHK___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
