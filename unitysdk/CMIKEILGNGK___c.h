#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CMIKEILGNGK;
namespace System { class Object; }

#define CMIKEILGNGK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0D52F0)
#define CMIKEILGNGK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0D5330)
#define CMIKEILGNGK___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E0D5340)

inline static constexpr unsigned int CMIKEILGNGK___c_TypeDefinitionIndex = 25571;

	class CMIKEILGNGK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1C3B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CMIKEILGNGK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMIKEILGNGK___C_CTOR_OFFSET))(this);
		}

		::CMIKEILGNGK* __cctor_b__33_0()
		{
			return ((::CMIKEILGNGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMIKEILGNGK___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
