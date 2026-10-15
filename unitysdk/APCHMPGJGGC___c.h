#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APCHMPGJGGC;
namespace System { class Object; }

#define APCHMPGJGGC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6465F0)
#define APCHMPGJGGC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E646630)
#define APCHMPGJGGC___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E646640)

inline static constexpr unsigned int APCHMPGJGGC___c_TypeDefinitionIndex = 32975;

	class APCHMPGJGGC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4A000);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + APCHMPGJGGC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APCHMPGJGGC___C_CTOR_OFFSET))(this);
		}

		::APCHMPGJGGC* __cctor_b__43_0()
		{
			return ((::APCHMPGJGGC*(*)(::PVOID))((::PBYTE)hIl2Cpp + APCHMPGJGGC___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
